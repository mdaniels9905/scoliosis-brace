using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class UpdateBoundingBoxSize : MonoBehaviour
{
    private MeshDeformer meshDeformer;
    private BoundsControl boundsControl;
    private BoxCollider boxCollider;


    private void Start () {
        meshDeformer = GetComponent<MeshDeformer>();
        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
    }

    public void UpdateBoxVisuals () {
        boundsControl.ResetVisuals();
        Bounds bounds = meshDeformer.DeformedMesh.bounds;
        boxCollider.size = bounds.size * 1.2f;
        boundsControl.UpdateVisuals();
    }
}
