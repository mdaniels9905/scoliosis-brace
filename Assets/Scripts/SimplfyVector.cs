using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimplfyVector : MonoBehaviour
{

    private void Start () {
        Vector3[] testArray = new Vector3[] {
            new Vector3( 0, 0, 0),
            new Vector3( 8, 13, 22),
            new Vector3(4, 5, 6),
            new Vector3 ( 0, 0, 0),
            new Vector3( 0, 0, 0),
            new Vector3(8,45,21),
            new Vector3(3489,76798,23),
            new Vector3(231,576,89435),
            new Vector3(8, 13, 22),
            new Vector3(123,456,879),
            new Vector3(213,21123,132),
            new Vector3(231, 576, 89435)
        };

        Vector3[] newArray = SimplifyMesh( testArray );
        Debug.Log( $"testArray: {string.Join( ", ", testArray )}: {testArray.Length}" );
        Debug.Log( $"newArray: {string.Join( ", ", newArray )}: {newArray.Length}" );
    }

    private Vector3[] SimplifyMesh ( Vector3[] startingMesh) {
        //get mesh, loop through and check for duplicates, add the first occurence to a new vector array and set the new array to the mesh

        List<Vector3> vertList = new List<Vector3>();
        bool found = false;

        for ( int i = 0; i < startingMesh.Length; i++ ) {
            Vector3 tempVert = startingMesh[ i ];
            for ( int j = 0; j < vertList.Count; j++ ) {
                if ( vertList[ j ] == tempVert )
                    found = true;
            }

            if ( !found )
                vertList.Add( tempVert );
            found = false;
        }

        Vector3[] tempMesh = new Vector3[ vertList.Count ];
        for ( int i = 0; i < tempMesh.Length; i++ ) {
            tempMesh[ i ] = vertList[ i ];
        }
        startingMesh = tempMesh;

        return startingMesh;
    }
}
