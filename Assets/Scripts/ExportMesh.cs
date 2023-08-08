using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;

public class ExportMesh : MonoBehaviour {

    [SerializeField]
    private string fileName = "ExportedScoliosisBrace.obj";

    [SerializeField]
    private GameObject progressIndicator;

    [SerializeField]
    private TextMeshPro progressText;

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
        progressIndicator.transform.localPosition = Camera.main.transform.localPosition + 0.75f * Camera.main.transform.forward;
        progressText.text = "Final Touches ...";

        progressBar.transform.localScale = new( 0, 1, 1 );
        menu.SetActive( false );
        meshDeformer.DeformerActivated = false;

        StartCoroutine( ExtrudeMesh() );
    }

    private IEnumerator ExtrudeMesh () {
        Mesh mesh = meshDeformer.DeformedMesh;
        Vector3[] vertices = mesh.vertices;
        int[] triangles = mesh.triangles;

        progressBar.transform.localScale = new( 0.1f, 1, 1 );
        progressText.text = "Simplifying mesh ...";
        yield return StartCoroutine( SimplifyMesh( vertices, triangles, simplifiedMesh => { mesh = simplifiedMesh; } ) );
        progressBar.transform.localScale = new( 0.3f, 1, 1 );

        progressText.text = "Extruding mesh ...";

        Vector3[] newVertices = new Vector3[ mesh.vertices.Length * 2 ];
        int[] newTriangles = new int[ mesh.triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, mesh.vertices.Length );
        Array.Copy( triangles, newTriangles, mesh.triangles.Length );

        int counter = 0;
        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + ( new Vector3( mesh.normals[ i ].x, 0, mesh.normals[ i ].z ).normalized * extrusionDistance );
            counter++;

            if (counter % 15 == 0)
                yield return null;
        }

        progressText.text = "Rewinding triangles ...";
        progressBar.transform.localScale = new( 0.4f, 1, 1 );

        counter = 0;
        for ( int i = 0; i < triangles.Length; i += 3 ) {
            newTriangles[ i + triangles.Length ] = triangles[ i ] + vertices.Length;
            newTriangles[ i + triangles.Length + 1 ] = triangles[ i + 1 ] + vertices.Length;
            newTriangles[ i + triangles.Length + 2 ] = triangles[ i + 2 ] + vertices.Length;
            counter++;

            if ( counter % 50 == 0 )
                yield return null;
        }

        mesh.vertices = newVertices;
        mesh.triangles = newTriangles;
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject extrudedObject = new();
        extrudedObject.AddComponent<MeshFilter>().mesh = mesh;

        progressBar.transform.localScale = new( 0.5f, 1, 1 );
        Export( extrudedObject );
    }

    private IEnumerator SimplifyMesh ( Vector3[] startingVertices, int[] startingTriangles,  Action<Mesh> callback ) {
        List<VertexData> vertexInfo = new();
        int counter = 0;

        //For each unique index in the vertices array, add all occurences of the vertex in the oldIndices list and add that vertex to the vertexInfo array
        for ( int i = 0; i < startingVertices.Length; i++ ) {
            Vector3 tempVertex = startingVertices[ i ];
            bool foundInArray = CheckIfExists( tempVertex, vertexInfo );

            if ( foundInArray )
                vertexInfo[ index ].OldIndices.Add( i );
            else
                vertexInfo.Add( new VertexData( tempVertex, new List<int>() { i }, 0 ) );

            counter++;
            if ( counter % 10 == 0 )
                yield return null;
        }

        //Loop through all triangles and replace all occurences of indices in oldIndices with the new one
        List<TriangleData> triangleInfo = new();
        for ( int i = 0; i < startingTriangles.Length; i++ ) {
            triangleInfo.Add( new TriangleData( startingTriangles[ i ], false ) );
        }

        progressBar.transform.localScale = new( 0.2f, 1, 1 );

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
            
            yield return null;
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

    private async void Export ( GameObject gameObject ) {
        progressText.text = "Export started ...";

        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
        progressText.text = "Getting vertices ...";
        Vector3[] vertices = mesh.vertices;
        progressText.text = "Getting normals ...";
        Vector3[] normals = mesh.normals;
        progressText.text = "Getting triangles ...";
        int[] triangles = mesh.triangles;
        progressBar.transform.localScale = new( 0.6f, 1, 1 );

        //For exporting on computer
        #if UNITY_EDITOR
            string filePath = Path.GetFullPath( Path.Combine( Application.dataPath, "Exports", fileName ) );
            progressBar.transform.localScale = new( 0.7f, 1, 1 );

            if ( File.Exists( filePath ) )
                File.Delete( filePath );

            progressText.text = "Writing to file ...";
            try {
                FileStream stream = new( filePath, FileMode.CreateNew );
                using ( StreamWriter fileWriter = new( stream ) ) {
                    progressText.text = "Exporting vertices (1/3) ...";
                    for ( int i = 0; i < vertices.Length; i++ ) {
                        await fileWriter.WriteAsync( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.8f, 1, 1 );

                    progressText.text = "Exporting normals (2/3) ...";
                    for ( int i = 0; i < normals.Length; i++ ) {
                        await fileWriter.WriteAsync( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.9f, 1, 1 );

                    progressText.text = "Exporting faces (3/3) ...";
                    for ( int i = 0; i < triangles.Length; i += 3 ) {
                        await fileWriter.WriteAsync( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                    }
                    progressBar.transform.localScale = new( 1, 1, 1 );
            }
            } catch { }
        #endif

        //For exporting on HoloLens
        #if UNITY_WSA && !UNITY_EDITOR
            progressText.text = "Creating file (1/2)...";
            Windows.Storage.StorageFolder storageFolder = Windows.Storage.KnownFolders.PicturesLibrary;
            progressText.text = "Creating file (2/2)...";
            Windows.Storage.StorageFile exportedFile = await storageFolder.CreateFileAsync( "ExportedScoliosisBrace.obj", Windows.Storage.CreationCollisionOption.ReplaceExisting );
            progressBar.transform.localScale = new( 0.7f, 1, 1 );

            progressText.text = "Writing to file ...";
            var stream = await exportedFile.OpenAsync( Windows.Storage.FileAccessMode.ReadWrite );
            using ( var outputStream = stream.GetOutputStreamAt( 0 ) ) {
                using ( var fileWriter = new Windows.Storage.Streams.DataWriter( outputStream ) ) {
                
                    progressText.text = "Exporting vertices (1/3) ...";
                    for ( int i = 0; i < vertices.Length; i++ ) {
                        fileWriter.WriteString( $"v {vertices[ i ].x} {vertices[ i ].y} {vertices[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.8f, 1, 1 );

                    progressText.text = "Exporting normals (2/3) ...";
                    for ( int i = 0; i < normals.Length; i++ ) {
                        fileWriter.WriteString( $"vn {normals[ i ].x} {normals[ i ].y} {normals[ i ].z}\n" );
                    }
                    progressBar.transform.localScale = new( 0.9f, 1, 1 );

                    progressText.text = "Exporting faces (3/3) ...";
                    for ( int i = 0; i < triangles.Length; i += 3 ) {
                        fileWriter.WriteString( $"f {triangles[ i ] + 1}//{triangles[ i ] + 1} {triangles[ i + 1 ] + 1}//{triangles[ i + 1 ] + 1} {triangles[ i + 2 ] + 1}//{triangles[ i + 2 ] + 1}\n" );
                    }
                    progressBar.transform.localScale = new( 1, 1, 1 );

                    await fileWriter.StoreAsync();
                    await outputStream.FlushAsync();
                }    
            }
            stream.Dispose();
        #endif

        progressIndicator.SetActive( false );
        menu.SetActive( true );
        meshDeformer.DeformerActivated = true;
    }
}