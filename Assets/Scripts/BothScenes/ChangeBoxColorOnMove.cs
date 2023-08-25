//This script changes the color of the boundary box to the "grabbed material" when the user moves an object. This was implemented because when
//the object is rotated the boundary box turns blue, therefore to keep the pattern going, this was added for when the object is moved.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class ChangeBoxColorOnMove : MonoBehaviour
{
    [SerializeField]
    private Material boxMaterial;

    [SerializeField]
    private Material grabbedBoxMaterial;

    [SerializeField]
    private GameObject moveCursor;

    private BoundsControl boundsControl;
    private bool objectMoving = false;
    private IMixedRealityPointer leftHandPointer;
    private IMixedRealityPointer rightHandPointer;
    private IMixedRealityPointer activePointer;

    private void Start () {
        boundsControl = GetComponent<BoundsControl>();
        moveCursor.SetActive( false );
    }

    private void Update () {

        if (objectMoving ) {
            if ( activePointer != null && activePointer.IsInteractionEnabled )
                moveCursor.transform.position = activePointer.Result.Details.Point;
        }
    }

    //Finds the cursor at the end of the hand pointer to know where to place the moveCursor
    private void FindActiveHandPointer () {
        foreach ( var inputSource in CoreServices.InputSystem.DetectedInputSources ) {
            foreach ( var pointer in inputSource.Pointers ) {
                if ( pointer.PointerName == "Left_ShellHandRayPointer(Clone)" )
                    leftHandPointer = pointer;
                else if ( pointer.PointerName == "Right_ShellHandRayPointer(Clone)" )
                    rightHandPointer = pointer;
            }
        }

        if ( leftHandPointer != null && leftHandPointer.IsInteractionEnabled )
            activePointer = leftHandPointer;
        else if ( rightHandPointer != null && rightHandPointer.IsInteractionEnabled )
            activePointer = rightHandPointer;
        else
            activePointer = null;
    }

    public void ChangeToGrabbedMaterial () {
        FindActiveHandPointer();
        objectMoving = true;
        moveCursor.SetActive( true );
        boundsControl.BoxDisplayConfig.BoxMaterial = grabbedBoxMaterial;
        
    }

    public void ChargeToDefaultMaterial () {
        objectMoving = false;
        moveCursor.SetActive( false );
        boundsControl.BoxDisplayConfig.BoxMaterial = boxMaterial;
        
    }
}
