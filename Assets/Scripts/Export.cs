using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Export : MonoBehaviour
{
    public string fileName = "ExportedScoliosisBrace.obj";
    public MeshDeformer meshDeformer;
    public Material material;

    private readonly float extrusionDistance = 3f;

    public void ExtrudeMesh () {
        Debug.Log( "Extruding Started" );

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

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
        }

        mesh.vertices = newVertices;
        mesh.triangles = newTriangles;

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject newObject = new GameObject {
            name = "ExtrudedMesh"
        };

        newObject.AddComponent<MeshFilter>().mesh = mesh;
        newObject.AddComponent<MeshRenderer>().material = material;
        newObject.transform.localScale = new Vector3( 0.001f, 0.001f, 0.001f );

        Debug.Log( "Extruding completed" );
        ExportMesh( newObject );
    }

    private void ExportMesh (GameObject gameObject) {
        string filePath = Application.dataPath;
        filePath = Path.Combine( filePath, string.Concat( "Exports\\", fileName ) );
        filePath = Path.GetFullPath( filePath );

        Debug.Log( "Filepath is " + filePath );

        if (File.Exists( filePath ) )
            File.Delete( filePath );

        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
        int[] triangles = mesh.triangles;

        try {
            FileStream stream = new( filePath, FileMode.CreateNew );
            using (StreamWriter fileWriter = new( stream ) ) {
                for (int i = 0; i < vertices.Length; i++ ) {
                    fileWriter.Write( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                }
                for (int i = 0; i < normals.Length; i++ ) {
                    fileWriter.Write( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                }

                //int j = 1;
                for (int i = 0; i < triangles.Length; i += 3 ) {
                    fileWriter.Write( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                    //j++;
                }
            }

        } catch { }

        Debug.Log( "Export completed" );
    }
}
