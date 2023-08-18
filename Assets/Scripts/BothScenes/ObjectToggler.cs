using UnityEngine;

public class ObjectToggler : MonoBehaviour {
    
    private bool objectVisible = true;

    private void Start () {
        gameObject.SetActive( objectVisible );
    }

    public void OnButtonClicked () {
        objectVisible = !objectVisible;
        gameObject.SetActive( objectVisible );
    }
}