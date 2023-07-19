using UnityEngine;

public class MenuHandler : MonoBehaviour {
    
    private bool menuVisible = false;

    public void OnButtonClicked () {
        menuVisible = !menuVisible;
        gameObject.SetActive(menuVisible );
    }
}
