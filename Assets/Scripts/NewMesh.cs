using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewMesh : MonoBehaviour {

    public class VertexStuff {
        public Vector3 Vertex { get; set; }
        public List<int> OldIndices { get; set; }

        public VertexStuff ( Vector3 vertex, List<int> oldIndices ) {
            Vertex = vertex;
            OldIndices = oldIndices;
        }
    }

    public class TriangleStuff {
        public int TriangleIndex { get; set; }
        public bool Changed { get; set; }

        public TriangleStuff ( int triangleIndex, bool changed ) {
            TriangleIndex = triangleIndex;
            Changed = changed;
        }
    }

    private List<VertexStuff> vertexInfo = new();
    private int index;
    private int[] newTriangles;

    private void Start () {
        Vector3[] testArray = new Vector3[] {
            new Vector3( 0, 0, 0 ), //0
            new Vector3( 8, 13, 22 ), //1
            new Vector3( 4, 5, 6 ), //2
            new Vector3( 0, 0, 0 ), //3
            new Vector3( 0, 0, 0 ), //4
            new Vector3( 8, 45, 21 ), //5
            new Vector3( 3489, 76798, 23 ), //6
            new Vector3( 231, 576, 89435 ), //7
            new Vector3( 8, 13, 22 ), //8
            new Vector3( 123, 456, 879 ), //9
            new Vector3( 213, 21123, 132 ), //10
            new Vector3( 231, 576, 89435 ) //11
        };

        int[] oldTriangles = new int[] { 0, 2, 1, 3, 1, 2, 4, 5, 6, 8, 6, 9, 9, 10, 11 };
        //                             { 0, 2, 1, 0, 1, 2, 0, 3, 4, 1, 4, 6, 6, 7, 5 }

        Vector3[] newArray = SimplifyMesh( testArray, oldTriangles );
    
        Debug.Log( $"testArray: {string.Join( ", ", testArray )}: {testArray.Length}" );
        Debug.Log( $"newArray: {string.Join( ", ", newArray )}: {newArray.Length}" );

        Debug.Log( $"oldTriangles: {string.Join( ", ", oldTriangles )}" );
        Debug.Log( $"newTriangles: {string.Join( ", ", newTriangles )}" );
    }

    private Vector3[] SimplifyMesh ( Vector3[] startingVertices, int[] triangles ) {

        //go through all vertices, and add them to the vertexStuff array, for each unique index add all the occurrences of the vertex to the oldIndices list and the newIndex (which is the index of the vertexInfo array)
        for (int i = 0; i < startingVertices.Length; i++) {
            Vector3 tempVertex = startingVertices[i];
            bool foundInArray = CheckIfExists( tempVertex );

            if ( foundInArray )
                vertexInfo[ index ].OldIndices.Add( i );
            else
                vertexInfo.Add( new VertexStuff( tempVertex, new List<int>() { i } ) );
        }

        for (int i = 0; i < vertexInfo.Count; i++ ) {
            Debug.Log( $"At index {i}: Vertex: {string.Join( ", ", vertexInfo[ i ].Vertex )} and oldIndices: {string.Join( ", ", vertexInfo[ i ].OldIndices )}" );
        }

        //go through triangles array and change all occurences of oldIndices to new ones and "check them off" somehow (make new data structure, copy the triangles and have a bool that's akss if its been changed)
        List<TriangleStuff> triangleInfo = new();
        for (int i = 0; i < triangles.Length; i++ ) {
            triangleInfo.Add( new TriangleStuff( triangles[ i ], false ) );
        }

        for (int i = 0; i < triangleInfo.Count; i++ ) {
            Debug.Log( "TriangleIndex: " + triangleInfo[ i ].TriangleIndex + " Changed? " + triangleInfo[ i ].Changed );
        }

        for (int i = 0; i < vertexInfo.Count; i++ ) {
            List<int> oldIndices = vertexInfo[ i ].OldIndices;
            int newIndex = i;
            Debug.Log( $"oldIndices: {string.Join( ", ", oldIndices )} and newIndex: {newIndex}" );


            for (int index = 0; index < oldIndices.Count; index++ ) {
                Debug.Log( "old index: " + oldIndices[ index ] );
                for ( int j = 0; j < triangleInfo.Count; j++ ) {
                    Debug.Log( "Inside for loop: old index: " + oldIndices[ index ] + " compared index: " + triangleInfo[ j ].TriangleIndex );
                    if ( oldIndices[index] == triangleInfo[j].TriangleIndex && triangleInfo[j].Changed == false ) {
                        triangleInfo[j].TriangleIndex = newIndex;
                        Debug.Log( "index changed to: " + triangleInfo[ i ].TriangleIndex );
                        triangleInfo[j].Changed = true;
                        Debug.Log( "True" );
                    }
                }
            }
        }

        newTriangles = new int[triangleInfo.Count];
        for (int i = 0; i < newTriangles.Length; i++ ) {
            newTriangles[ i ] = triangleInfo[ i ].TriangleIndex;
        }

        Vector3[] vertices = new Vector3[ vertexInfo.Count ];
        for (int i = 0; i < vertices.Length; i++) {
            vertices[ i ] = vertexInfo[ i ].Vertex;
        }
        return vertices;
    }

    public bool CheckIfExists ( Vector3 vertex ) {
        for ( int i = 0; i < vertexInfo.Count; i++ ) {
            if ( vertexInfo[ i ].Vertex == vertex ) {
                index = i;
                return true;
            }
                
        }
        return false;
    }
}
