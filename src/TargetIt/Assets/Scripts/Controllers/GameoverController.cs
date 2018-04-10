using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

public class GameoverController : MonoBehaviour {

    [SerializeField]
    AudioSource ClickAudioSource;
    [SerializeField]
    AudioClip ClickClip;
    [SerializeField]
    Text CurrentScoreTextField;
//    [SerializeField]
//    Text HighestScoreTextField;
	[SerializeField]
	Button NoAdsButton;
	private bool gameJustStarted = true;

    private void Start()
    {
        int currentScore = GameplayController.instance.getScore();
        CurrentScoreTextField.text = currentScore.ToString();
		DisableNoAdsButtonIfBought ();

        //Reset how many times a player lost
        GameManager.instance.timesLost=0;
		try
		{
            if(GamePreferences.GetAdsSettings() == Assets.Scripts.Enums.Settings.Ads.Show)
            {
                if (AdsController.instance.getBannerView != null)
                    AdsController.instance.getBannerView.Destroy();

                GameManager.instance.adsOddOnGamePlay = UnityEngine.Random.Range(1, 7);

                if (!GameManager.instance.usedRewardToContinuePlaying)
                {
                    if(!(GameManager.instance.adsOddOnGamePlay == GameManager.instance.adGoldenNumber))
                        AdsController.instance.RequestInterstitial();
                }
            }

        }
		catch(NullReferenceException exception) {
			
		}
    }

	void Update()
	{
		if (gameJustStarted && (GamePreferences.GetAdsSettings () == Assets.Scripts.Enums.Settings.Ads.Show) && !(GameManager.instance.usedRewardToContinuePlaying)) {
			if(AdsController.instance.getInterstitialView.IsLoaded())
			{
//				AdsController.instance.ShowInterstitial ();
				AdsController.instance.getInterstitialView.Show();
				gameJustStarted = false;
			}
		}
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
        StartCoroutine(LoadLevel("SelectSkin"));
    }

    public void RestorePurchases()
    {
        IAPManager.instance.RestorePurchases();
    }

    public void NoAds()
    {
        //if (!ClickAudioSource.isPlaying)
        //    ClickAudioSource.PlayOneShot(ClickClip);
        IAPManager.instance.BuyNoAds();
		DisableNoAdsButtonIfBought ();
    }

	private void DisableNoAdsButtonIfBought()
	{
		try{
			if (IAPManager.instance.isItemBought (IAPManager.PRODUCT_NO_ADS)) {
				NoAdsButton.interactable = false;
				//print ("YES YOU BOUGHT IT");
			}
		}
		catch(NullReferenceException ex) {
		}
	}

	public void DeleteSaved()
	{
		try{
			PlayerPrefs.DeleteAll();
		}
		catch(NullReferenceException ex) {
		}
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
