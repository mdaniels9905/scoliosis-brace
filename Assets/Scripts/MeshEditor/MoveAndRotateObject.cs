//This script controls the toggle feature of the Move & Rotate button. When the button is toggled on, certain scripts are activated to allow
//for such movement. When the button is toggled off, the scripts are deactivated and the brace can no longer move/rotate.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class MoveAndRotateObject : MonoBehaviour {

    private MeshManipulator meshManipulator;
    private BoundsControl boundsControl;
    private BoxCollider boxCollider;
    private ObjectManipulator objectManipulator;
    private RotationAxisConstraint rotationAxisConstraint;
    
    private void Start () {
        meshManipulator = GetComponent<MeshManipulator>();
        boundsControl = GetComponent<BoundsControl>();
        boxCollider = GetComponent<BoxCollider>();
        objectManipulator = GetComponent<ObjectManipulator>();
        rotationAxisConstraint = GetComponent<RotationAxisConstraint>();

        objectManipulator.enabled = false;
        rotationAxisConstraint.enabled = false;
        boxCollider.enabled = false;
    }

    public void ActivateMoveAndRotate () {
        meshManipulator.MoveAndRotateActivated = !meshManipulator.MoveAndRotateActivated;

        boxCollider.enabled = meshManipulator.MoveAndRotateActivated;
        boundsControl.Active = meshManipulator.MoveAndRotateActivated;
        rotationAxisConstraint.enabled = meshManipulator.MoveAndRotateActivated;
        objectManipulator.enabled = meshManipulator.MoveAndRotateActivated;
    }
}