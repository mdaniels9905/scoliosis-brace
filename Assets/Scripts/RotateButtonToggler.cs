using Unity.VisualScripting;
using UnityEngine;

public class RotateButtonToggler : MonoBehaviour
{
    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    [SerializeField]
    private MeshRenderer rotateButtonRenderer;

    [SerializeField]
    private MoveButtonToggler moveButtonToggler;

    [SerializeField]
    private MeshRenderer moveButtonRenderer;

    public bool IsRotateToggled { get; set; } = false;

    public void ToggleRotateColor () {
        IsRotateToggled = !IsRotateToggled;

        if ( moveButtonToggler.IsMoveToggled == true ) {
            moveButtonRenderer.material = defaultMaterial;
            moveButtonToggler.IsMoveToggled = false;
        }

        if ( IsRotateToggled )
            rotateButtonRenderer.material = toggledMaterial;
        else 
            rotateButtonRenderer.material = defaultMaterial;
    }
}
