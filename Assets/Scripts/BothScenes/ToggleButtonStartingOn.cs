//This script controls the toggle feature of the button (changing the color from light blue to the default blue). This script starts with
//the button toggled on.
//Written by Maya Daniels

using UnityEngine;

public class ToggleButtonStartingOn : MonoBehaviour {

    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    [SerializeField]
    private MeshRenderer buttonRenderer;
    
    private bool isToggled = true;

    private void Start () {
        buttonRenderer.material = toggledMaterial;
    }

    public void ToggleColor () {
        isToggled = !isToggled;

        if (isToggled)
            buttonRenderer.material = toggledMaterial;
        else
            buttonRenderer.material = defaultMaterial;
    }
}
