using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialScreen : MonoBehaviour {
    public TutorialScreen instance;
    [SerializeField]
    public Assets.Scripts.Enums.TutorialScreenType ScreenType;

    private void Awake()
    {
        if (instance == null)
            instance = this;
    }
}
