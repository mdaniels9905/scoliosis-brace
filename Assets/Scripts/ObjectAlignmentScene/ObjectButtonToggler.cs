//This script handles the toggle features of the button (changing between light blue and default blue) and calls the function that
//activates/deactivates certain scripts to determine if the feature is activated/deactivated. 
//Written by Maya Daniels

using UnityEngine;

public class ObjectButtonToggler : MonoBehaviour {

    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    [SerializeField]
    private MeshRenderer imageButtonRenderer;

    [SerializeField]
    private MeshRenderer braceButtonRenderer;

    [SerializeField]
    private MeshRenderer torsoButtonRenderer;

    [SerializeField]
    private ImageHandler imageHandler;

    [SerializeField]
    private BraceHandler braceHandler;

    [SerializeField]
    private PatientModelHandler patientModelHandler;

    public bool ImageButtonToggled { get; set; } = false;
    public bool BraceButtonToggled { get; set; } = false;
    public bool TorsoButtonToggled { get; set; } = false;

    public void ToggleImageButton () {
        ImageButtonToggled = !ImageButtonToggled;

        if ( TorsoButtonToggled ) {
            torsoButtonRenderer.material = defaultMaterial;
            TorsoButtonToggled = false;
            patientModelHandler.OnTorsoButtonToggledOff();
        } else if (BraceButtonToggled) {
            braceButtonRenderer.material = defaultMaterial;
            BraceButtonToggled = false;
            braceHandler.OnBraceButtonToggledOff();
        }

        if ( ImageButtonToggled ) {
            imageButtonRenderer.material = toggledMaterial;
            imageHandler.OnImageButtonToggledOn();
        } else {
            imageButtonRenderer.material = defaultMaterial;
            imageHandler.OnImageButtonToggledOff();
        }
    }

    public void ToggleBraceButton () {
        BraceButtonToggled = !BraceButtonToggled;

        if ( TorsoButtonToggled ) {
            torsoButtonRenderer.material = defaultMaterial;
            TorsoButtonToggled = false;
            patientModelHandler.OnTorsoButtonToggledOff();
        } else if ( ImageButtonToggled ) {
            imageButtonRenderer.material = defaultMaterial;
            ImageButtonToggled = false;
            imageHandler.OnImageButtonToggledOff();
        }

        if ( BraceButtonToggled ) {
            braceButtonRenderer.material = toggledMaterial;
            braceHandler.OnBraceButtonToggledOn();
        } else {
            braceButtonRenderer.material = defaultMaterial;
            braceHandler.OnBraceButtonToggledOff();
        }
    }

    public void ToggleTorsoButton () {
        TorsoButtonToggled = !TorsoButtonToggled;

        if ( ImageButtonToggled ) {
            imageButtonRenderer.material = defaultMaterial;
            ImageButtonToggled = false;
            imageHandler.OnImageButtonToggledOff();
        } else if ( BraceButtonToggled ) {
            braceButtonRenderer.material = defaultMaterial;
            BraceButtonToggled = false;
            braceHandler.OnBraceButtonToggledOff();
        }

        if ( TorsoButtonToggled ) {
            torsoButtonRenderer.material = toggledMaterial;
            patientModelHandler.OnTorsoButtonToggledOn();
        } else {
            torsoButtonRenderer.material = defaultMaterial;
            patientModelHandler.OnTorsoButtonToggledOff();
        }
    }
}