using UnityEngine;

public class MoveButtonToggler : MonoBehaviour
{
    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    [SerializeField]
    private MeshRenderer moveButtonRenderer;

    [SerializeField]
    private RotateButtonToggler rotateButtonToggler;

    [SerializeField]
    private MeshRenderer rotateButtonRenderer;

    public bool IsMoveToggled { get; set; } = false;

    public void ToggleMoveColor () {
        IsMoveToggled = !IsMoveToggled;

        if ( rotateButtonToggler.IsRotateToggled == true ) {
            rotateButtonRenderer.material = defaultMaterial;
            rotateButtonToggler.IsRotateToggled = false;
        }

        if ( IsMoveToggled )
            moveButtonRenderer.material = toggledMaterial;
        else
            moveButtonRenderer.material = defaultMaterial;
    }
}
