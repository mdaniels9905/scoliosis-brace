using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using System;
using UnityEngine;

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

        GetComponent<MeshFilter>().mesh = DeformedMesh;
        MeshCollider meshCollider = GetComponent<MeshCollider>();
        meshCollider.sharedMesh = null;
        meshCollider.sharedMesh = DeformedMesh;

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