using System;
using UnityEngine;

public class ExportMesh : MonoBehaviour {

    public MeshDeformer meshDeformer;
    public Material material;

    private readonly float extrusionDistance = 10f;

    public void ExtrudeMesh () {
        Debug.Log( "Start" );

        Mesh innerWall = meshDeformer.deformedMesh;
        Mesh mesh = Instantiate( innerWall );
        Vector3[] vertices = mesh.vertices;
        int[] triangles = mesh.triangles;


        Vector3[] newVertices = new Vector3[ mesh.vertices.Length * 2 ];
        int[] newTriangles = new int[ mesh.triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, mesh.vertices.Length );
        Array.Copy( triangles, newTriangles, mesh.triangles.Length );

        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + mesh.normals[ i ] * extrusionDistance;
        }

        for (int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
        }

        mesh.vertices = newVertices;
        mesh.triangles = newTriangles;

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject newObject = new GameObject {
            name = "Extruded Mesh"
        };

        newObject.AddComponent<MeshFilter>().mesh = mesh;
        newObject.AddComponent<MeshRenderer>().material = material;
        newObject.transform.localScale = new Vector3( 0.001f, 0.001f, 0.001f );
        //newObject.transform.position = meshDeformer.scoliosisBraceObject.transform.position;
       // Destroy( meshDeformer.scoliosisBraceObject );

        Debug.Log( "Done" );
    }

}