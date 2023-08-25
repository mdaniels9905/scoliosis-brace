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
