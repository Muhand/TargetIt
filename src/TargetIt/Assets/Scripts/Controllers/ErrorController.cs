using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ErrorController : MonoBehaviour {

    public static ErrorController instance;

    [SerializeField]
    GameObject errorPrefab;
    [SerializeField]
    PrefabComponents prefabComponents;

    GameObject errorMessage;
    Text textField;

    public string ErrorMessage
    {
        set
        {
            textField.text = value;
            errorMessage = Instantiate(errorPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        }
        get
        {
            return textField.text;
        }
    }

    // Use this for initialization
    void Start () {
        MakeSingleton();
        init();
	}
   
    void MakeSingleton()
    {
        if (instance != null)
            Destroy(gameObject);
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }
    private void init()
    {
        textField = prefabComponents.messageField;
    }
}
