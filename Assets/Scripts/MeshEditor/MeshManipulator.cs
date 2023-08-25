using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using System;
using UnityEngine;

public class MeshManipulator : MonoBehaviour, IMixedRealityPointerHandler {

    [Range( 0.05f, 0.1f )]
    public float selectionRadius = 0.075f;

    [SerializeField]
    private ManipulationTypeMenuHandler manipulationTypeHandler;

    [SerializeField]
    private ToggleBrushTypeMenus brushType;

    public Mesh DeformedMesh { get; set; }
    public bool MoveAndRotateActivated { get; set; } = false;
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
        if ( !MoveAndRotateActivated ) {
            if ( DeformerActivated ) {
                var pointerResult = eventData.Pointer.Result;
                
                if ( pointerResult.CurrentPointerTarget == gameObject ) {
                    previousHandPosition = pointerResult.StartPoint;
                    Vector3 currentPositionOnSphere = pointerResult.Details.Point;

                    if ( brushType.SphereButtonToggled )
                        selectedVertex = GetSelectedSphereVertices( currentPositionOnSphere, selectionRadius );
                    else if ( brushType.PlaneButtonToggled )
                        selectedVertex = GetSelectedPlaneVertices( currentPositionOnSphere, selectionRadius );
                    
                    if ( float.IsPositiveInfinity( selectedVertex.x ) && float.IsPositiveInfinity( selectedVertex.y ) && float.IsPositiveInfinity( selectedVertex.z ) ) {
                        vertexSelected = false;
                    } else {
                        vertexSelected = true;
                        storedVertices = (Vector3[])displacedVertices.Clone();
                    }
                }
            }
        }
    }

    public void OnPointerDragged ( MixedRealityPointerEventData eventData ) {
        if ( vertexSelected && manipulationTypeHandler.DeformMenuActivated ) {
            DeformMesh(eventData);
        } else if (vertexSelected && manipulationTypeHandler.EraseMenuActivated) {
            //EraseVertices();
        }
    }

    public void OnPointerUp ( MixedRealityPointerEventData eventData ) {
        vertexSelected = false;
        RefreshOctree();
    }

    public void OnPointerClicked ( MixedRealityPointerEventData eventData ) { }


    public Vector3 GetSelectedSphereVertices (Vector3 hitPoint, float radius) {
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

    public Vector3 GetSelectedPlaneVertices (Vector3 hitPoint, float planeLength) {
        //Find the vertex closest to the hitPoint
        /* nearbyVertexData = octree.GetNearby( hitPoint, planeLength );
         nearbyVertices = new Vector3[ nearbyVertexData.Length ];
         for ( int i = 0; i < nearbyVertexData.Length; i++ ) {
             nearbyVertices[ i ] = nearbyVertexData[ i ].Position;
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
         }*/

        //Make a list of all vertices that collide with the BoxCollider
        //return closestVertex;
        return Vector3.zero;
    }

    public void DeformMesh ( MixedRealityPointerEventData eventData ) {
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

    public void MoveVertices ( Vector3[] newPositions ) {
        for ( int i = 0; i < newPositions.Length; i++ ) {
            int index = nearbyIndices[ i ];
            transformedVertices[ index ] = newPositions[ i ];
            displacedVertices[ index ] = transform.InverseTransformPoint( transformedVertices[ index ] );
        }
        DeformedMesh.vertices = displacedVertices;
        DeformedMesh.RecalculateNormals();
        DeformedMesh.RecalculateBounds();
    }

    public void EraseVertices ( Vector3[] erasedVertices ) {
        //Delete vertices from mesh
    }

    private void RefreshOctree () {
        octree = new PointOctree<VertexData>( 100f, transform.position, 0.5f );

        for ( int i = 0; i < displacedVertices.Length; i++ ) {
            transformedVertices[ i ] = transform.TransformPoint( displacedVertices[ i ] );
            octree.Add( new VertexData( transformedVertices[ i ], i ), transformedVertices[ i ] );
        }

        MeshCollider meshCollider = GetComponent<MeshCollider>();
        meshCollider.sharedMesh = null;
        meshCollider.sharedMesh = DeformedMesh;
        DeformedMesh.RecalculateNormals();
        DeformedMesh.RecalculateBounds();
    }

    public void UndoChange () {
        displacedVertices = storedVertices;
        DeformedMesh.vertices = displacedVertices;
        DeformedMesh.RecalculateNormals();
        DeformedMesh.RecalculateBounds();
        RefreshOctree();
    }

    public void ResetMesh () {
        DeformedMesh.vertices = originalVertices;
        displacedVertices = storedVertices = (Vector3[])originalVertices.Clone();
        DeformedMesh.RecalculateNormals();
        DeformedMesh.RecalculateBounds();
        RefreshOctree();
    }
}