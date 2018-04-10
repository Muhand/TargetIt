using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefabComponents : MonoBehaviour {

    [SerializeField]
    public Text messageField;
    [SerializeField]
    public Button dismissButton;

    private void Start()
    {
        dismissButton.onClick.AddListener(delegate
        {
            dismiss();
        });
    }

    private void dismiss()
    {
        Destroy(gameObject);
    }
}
