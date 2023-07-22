using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

public class ExportMesh : MonoBehaviour {

    [SerializeField]
    private string fileName = "ExportedScoliosisBrace.obj";

    [SerializeField]
    private GameObject progressIndicator;

    [SerializeField]
    private GameObject sceneObjects;

    [SerializeField]
    private GameObject menu;

    [SerializeField]
    private GameObject progressBar;

    [SerializeField]
    private float extrusionDistance = 3f;

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

    private int index;
    private MeshDeformer meshDeformer;

    private void Start () {
        meshDeformer = GetComponent<MeshDeformer>();
    }

    public void StartProcessing () {
        progressIndicator.SetActive( true );
        progressIndicator.transform.localPosition = Camera.main.transform.localPosition + Camera.main.transform.forward;

        progressBar.transform.localScale = new( 0, 1, 1 );
        menu.SetActive( false );
        meshDeformer.DeformerActivated = false;

        StartCoroutine( ExtrudeMesh() );
    }

    private IEnumerator ExtrudeMesh () {
        Mesh innerWall = meshDeformer.DeformedMesh;
        Mesh mesh = Instantiate( innerWall );
        yield return null;
        progressBar.transform.localScale = new( 0.1f, 1, 1 );

        Vector3[] vertices = mesh.vertices;
        int[] triangles = mesh.triangles;

        Vector3[] newVertices = new Vector3[ mesh.vertices.Length * 2 ];
        int[] newTriangles = new int[ mesh.triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, mesh.vertices.Length );
        Array.Copy( triangles, newTriangles, mesh.triangles.Length );

        progressBar.transform.localScale = new( 0.65f, 1, 1 );

        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + ( new Vector3( mesh.normals[ i ].x, 0, mesh.normals[ i ].z ) * extrusionDistance );
            yield return null;
        }

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
            yield return null;
        }

        progressBar.transform.localScale = new( 0.7f, 1, 1 );

        mesh.vertices = newVertices;
        mesh.triangles = newTriangles;
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject extrudedObject = new();
        extrudedObject.AddComponent<MeshFilter>().mesh = mesh;

        progressBar.transform.localScale = new( 0.75f, 1, 1 );
        Export( extrudedObject );
    }

    private async void Export ( GameObject gameObject ) {

        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
        int[] triangles = mesh.triangles;
        progressBar.transform.localScale = new( 0.8f, 1, 1 );

        StringBuilder fileText = new();
        for ( int i = 0; i < vertices.Length; i++ ) {
            fileText.AppendLine( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
        }
        progressBar.transform.localScale = new( 0.85f, 1, 1 );

        for ( int i = 0; i < normals.Length; i++ ) {
            fileText.AppendLine( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
        }
        progressBar.transform.localScale = new( 0.9f, 1, 1 );

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            fileText.AppendLine( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
        }
        progressBar.transform.localScale = new( 0.95f, 1, 1 );

        //For exporting on computer
        #if UNITY_EDITOR
        string filePath = Path.GetFullPath( Path.Combine( Application.dataPath, "Exports", fileName ) );

            if ( File.Exists( filePath ) )
                File.Delete( filePath );

            try {
                FileStream stream = new( filePath, FileMode.CreateNew );
                using ( StreamWriter fileWriter = new( stream ) ) {
                    await fileWriter.WriteAsync( fileText.ToString() );
                }
            } catch { }
            progressBar.transform.localScale = new( 1, 1, 1 );
        #endif

        //For exporting on HoloLens
        #if UNITY_WSA && !UNITY_EDITOR
            Windows.Storage.StorageFolder storageFolder = Windows.Storage.KnownFolders.PicturesLibrary;
            Windows.Storage.StorageFile exportedFile = await storageFolder.CreateFileAsync( "ExportedScoliosisBrace.obj", Windows.Storage.CreationCollisionOption.ReplaceExisting );


            var stream = await exportedFile.OpenAsync( Windows.Storage.FileAccessMode.ReadWrite );
            using ( var outputStream = stream.GetOutputStreamAt( 0 ) ) {
                using ( var fileWriter = new Windows.Storage.Streams.DataWriter( outputStream ) ) {
                    fileWriter.WriteString( fileText.ToString() );
                    
                    await fileWriter.StoreAsync();
                    await outputStream.FlushAsync();
                }    
            }
            stream.Dispose();
            progressBar.transform.localScale = new( 1, 1, 1 );
        #endif

        progressIndicator.SetActive( false );
        menu.SetActive( true );
        meshDeformer.DeformerActivated = true;
    }
}