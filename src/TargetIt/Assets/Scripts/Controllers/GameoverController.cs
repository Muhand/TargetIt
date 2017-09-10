using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameoverController : MonoBehaviour {

    [SerializeField]
    AudioSource ClickAudioSource;
    [SerializeField]
    AudioClip ClickClip;
    [SerializeField]
    Text CurrentScoreTextField;
    [SerializeField]
    Text HighestScoreTextField;

    private void Start()
    {
        int currentScore = GameplayController.instance.getScore();
        CurrentScoreTextField.text = currentScore.ToString();
    }

    void CheckToPlayMusic()
    {
        if (GamePreferences.GetMusicState() == Assets.Scripts.Enums.Settings.Music.On)
        {
            MusicController.instance.PlayMusic(true);
        }
        else
        {
            MusicController.instance.PlayMusic(false);
        }
    }

    public void Restart()
    {
        //    ClickAudioSource.PlayOneShot(ClickClip);
        //if (!ClickAudioSource.isPlaying)
        //{
        //    SceneManager.LoadScene("Gameplay");
        //}
        StartCoroutine(LoadLevel("Gameplay"));
    }

    public void LeaderBoard()
    {
        if (!ClickAudioSource.isPlaying)
            ClickAudioSource.PlayOneShot(ClickClip);

        Social.ShowLeaderboardUI();
    }

    public void ChooseSkin()
    {
        if (!ClickAudioSource.isPlaying)
            ClickAudioSource.PlayOneShot(ClickClip);
    }

    public void NoAds()
    {
        if (!ClickAudioSource.isPlaying)
            ClickAudioSource.PlayOneShot(ClickClip);
    }



    IEnumerator LoadLevel(string levelName)
    {
        if (GamePreferences.GetMusicState() == Assets.Scripts.Enums.Settings.Music.On)
        {
            ClickAudioSource.PlayOneShot(ClickClip);

            while (ClickAudioSource.isPlaying)
                yield return null;
        }

        SceneManager.LoadScene(levelName);
    }
}
