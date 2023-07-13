using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ExportMesh : MonoBehaviour {

    public string fileName = "ExportedScoliosisBrace.obj";
    public MeshDeformer meshDeformer;
    public float extrusionDistance = 3f;

    private class VertexPair {
        public int InnerWallVert { get; set; }
        public int OuterWallVert { get; set; }

        public VertexPair ( int innerWallVert, int outerWallVert ) {
            InnerWallVert = innerWallVert;
            OuterWallVert = outerWallVert;
        }
    }

    private class VertexData {
        public Vector3 Vertex { get; set; }
        public List<int> OldIndices { get; set; }
        public int Number { get; set; }

        public VertexData ( Vector3 vertex, List<int> oldIndices, int number ) {
            Vertex = vertex;
            OldIndices = oldIndices;
            Number = number;
        }
    }

    private class TriangleData {
        public int TriangleIndex { get; set; }
        public bool Changed { get; set; }

        public TriangleData ( int triangleIndex, bool changed ) {
            TriangleIndex = triangleIndex;
            Changed = changed;
        }
    }

    private List<VertexData> vertexInfo = new();
    private int index;
    private int[] topEdgeIndices, bottomEdgeIndices;

    public void ExtrudeMesh () {
        Mesh innerWall = meshDeformer.deformedMesh;
        Mesh mesh = Instantiate( innerWall );
 
        mesh = SimplifyMesh( mesh );
        Vector3[] vertices = mesh.vertices;
        int[] triangles = mesh.triangles;

        Vector3[] newVertices = new Vector3[ mesh.vertices.Length * 2 ];
        int[] newTriangles = new int[ mesh.triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, mesh.vertices.Length );
        Array.Copy( triangles, newTriangles, mesh.triangles.Length );

        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + ( new Vector3( mesh.normals[ i ].x, 0, mesh.normals[ i ].z ) * extrusionDistance );
        }

        FindEdgeVertices( vertices );

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
        }

        mesh.vertices = newVertices;
        mesh.triangles = newTriangles;

        VertexPair[] vertexPairs = new VertexPair[ vertices.Length ];
        for ( int i = 0; i < vertices.Length / 2; i++ ) {
            vertexPairs[ i ] = new VertexPair( i, i + vertices.Length );
        }

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject newObject = new();
        newObject.AddComponent<MeshFilter>().mesh = mesh;

        Export( newObject );
    }

    private Mesh SimplifyMesh ( Mesh mesh ) {
        Vector3[] startingVertices = mesh.vertices;
        int[] startingTriangles = mesh.triangles;

        //For each unique index in the vertices array, add all occurences of the vertex in the oldIndices list and add that vertex to the vertexInfo array
        for ( int i = 0; i < startingVertices.Length; i++ ) {
            Vector3 tempVertex = startingVertices[ i ];
            bool foundInArray = CheckIfExists( tempVertex );

            if ( foundInArray )
                vertexInfo[ index ].OldIndices.Add( i );
            else
                vertexInfo.Add( new VertexData( tempVertex, new List<int>() { i }, 0 ) );
        }

        //Loop through all triangles and replace all occurences of indices in oldIndices with the new one
        List<TriangleData> triangleInfo = new();
        for ( int i = 0; i < startingTriangles.Length; i++ ) {
            triangleInfo.Add( new TriangleData( startingTriangles[ i ], false ) );
        }

        for ( int i = 0; i < vertexInfo.Count; i++ ) {
            List<int> oldIndices = vertexInfo[ i ].OldIndices;
            int newIndex = i;

            for ( int index = 0; index < oldIndices.Count; index++ ) {
                for ( int j = 0; j < triangleInfo.Count; j++ ) {
                    if ( oldIndices[ index ] == triangleInfo[ j ].TriangleIndex && triangleInfo[ j ].Changed == false ) {
                        triangleInfo[ j ].TriangleIndex = newIndex;
                        triangleInfo[ j ].Changed = true;
                    }
                }
            }
        }

        int[] newTriangles = new int[ triangleInfo.Count ];
        for ( int i = 0; i < newTriangles.Length; i++ ) {
            newTriangles[ i ] = triangleInfo[ i ].TriangleIndex;
        }

        Vector3[] updatedVertices = new Vector3[ vertexInfo.Count ];
        for ( int i = 0; i < updatedVertices.Length; i++ ) {
            updatedVertices[ i ] = vertexInfo[ i ].Vertex;
        }

        Mesh newMesh = new() {
            vertices = updatedVertices,
            triangles = newTriangles
        };
        newMesh.RecalculateBounds();
        newMesh.RecalculateNormals();

        return newMesh;
    }

    private void FindEdgeVertices ( Vector3[] vertices ) {
        float topPoint = vertices[ 0 ].y;
        float bottomPoint = vertices[ 0 ].y;

        for ( int i = 1; i < vertices.Length; i++ ) {
            if ( vertices[ i ].y > topPoint )
                topPoint = vertices[ i ].y;
            if ( vertices[ i ].y < bottomPoint )
                bottomPoint = vertices[ i ].y;
        }

        List<int> topEdge = new();
        List<int> bottomEdge = new();
        for (int i = 0; i < vertices.Length; i++ ) {
            if ( vertices[ i ].y <= topPoint + 0.01 && vertices[i].y >= topPoint - 0.01 )
                topEdge.Add( i );
            else if ( vertices[i].y <= bottomPoint + 0.01 && vertices[i].y >= bottomPoint - 0.01 )
                bottomEdge.Add( i );
        }

        topEdgeIndices = new int[ topEdge.Count ];
        for (int i = 0; i < topEdge.Count; i++ ) {
            topEdgeIndices[ i ] = topEdge[ i ];
        }

        bottomEdgeIndices = new int[ bottomEdge.Count ];
        for ( int i = 0; i < bottomEdge.Count; i++ ) {
            bottomEdgeIndices[ i ] = bottomEdge[ i ];
        }
    }

    private bool CheckIfExists ( Vector3 vertex ) {
        for ( int i = 0; i < vertexInfo.Count; i++ ) {
            if ( vertexInfo[ i ].Vertex == vertex ) {
                index = i;
                return true;
            }
        }
        return false;
    }

    private void Export ( GameObject gameObject ) {
        string filePath = Application.dataPath;
        filePath = Path.Combine( filePath, string.Concat( "Exports\\", fileName ) );
        filePath = Path.GetFullPath( filePath );

        if ( File.Exists( filePath ) )
            File.Delete( filePath );

        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
        int[] triangles = mesh.triangles;

        try {
            FileStream stream = new( filePath, FileMode.CreateNew );
            using ( StreamWriter fileWriter = new( stream ) ) {
                for ( int i = 0; i < vertices.Length; i++ ) {
                    fileWriter.Write( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                }
                for ( int i = 0; i < normals.Length; i++ ) {
                    fileWriter.Write( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                }
                for ( int i = 0; i < triangles.Length; i += 3 ) {
                    fileWriter.Write( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                }
            }
        } catch { }
    }
}  