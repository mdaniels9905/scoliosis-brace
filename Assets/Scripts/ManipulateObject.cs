using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class ManipulateObject : MonoBehaviour {

    [SerializeField]
    private RadiusIndicatorHandler radiusIndicatorHandler;

    private BoundsControl boundsControl;
    private BoxCollider boxCollider;
    private ObjectManipulator objectManipulator;
    private RotationAxisConstraint rotationAxisConstraint;
    private MeshDeformer meshDeformer; 

    private void Start () {
        meshDeformer = GetComponent<MeshDeformer>();

        rotationAxisConstraint = GetComponent<RotationAxisConstraint>();
        rotationAxisConstraint.enabled = false;
        objectManipulator = GetComponent<ObjectManipulator>();
        objectManipulator.enabled = false;

        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
        boxCollider.enabled = false;
    }

    public void ActivateBoundsControl () {
        meshDeformer.RotationActivated = !meshDeformer.RotationActivated;
        radiusIndicatorHandler.RotationActivated = !radiusIndicatorHandler.RotationActivated;

        if ( meshDeformer.MovementActivated ) {
            meshDeformer.MovementActivated = !meshDeformer.MovementActivated;
            radiusIndicatorHandler.MovementActivated = !radiusIndicatorHandler.MovementActivated;

            objectManipulator.enabled = false;
            rotationAxisConstraint.enabled = false;
        }

        boxCollider.enabled = meshDeformer.RotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForX = meshDeformer.RotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForY = meshDeformer.RotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForZ = meshDeformer.RotationActivated;
        boundsControl.Active = meshDeformer.RotationActivated;        
    }

    public void ActivateObjectManipulation () {
        meshDeformer.MovementActivated = !meshDeformer.MovementActivated;
        radiusIndicatorHandler.MovementActivated = !radiusIndicatorHandler.MovementActivated;

        if ( meshDeformer.RotationActivated ) {
            meshDeformer.RotationActivated = !meshDeformer.RotationActivated;
            radiusIndicatorHandler.RotationActivated = !radiusIndicatorHandler.RotationActivated;

            boundsControl.rotationHandlesConfiguration.ShowHandleForX = false;
            boundsControl.rotationHandlesConfiguration.ShowHandleForY = false;
            boundsControl.rotationHandlesConfiguration.ShowHandleForZ = false;
        }

        boxCollider.enabled = meshDeformer.RotationActivated;
        boundsControl.Active = meshDeformer.MovementActivated;
        rotationAxisConstraint.enabled = meshDeformer.MovementActivated;
        objectManipulator.enabled = meshDeformer.MovementActivated;
    }
}