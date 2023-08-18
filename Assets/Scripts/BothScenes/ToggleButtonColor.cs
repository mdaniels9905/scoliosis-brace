using UnityEngine;

public class ToggleButtonColor : MonoBehaviour {

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
