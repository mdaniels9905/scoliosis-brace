//This script handles the toggle feature of the Move & Rotate X-Ray Image button. When the button is turned on, the object is allowed to move/rotate,
//therefore all scripts related to that are enabled. When the button is turned off, all associated scripts are deactivated.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class ImageHandler : MonoBehaviour {

    private ObjectManipulator imageManipulator;
    private BoundsControl imageBounds;
    private BoxCollider imageBoxCollider;

    private void Start () {
        imageManipulator = GetComponent<ObjectManipulator>();
        imageBounds = GetComponent<BoundsControl>();
        imageBoxCollider = GetComponent<BoxCollider>();

        imageManipulator.enabled = false;
        imageBounds.enabled = false;
        imageBoxCollider.enabled = false;
    }

    public void OnImageButtonToggledOn () {
        imageManipulator.enabled = true;
        imageBounds.enabled = true;
        imageBoxCollider.enabled = true;
    }

    public void OnImageButtonToggledOff () {
        imageManipulator.enabled = false;
        imageBounds.enabled = false;
        imageBoxCollider.enabled = false;
    }
}
