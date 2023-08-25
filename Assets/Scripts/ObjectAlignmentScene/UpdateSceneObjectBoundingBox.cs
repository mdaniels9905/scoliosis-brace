//This script updates the size of the boundary box around all 3 scene obejcts when the locations of the objects change.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class UpdateSceneObjectBoundingBox : MonoBehaviour
{
    private BoxCollider boxCollider;
    private BoundsControl boundsControl;

    private void Start () {
        boxCollider = GetComponent<BoxCollider>();
        boundsControl = GetComponent<BoundsControl>();
    }

    public void Update () {
        boundsControl.ResetVisuals();
        UpdateBoundingBoxSize();
        boundsControl.UpdateVisuals();
    }
    private void UpdateBoundingBoxSize () {

        Vector3 minBounds = transform.GetChild( 0 ).position;
        Vector3 maxBounds = transform.GetChild( 0 ).position;
        float maxY = transform.GetChild( 0 ).position.y;
        float maxZ = transform.GetChild( 0 ).position.z;

        foreach ( Transform child in transform ) {
            Vector3 childPosition = child.position;

            minBounds = Vector3.Min( minBounds, childPosition );
            maxBounds = Vector3.Max( maxBounds, childPosition );

            if ( childPosition.y > maxY )
                maxY = childPosition.y;
            if ( childPosition.z > maxZ )
                maxZ = childPosition.z;
        }

        Vector3 size = new( ( ( maxBounds - minBounds ) * 2 ).x, maxY, maxZ );
        boxCollider.size = size;
    }
}