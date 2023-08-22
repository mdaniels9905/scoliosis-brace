using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class UpdatePatientModelBoundingBox : MonoBehaviour
{
    private BoxCollider boxCollider;
    private BoundsControl boundsControl;
    private Mesh mesh;

    private void Start () {
        boxCollider = GetComponent<BoxCollider>();
        boundsControl = GetComponent<BoundsControl>();
        mesh = GetComponent<MeshFilter>().mesh;
    }

    public void UpdateBoundingBoxSize () {
        boundsControl.ResetVisuals();
        Bounds bounds = mesh.bounds;
        boxCollider.size = bounds.size;
        boundsControl.UpdateVisuals();
    }
}
