using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using System;
using UnityEngine;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine.UIElements;

public class MeshDeformer : MonoBehaviour, IMixedRealityPointerHandler {

    [Range( 0.05f, 0.1f )]
    public float selectionRadius = 0.075f;

    public Mesh DeformedMesh { get; set; }
    public bool RotationActivated { get; set; } = false;
    public bool MovementActivated { get; set; } = false;
    public bool DeformerActivated { get; set; } = true;

    private class VertexData {
        public Vector3 Position { get; set; }
        public int Index { get; set; }
         
        public VertexData ( Vector3 position, int index ) {
            Position = position;
            Index = index;
        }
    }

    private class VertexStuff {

        public Vector3 Vertex { get; set; }
        public List<int> OldIndices { get; set; }
        public int Number { get; set; }

        public VertexStuff ( Vector3 vertex, List<int> oldIndices, int number ) {
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
    private bool vertexSelected = false;
    private Vector3 selectedVertex, previousHandPosition;
    private int[] nearbyIndices;
    private Vector3[] originalVertices, transformedVertices, nearbyVertices, storedVertices, displacedVertices;
    private VertexData[] nearbyVertexData;
    private PointOctree<VertexData> octree;

    private void Start () {
        CoreServices.InputSystem.RegisterHandler<IMixedRealityPointerHandler>( this );

        Mesh reversedMesh = GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = reversedMesh.vertices;
        Vector3[] normals = reversedMesh.normals;
        int[] triangles = reversedMesh.triangles;

        Vector3[] reversedNormals = new Vector3[ normals.Length ];
        int[] reversedTriangles = new int[ triangles.Length ];

        for ( int i = 0; i < vertices.Length; i++ ) {
            reversedNormals[ i ] = -normals[ i ];
        }

        for ( int i = 0; i < triangles.Length; i += 3 ) {
            reversedTriangles[ i ] = triangles[ i ];
            reversedTriangles[ i + 1 ] = triangles[ i + 2 ];
            reversedTriangles[ i + 2 ] = triangles[ i + 1 ];
        }

        DeformedMesh = new() {
            vertices = vertices,
            normals = reversedNormals,
            triangles = reversedTriangles
        };

        Debug.Log( "Before: " + DeformedMesh.vertices.Length );
        DeformedMesh = SimplifyMesh( DeformedMesh );
        GetComponent<MeshFilter>().mesh = DeformedMesh;

        MeshCollider meshCollider = GetComponent<MeshCollider>();
        meshCollider.sharedMesh = null;
        meshCollider.sharedMesh = DeformedMesh;
        Debug.Log("After: " + meshCollider.sharedMesh.vertices.Length );

        originalVertices = storedVertices = DeformedMesh.vertices;

        displacedVertices = new Vector3[ originalVertices.Length ];
        transformedVertices = new Vector3[ originalVertices.Length ];
        for ( int i = 0; i < originalVertices.Length; i++ ) {
            displacedVertices[ i ] = originalVertices[ i ];
            transformedVertices[ i ] = transform.TransformPoint( originalVertices[ i ] );
        }

        octree = new PointOctree<VertexData>( 100f, transform.position, 0.5f ); // maxSize = 100f, center = transform.position, minSize = 0.5f
        for ( int i = 0; i < transformedVertices.Length; i++ ) {
            octree.Add( new VertexData( transformedVertices[ i ], i ), transformedVertices[ i ] );
        }
    }

    private Mesh SimplifyMesh ( Mesh mesh ) {
        Vector3[] startingVertices = mesh.vertices;
        int[] startingTriangles = mesh.triangles;
        List<VertexStuff> vertexInfo = new();

        //For each unique index in the vertices array, add all occurences of the vertex in the oldIndices list and add that vertex to the vertexInfo array
        for ( int i = 0; i < startingVertices.Length; i++ ) {
            Vector3 tempVertex = startingVertices[ i ];
            bool foundInArray = CheckIfExists( tempVertex, vertexInfo );

            if ( foundInArray )
                vertexInfo[ index ].OldIndices.Add( i );
            else
                vertexInfo.Add( new VertexStuff( tempVertex, new List<int>() { i }, 0 ) );

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

    private bool CheckIfExists ( Vector3 vertex, List<VertexStuff> vertexInfo ) {
        for ( int i = 0; i < vertexInfo.Count; i++ ) {
            if ( vertexInfo[ i ].Vertex == vertex ) {
                index = i;
                return true;
            }
        }
        return false;
    }

    private void OnDestroy () {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>( this );
    }

    public void OnPointerDown ( MixedRealityPointerEventData eventData ) {
        if ( !RotationActivated ) {
            if (!MovementActivated) {
                if (DeformerActivated) {
                    var pointerResult = eventData.Pointer.Result;

                    try {
                        if ( pointerResult.CurrentPointerTarget == gameObject ) {
                            previousHandPosition = pointerResult.StartPoint;
                            Vector3 currentPositionOnSphere = pointerResult.Details.Point;

                            selectedVertex = GetSelectedVertices( currentPositionOnSphere, selectionRadius );
                            if ( float.IsPositiveInfinity( selectedVertex.x ) && float.IsPositiveInfinity( selectedVertex.y ) && float.IsPositiveInfinity( selectedVertex.z ) ) {
                                vertexSelected = false;
                            } else {
                                vertexSelected = true;
                                storedVertices = (Vector3[])displacedVertices.Clone();
                            }
                        }
                    } catch ( NullReferenceException ) { }
                }
            }
        }
    }

    public void OnPointerDragged ( MixedRealityPointerEventData eventData ) {
        if ( vertexSelected ) {
            Vector3 newHandPosition = eventData.Pointer.Position;
            Vector3 movementVector = newHandPosition - previousHandPosition;
            Vector3[] movedVertexPositions = new Vector3[ nearbyVertices.Length ];

            for ( int i = 0; i < nearbyVertices.Length; i++ ) {
                float weight = Mathf.SmoothStep( 0f, 1f, 1f - Vector3.Distance( selectedVertex, nearbyVertices[ i ] ) / selectionRadius );
                Vector3 weightedMovementVector = movementVector * weight;
                movedVertexPositions[ i ] = nearbyVertices[ i ] + weightedMovementVector;
            }
            MoveVertices( movedVertexPositions );
        }
    }

    public void OnPointerUp ( MixedRealityPointerEventData eventData ) {
        vertexSelected = false;
        RefreshOctree();
    }

    public void OnPointerClicked ( MixedRealityPointerEventData eventData ) { }

    public Vector3 GetSelectedVertices ( Vector3 hitPoint, float radius ) {
        nearbyVertexData = octree.GetNearby( hitPoint, radius );
        nearbyVertices = new Vector3[ nearbyVertexData.Length ];
        nearbyIndices = new int[ nearbyVertexData.Length ];
        for ( int i = 0; i < nearbyVertexData.Length; i++ ) {
            nearbyVertices[ i ] = nearbyVertexData[ i ].Position;
            nearbyIndices[ i ] = nearbyVertexData[ i ].Index;
        }

        if ( nearbyVertices.Length == 0 )
            return Vector3.positiveInfinity;

        Vector3 closestVertex = nearbyVertices[ 0 ];
        float minDistanceSqr = ( closestVertex - hitPoint ).sqrMagnitude;

        for ( int i = 1; i < nearbyVertices.Length; i++ ) {
            float distanceSqr = ( nearbyVertices[ i ] - hitPoint ).sqrMagnitude;

            if ( distanceSqr < minDistanceSqr ) {
                minDistanceSqr = distanceSqr;
                closestVertex = nearbyVertices[ i ];
            }
        }
        return closestVertex;
    }

    public void MoveVertices ( Vector3[] newPositions ) {
        for ( int i = 0; i < newPositions.Length; i++ ) {
            int index = nearbyIndices[ i ];
            transformedVertices[ index ] = newPositions[ i ];
            displacedVertices[ index ] = transform.InverseTransformPoint( transformedVertices[ index ] );
        }
        DeformedMesh.vertices = displacedVertices;
        DeformedMesh.RecalculateNormals();
    }

    public void RefreshOctree () {
        octree = new PointOctree<VertexData>( 100f, transform.position, 0.5f );

        for ( int i = 0; i < displacedVertices.Length; i++ ) {
            transformedVertices[ i ] = transform.TransformPoint( displacedVertices[ i ] );
            octree.Add( new VertexData( transformedVertices[ i ], i ), transformedVertices[ i ] );
        }

        MeshCollider meshCollider = GetComponent<MeshCollider>();
        meshCollider.sharedMesh = null;
        meshCollider.sharedMesh = DeformedMesh;
    }

    public void UndoChange () {
        displacedVertices = storedVertices;
        DeformedMesh.vertices = displacedVertices;
        DeformedMesh.RecalculateNormals();
        RefreshOctree();
    }

    public void ResetMesh () {
        DeformedMesh.vertices = originalVertices;
        displacedVertices = storedVertices = (Vector3[])originalVertices.Clone();
        DeformedMesh.RecalculateNormals();
        RefreshOctree();
    }
}