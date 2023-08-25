//This script controls the toggle feature of the Deform and Erase button. Only one button can be toggle at a time. If one button is toggled
//and the other is clicked on, the first one will be toggled off and the second one will be toggled on.
//Written by Maya Daniels

using UnityEngine;

public class ManipulationTypeMenuHandler : MonoBehaviour {

    [SerializeField]
    GameObject brushTypeMenu;

    [SerializeField]
    MeshRenderer deformButtonRenderer;

    [SerializeField]
    MeshRenderer eraseButtonRenderer;

    [SerializeField]
    Material defaultMaterial;

    [SerializeField]
    Material toggledMaterial;

    public bool DeformMenuActivated { get; private set; } = true;
    public bool EraseMenuActivated { get; private set; } = false;

    private void Start () {
        brushTypeMenu.SetActive(true);
        deformButtonRenderer.material = toggledMaterial;
    }

    public void ActivateDeformMenu () {
        DeformMenuActivated = !DeformMenuActivated;

        if ( EraseMenuActivated ) {
            EraseMenuActivated = false;
            eraseButtonRenderer.material = defaultMaterial;
        }

        brushTypeMenu.SetActive( DeformMenuActivated );

        if ( DeformMenuActivated )
            deformButtonRenderer.material = toggledMaterial;
        else
            deformButtonRenderer.material = defaultMaterial;
    }

    public void ActivateEraseMenu () {
        EraseMenuActivated = !EraseMenuActivated;

        if (DeformMenuActivated) {
            DeformMenuActivated = false;
            deformButtonRenderer.material = defaultMaterial;
        }

        brushTypeMenu.SetActive( EraseMenuActivated );

        if ( EraseMenuActivated )
            eraseButtonRenderer.material = toggledMaterial;
        else
            eraseButtonRenderer.material = defaultMaterial;
    }
}
