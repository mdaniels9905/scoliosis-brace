using UnityEngine;

public class MenuHandler : MonoBehaviour {
    
    public GameObject menu;
    private bool menuVisible = false;

    public void OnButtonClicked () {
        menuVisible = !menuVisible;
        menu.SetActive(menuVisible );
    }
}
