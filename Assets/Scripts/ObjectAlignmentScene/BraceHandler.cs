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

        objectBoxCollider.center = new Vector3( 0, 0, 0.15f );
        objectBoxCollider.size = new Vector3( 0.8f, 0.9f, 0.5f );
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
