//This script updates the size of the bounding box attached to the scoliosis brace (and aligned image and patient model) when the mesh of the
//scoliosis brace changes.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class UpdateBoundingBoxSize : MonoBehaviour
{
    private MeshManipulator meshManipulator;
    private BoundsControl boundsControl;
    private BoxCollider boxCollider;


    private void Start () {
        meshManipulator = GetComponent<MeshManipulator>();
        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
    }

    public void UpdateBoxVisuals () {
        boundsControl.ResetVisuals();
        Bounds bounds = meshManipulator.DeformedMesh.bounds;
        boxCollider.size = bounds.size * 1.2f;
        boundsControl.UpdateVisuals();
    }
}
