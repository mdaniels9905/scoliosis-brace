using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class MoveAndRotateObject : MonoBehaviour {

    private MeshDeformer meshDeformer;
    private BoundsControl boundsControl;
    private BoxCollider boxCollider;
    private ObjectManipulator objectManipulator;
    private RotationAxisConstraint rotationAxisConstraint;
    
    private void Start () {
        meshDeformer = GetComponent<MeshDeformer>();
        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
        objectManipulator = GetComponent<ObjectManipulator>();
        rotationAxisConstraint = GetComponent<RotationAxisConstraint>();

        objectManipulator.enabled = false;
        rotationAxisConstraint.enabled = false;
        boxCollider.enabled = false;
    }

    public void ActivateMoveAndRotate () {
        meshDeformer.MoveAndRotateActivated = !meshDeformer.MoveAndRotateActivated;

        boxCollider.enabled = meshDeformer.MoveAndRotateActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForX = meshDeformer.MoveAndRotateActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForY = meshDeformer.MoveAndRotateActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForZ = meshDeformer.MoveAndRotateActivated;
        boundsControl.Active = meshDeformer.MoveAndRotateActivated;
        rotationAxisConstraint.enabled = meshDeformer.MoveAndRotateActivated;
        objectManipulator.enabled = meshDeformer.MoveAndRotateActivated;
    }
}