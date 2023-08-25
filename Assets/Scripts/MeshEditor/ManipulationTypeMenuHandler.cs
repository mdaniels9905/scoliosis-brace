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
