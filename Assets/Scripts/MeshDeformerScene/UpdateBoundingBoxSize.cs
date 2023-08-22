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
