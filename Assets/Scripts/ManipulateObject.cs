using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class ManipulateObject : MonoBehaviour {

    public MeshDeformer meshDeformer;
    public RadiusIndicatorHandler radiusIndicatorHandler;

    private BoundsControl boundsControl;
    private BoxCollider boxCollider;
    private ObjectManipulator objectManipulator;
    private RotationAxisConstraint rotationAxisConstraint;

    private void Start () {
        rotationAxisConstraint = GetComponent<RotationAxisConstraint>();
        rotationAxisConstraint.enabled = false;
        objectManipulator = GetComponent<ObjectManipulator>();
        objectManipulator.enabled = false;

        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
        boxCollider.enabled = false;
    }

    public void ActivateBoundsControl () {
        meshDeformer.rotationActivated = !meshDeformer.rotationActivated;
        radiusIndicatorHandler.rotationActivated = !radiusIndicatorHandler.rotationActivated;

        if ( meshDeformer.movementActivated ) {
            meshDeformer.movementActivated = !meshDeformer.movementActivated;
            radiusIndicatorHandler.movementActivated = !radiusIndicatorHandler.movementActivated;

            objectManipulator.enabled = false;
            rotationAxisConstraint.enabled = false;
        }

        boxCollider.enabled = meshDeformer.rotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForX = meshDeformer.rotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForY = meshDeformer.rotationActivated;
        boundsControl.rotationHandlesConfiguration.ShowHandleForZ = meshDeformer.rotationActivated;
        boundsControl.Active = meshDeformer.rotationActivated;        
    }

    public void ActivateObjectManipulation () {
        meshDeformer.movementActivated = !meshDeformer.movementActivated;
        radiusIndicatorHandler.movementActivated = !radiusIndicatorHandler.movementActivated;

        if ( meshDeformer.rotationActivated ) {
            meshDeformer.rotationActivated = !meshDeformer.rotationActivated;
            radiusIndicatorHandler.rotationActivated = !radiusIndicatorHandler.rotationActivated;

            boundsControl.rotationHandlesConfiguration.ShowHandleForX = false;
            boundsControl.rotationHandlesConfiguration.ShowHandleForY = false;
            boundsControl.rotationHandlesConfiguration.ShowHandleForZ = false;
        }

        boxCollider.enabled = meshDeformer.rotationActivated;
        boundsControl.Active = meshDeformer.movementActivated;
        rotationAxisConstraint.enabled = meshDeformer.movementActivated;
        objectManipulator.enabled = meshDeformer.movementActivated;
    }
}