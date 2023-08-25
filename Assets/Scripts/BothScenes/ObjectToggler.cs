//This script controls the visiblity of objects that have a toggle feature (controls whether they are visible). This script starts with the
//object visible (toggled on).
//Written by Maya Daniels

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
