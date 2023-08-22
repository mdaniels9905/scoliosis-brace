using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using System.Collections;
using System.Collections.Generic;
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

        //Vector3 center = ( minBounds + maxBounds ) / 2;
        Vector3 size = new( ( ( maxBounds - minBounds ) * 2 ).x, maxY, maxZ );

        //boxCollider.center = transform.InverseTransformPoint( center );
        boxCollider.size = size;
    }
}