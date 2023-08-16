using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

public class ObjectButtonToggler : MonoBehaviour
{
    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    [SerializeField]
    private MeshRenderer BraceButtonRenderer;

    [SerializeField]
    private MeshRenderer TorsoButtonRenderer;

    [SerializeField]
    private ObjectManipulator braceManipulator;

    [SerializeField]
    private ObjectManipulator torsoManipulator;

    [SerializeField]
    private MeshCollider braceMeshCollider;

    [SerializeField]
    private MeshCollider torsoMeshCollider;

    public bool BraceButtonToggled { get; set; } = false;
    public bool TorsoButtonToggled { get; set; } = false;

    private void Start () {
        braceManipulator.enabled = false;
        torsoManipulator.enabled = false;

        braceMeshCollider.enabled = false;
        torsoMeshCollider.enabled = false;
    }

    public void ToggleBraceButton () {
        BraceButtonToggled = !BraceButtonToggled;

        if ( TorsoButtonToggled ) {
            TorsoButtonRenderer.material = defaultMaterial;
            TorsoButtonToggled = false;
            torsoManipulator.enabled = false;
            torsoMeshCollider.enabled = false;
        }

        if ( BraceButtonToggled ) {
            BraceButtonRenderer.material = toggledMaterial;
            braceManipulator.enabled = true;
            braceMeshCollider.enabled = true;
        } else {
            BraceButtonRenderer.material = defaultMaterial;
            braceManipulator.enabled = false;
            braceMeshCollider.enabled = false;
        }
    }

    public void ToggleTorsoButton () {
        TorsoButtonToggled = !TorsoButtonToggled;

        if ( BraceButtonToggled ) {
            BraceButtonRenderer.material = defaultMaterial;
            BraceButtonToggled = false;
            braceManipulator.enabled = false;
            braceMeshCollider.enabled = false;
        }

        if ( TorsoButtonToggled ) {
            TorsoButtonRenderer.material = toggledMaterial;
            torsoManipulator.enabled = true;
            torsoMeshCollider.enabled = true;
        } else {
            TorsoButtonRenderer.material = defaultMaterial;
            torsoManipulator.enabled = false;
            torsoMeshCollider.enabled = false;
        }
    }
}
