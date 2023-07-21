using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
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

    private void Update () {
        progressIndicator.transform.localPosition = Camera.main.transform.localPosition + Camera.main.transform.forward;
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
        progressBar.transform.localScale = new( 0.1f, 1, 1 );

        yield return StartCoroutine( SimplifyMesh( mesh, simplifiedMesh => { mesh = simplifiedMesh; } ) );

        Vector3[] vertices = mesh.vertices;
        int[] triangles = mesh.triangles;

        Vector3[] newVertices = new Vector3[ mesh.vertices.Length * 2 ];
        int[] newTriangles = new int[ mesh.triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, mesh.vertices.Length );
        Array.Copy( triangles, newTriangles, mesh.triangles.Length );

        progressBar.transform.localScale = new( 0.65f, 1, 1 );

        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + ( new Vector3( mesh.normals[ i ].x, 0, mesh.normals[ i ].z ) * extrusionDistance );
        }

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
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

        yield return null;
    }

    private IEnumerator SimplifyMesh ( Mesh mesh, Action<Mesh> callback ) {
        Vector3[] startingVertices = mesh.vertices;
        int[] startingTriangles = mesh.triangles;
        List<VertexData> vertexInfo = new();
        progressBar.transform.localScale = new( 0.15f, 1, 1 );
        //For each unique index in the vertices array, add all occurences of the vertex in the oldIndices list and add that vertex to the vertexInfo array
        for ( int i = 0; i < startingVertices.Length; i++ ) {
            Vector3 tempVertex = startingVertices[ i ];
            bool foundInArray = CheckIfExists( tempVertex, vertexInfo );

            if ( foundInArray )
                vertexInfo[ index ].OldIndices.Add( i );
            else
                vertexInfo.Add( new VertexData( tempVertex, new List<int>() { i }, 0 ) );

            yield return null;
        }

        progressBar.transform.localScale = new( 0.3f, 1, 1 );

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

        progressBar.transform.localScale = new( 0.5f, 1, 1 );

        int[] newTriangles = new int[ triangleInfo.Count ];
        for ( int i = 0; i < newTriangles.Length; i++ ) {
            newTriangles[ i ] = triangleInfo[ i ].TriangleIndex;
        }

        Vector3[] updatedVertices = new Vector3[ vertexInfo.Count ];
        for ( int i = 0; i < updatedVertices.Length; i++ ) {
            updatedVertices[ i ] = vertexInfo[ i ].Vertex;
        }
        progressBar.transform.localScale = new( 0.55f, 1, 1 );

        Mesh newMesh = new() {
            vertices = updatedVertices,
            triangles = newTriangles
        };

        newMesh.RecalculateBounds();
        newMesh.RecalculateNormals();

        progressBar.transform.localScale = new( 0.6f, 1, 1 );
        callback( newMesh );
    }

    private bool CheckIfExists ( Vector3 vertex, List<VertexData> vertexInfo ) {
        for ( int i = 0; i < vertexInfo.Count; i++ ) {
            if ( vertexInfo[ i ].Vertex == vertex ) {
                index = i;
                return true;
            }
        }
        return false;
    }

    //private bool CheckIfExists (Vector3 vertex, HashSet<Vector3> vertexInfo) {
   //     return vertexInfo.Contains( vertex );
    //}

    private async void Export ( GameObject gameObject ) {
        //For exporting on computer
        #if UNITY_EDITOR
            string filePath = Application.dataPath;
            filePath = Path.Combine( filePath, string.Concat( "Exports\\", fileName ) );
            filePath = Path.GetFullPath( filePath );

            if ( File.Exists( filePath ) )
                File.Delete( filePath );

            Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
            Vector3[] vertices = mesh.vertices;
            Vector3[] normals = mesh.normals;
            int[] triangles = mesh.triangles;
            progressBar.transform.localScale = new( 0.8f, 1, 1 );

            try {
                FileStream stream = new( filePath, FileMode.CreateNew );
                using ( StreamWriter fileWriter = new( stream ) ) {
                    for ( int i = 0; i < vertices.Length; i++ ) {
                        await fileWriter.WriteAsync( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.85f, 1, 1 );
                    for ( int i = 0; i < normals.Length; i++ ) {
                        await fileWriter.WriteAsync( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.9f, 1, 1 );
                    for ( int i = 0; i < triangles.Length; i += 3 ) {
                        await fileWriter.WriteAsync( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                    }
                    progressBar.transform.localScale = new( 0.95f, 1, 1 );
                    }
            } catch { }
            progressBar.transform.localScale = new( 1, 1, 1 );
        #endif

        //For exporting on HoloLens
#if UNITY_WSA && !UNITY_EDITOR
            Windows.Storage.StorageFolder storageFolder = Windows.Storage.KnownFolders.PicturesLibrary;
            Windows.Storage.StorageFile exportedFile = await storageFolder.CreateFileAsync( "ExportedScoliosisBrace.obj", Windows.Storage.CreationCollisionOption.ReplaceExisting );

            Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
            Vector3[] vertices = mesh.vertices;
            Vector3[] normals = mesh.normals;
            int[] triangles = mesh.triangles;

            progressBar.transform.localScale = new( 0.8f, 1, 1 );

            var stream = await exportedFile.OpenAsync( Windows.Storage.FileAccessMode.ReadWrite );
            using ( var outputStream = stream.GetOutputStreamAt( 0 ) ) {
                using ( var fileWriter = new Windows.Storage.Streams.DataWriter( outputStream ) ) {
                    for ( int i = 0; i < vertices.Length; i++ ) {
                        fileWriter.WriteString( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.85f, 1, 1 );
                    for ( int i = 0; i < normals.Length; i++ ) {
                        fileWriter.WriteString( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.9f, 1, 1 );
                    for ( int i = 0; i < triangles.Length; i += 3 ) {
                        fileWriter.WriteString( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                    }
                    progressBar.transform.localScale = new( 0.95f, 1, 1 );

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