//This script is attached to the Export button and is responsible for copying and extruding the mesh (to create an inner and outer wall) and
//exporting the model to a OBJ file located in the Pictures Library on the HoloLens 2. The meshManipulator script is deactivated and the menu
//disappears when the Export button is pressed.
//Written by Maya Daniels

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
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
    private GameObject menu;

    [SerializeField]
    private GameObject progressBar;

    [SerializeField]
    private float extrusionDistance = 3f;

    private class TriangleData {
        public int TriangleIndex { get; set; }
        public bool Changed { get; set; }

        public TriangleData ( int triangleIndex, bool changed ) {
            TriangleIndex = triangleIndex;
            Changed = changed;
        }
    }

    private MeshManipulator meshManipulator;

    private void Start () {
        meshManipulator = GetComponent<MeshManipulator>();
    }

    public void StartProcessing () {
        progressIndicator.SetActive( true );
        progressIndicator.transform.localPosition = Camera.main.transform.localPosition + 0.75f * Camera.main.transform.forward;
        progressText.text = "Final Touches ...";

        progressBar.transform.localScale = new( 0, 1, 1 );
        menu.SetActive( false );
        meshManipulator.DeformerActivated = false;

        StartCoroutine( ExtrudeMesh() ); //The majority of this script uses coroutines to prevent the app from freezing
    }

    private IEnumerator ExtrudeMesh () {
        Mesh mesh = meshManipulator.DeformedMesh;
        
        progressText.text = "Simplifying mesh ...";
        progressBar.transform.localScale = new( 0.1f, 1, 1 );
        
        mesh = SimplifyMesh( mesh.vertices, mesh.triangles );

        progressText.text = "Extruding mesh ...";
        progressBar.transform.localScale = new( 0.3f, 1, 1 );

        Vector3[] vertices = mesh.vertices;  
        Vector3[] newVertices = new Vector3[ vertices.Length * 2 ];
        int[] triangles = mesh.triangles;
        int[] newTriangles = new int[ triangles.Length * 2 ];

        Array.Copy( vertices, newVertices, vertices.Length );
        Array.Copy( triangles, newTriangles, triangles.Length );

        int counter = 0; //counter is used to reduce the occurence of the yield return null so that it DOES NOT occur every frame
        for ( int i = 0; i < mesh.vertices.Length; i++ ) {
            //Extruding each vertex of the mesh copy by the "extrusionDistance"
            newVertices[ i + mesh.vertices.Length ] = vertices[ i ] + ( new Vector3( mesh.normals[ i ].x, 0, mesh.normals[ i ].z ).normalized * extrusionDistance );
            
            counter++;

            if (counter % 15 == 0)
                yield return null;
        }

        progressText.text = "Rewinding triangles ...";
        progressBar.transform.localScale = new( 0.4f, 1, 1 );

        //Rewinding the triangles of the extruded mesh
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

    //The imported scoliosis brace has duplicates of the same vertices (which causes problems when extruding the mesh), so this script goes
    //through all the vertices and keeps a single occurence of each vertex.
    private Mesh SimplifyMesh ( Vector3[] startingVertices, int[] startingTriangles ) {
        Dictionary<Vector3, List<int>> vertexInfo = new();

        //For each unique index in the vertices array, add all occurences of the vertex to the oldIndices list (add the index of each vertex
        //occurence) and add that vertex to the vertexInfo array
        for ( int i = 0; i < startingVertices.Length; i++) {
            Vector3 tempVertex = startingVertices[ i ];
            List<int> indexList = CheckIfExists( tempVertex, vertexInfo );

            if ( indexList != null )
                indexList.Add( i );
            else
                vertexInfo.Add( tempVertex, new List<int>() { i } );
        }

        progressBar.transform.localScale = new( 0.2f, 1, 1 );
        
        //Loop through all triangles and replace all occurences of indices in oldIndices with the new one
        Dictionary<int, int> indexMap = new();
        List<int>[] indexArray = vertexInfo.Values.ToArray();

        int newIndex = 0;
        int indexLengthCount = 0;
        for (int i = 0; i < indexArray.Length; i++ ) {
            List<int> tempList = indexArray[ i ];
            for (int j = 0; j < tempList.Count; j++ ) {
                indexLengthCount++;
                indexMap.Add( tempList[ j ], newIndex );
            }
            
            newIndex++;
        }

        List<TriangleData> triangleInfo = new();
        for (int i = 0; i < startingTriangles.Length; i++ ) {
            triangleInfo.Add( new TriangleData( startingTriangles[ i ], false ) );
        }
 
        for (int i = 0; i <  triangleInfo.Count; i++ ) { 
            if ( indexMap.TryGetValue( triangleInfo[i].TriangleIndex, out int updatedIndex) && !triangleInfo[i].Changed) {
                triangleInfo[ i ].TriangleIndex = updatedIndex;
                triangleInfo[ i ].Changed = true;
            }
        }

        int[] newTriangles = new int[ triangleInfo.Count ];
        for ( int i = 0; i < newTriangles.Length; i++ ) {
            newTriangles[ i ] = triangleInfo[ i ].TriangleIndex;
        }

        Vector3[] updatedVertices = vertexInfo.Keys.ToArray();

        Mesh newMesh = new() {
            vertices = updatedVertices,
            triangles = newTriangles
        };

        newMesh.RecalculateBounds();
        newMesh.RecalculateNormals();

        return newMesh;
        
    }

    private List<int> CheckIfExists (Vector3 vertex, Dictionary<Vector3, List<int>> vertexInfo) {
        if (vertexInfo.ContainsKey(vertex))
            return vertexInfo[ vertex ];

        return null;
    }

    private async void Export ( GameObject gameObject ) {
        progressText.text = "Export started ...";

        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
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
        meshManipulator.DeformerActivated = true;
    }
}