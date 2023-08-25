//This script handles the toggle feature of the Rotate All Objects button. When the button is turned on, the objects are allowed to rotate,
//therefore all scripts related to that are enabled. When the button is turned off, all associated scripts are deactivated.
//Written by Maya Daniels

using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class BraceHandler : MonoBehaviour {
    
    [SerializeField]
    private BoundsControl objectBounds;

    [SerializeField]
    private BoxCollider objectBoxCollider;

    private MeshCollider braceMeshCollider;

    private void Start () {
        braceMeshCollider = GetComponent<MeshCollider>();

        objectBounds.enabled = false;
        braceMeshCollider.enabled = false;
        objectBoxCollider.enabled = false;
    }

    public void OnBraceButtonToggledOn () {
        objectBounds.enabled = true;
        objectBoxCollider.enabled = true;
        braceMeshCollider.enabled = true;
    }

    public void OnBraceButtonToggledOff () {
        objectBounds.enabled = false;
        objectBoxCollider.enabled = false;
        braceMeshCollider.enabled = false;
    }
}
