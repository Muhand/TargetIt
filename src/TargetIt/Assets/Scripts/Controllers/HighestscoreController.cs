using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HighestscoreController : MonoBehaviour {

    [SerializeField]
    private Text HighestScoreText;

	// Use this for initialization
	void Start () {
        SetScore();
    }

    void SetScore()
    {
        HighestScoreText.text = GamePreferences.GetHighestScore().ToString();
    }
}
