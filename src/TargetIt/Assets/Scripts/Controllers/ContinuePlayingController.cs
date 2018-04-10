using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ContinuePlayingController : MonoBehaviour {

    [SerializeField]
    RadialProgressBar radialProgressBar;
    [SerializeField]
    float WaitForBeforeExiting;
    private float currentTime = 0.0f;
    private bool keepLoading = true;
    private bool adIsShown = false;
    private bool rewarded = false;

    // Use this for initialization
    void Start () {
        //GameManager.instance.timesLost++;
        //GameManager.instance.usedRewardToContinuePlaying = false;
        //AdsController.instance.getRewardAd.OnAdLoaded += GetRewardAd_OnAdLoaded;
        //AdsController.instance.getRewardAd.OnAdRewarded += GetRewardAd_OnAdRewarded;
        //AdsController.instance.getRewardAd.OnAdClosed += GetRewardAd_OnAdClosed;
        //AdsController.instance.getRewardAd.OnAdFailedToLoad += GetRewardAd_OnAdFailedToLoad;
        //AdsController.instance.getRewardAd.OnAdLeavingApplication += GetRewardAd_OnAdLeavingApplication;
        
    }

    private void OnEnable()
    {
        GameManager.instance.timesLost++;
        GameManager.instance.usedRewardToContinuePlaying = false;
        AdsController.instance.getRewardAd.OnAdLoaded += GetRewardAd_OnAdLoaded;
        AdsController.instance.getRewardAd.OnAdRewarded += GetRewardAd_OnAdRewarded;
        AdsController.instance.getRewardAd.OnAdClosed += GetRewardAd_OnAdClosed;
        AdsController.instance.getRewardAd.OnAdFailedToLoad += GetRewardAd_OnAdFailedToLoad;
        AdsController.instance.getRewardAd.OnAdLeavingApplication += GetRewardAd_OnAdLeavingApplication;
    }
    private void OnDisable()
    {
        AdsController.instance.getRewardAd.OnAdLoaded -= GetRewardAd_OnAdLoaded;
        AdsController.instance.getRewardAd.OnAdRewarded -= GetRewardAd_OnAdRewarded;
        AdsController.instance.getRewardAd.OnAdClosed -= GetRewardAd_OnAdClosed;
        AdsController.instance.getRewardAd.OnAdFailedToLoad -= GetRewardAd_OnAdFailedToLoad;
        AdsController.instance.getRewardAd.OnAdLeavingApplication -= GetRewardAd_OnAdLeavingApplication;
    }

    void disappear()
    {
        //Destroy(gameObject);
        //SceneManager.LoadScene("Gameover");
        SceneManager.LoadScene("Gameover");
    }

    public void Update()
    {
        if (keepLoading)
        {
            if (currentTime < WaitForBeforeExiting)
            {
                currentTime += Time.deltaTime;
                radialProgressBar.incremeantProgressBar(currentTime / WaitForBeforeExiting);
            }
            else
                disappear();
        }
        else
        {
            //if(AdsController.instance.getRewardAd.IsLoaded() && !adIsShown)
            //{
            //    AdsController.instance.getRewardAd.Show();
            //    AdsController.instance.getRewardAd.OnAdRewarded += GetRewardAd_OnAdRewarded;
            //    AdsController.instance.getRewardAd.OnAdClosed += GetRewardAd_OnAdClosed;
            //    AdsController.instance.getRewardAd.OnAdFailedToLoad += GetRewardAd_OnAdFailedToLoad;
            //    AdsController.instance.getRewardAd.OnAdLeavingApplication += GetRewardAd_OnAdLeavingApplication;
            //    adIsShown = true;
            //}
        }

    }

    private void GetRewardAd_OnAdLeavingApplication(object sender, System.EventArgs e)
    {
        ErrorController.instance.ErrorMessage = "Are you sure you want to leave? You may not be rewarded for watching this ad if you leave now.";
        keepLoading = true;
    }

    private void GetRewardAd_OnAdLoaded(object sender, System.EventArgs e)
    {
        print("AD LOADED SUCCESSFULLY AND NOW SHOWING IT");
        AdsController.instance.getRewardAd.Show();
    }

    private void GetRewardAd_OnAdFailedToLoad(object sender, GoogleMobileAds.Api.AdFailedToLoadEventArgs e)
    {
        //Destroy(gameObject);
        print("AD FAILED TO LOAD DUE TO NO INTERNET CONNECTION");
        ErrorController.instance.ErrorMessage = "There was an error playing this ad, you will be moved to the main menu. Please confirm you are connected to the ineternet, as this error may occure if there is no internet connection, if you keep getting this error, please send us an email at muhandjumah@gmail.com";
        disappear();
    }

    private void GetRewardAd_OnAdRewarded(object sender, GoogleMobileAds.Api.Reward e)
    {
        //Destroy(gameObject);
        print("AD WAS REWARDED");
        rewarded = true;
    }
    private void GetRewardAd_OnAdClosed(object sender, System.EventArgs e)
    {
        print("AD IS CLOSED");

        if (rewarded)
        {
            print("AD IS CLOSED WITH A REWARD!!");
            GameManager.instance.usedRewardToContinuePlaying = true;
            Destroy(gameObject);
        }
        else
        {
            print("AD IS CLOED WITHOUT A REWARD");
            disappear();
        }
    }
    public void testtt()
    {
        keepLoading = false;
        adIsShown = false;
        rewarded = true;

        if (rewarded)
        {
            print("AD IS CLOSED WITH A REWARD!!");
            GameManager.instance.usedRewardToContinuePlaying = true;
            Destroy(gameObject);
        }
        else
        {
            print("AD IS CLOED WITHOUT A REWARD");
            disappear();
        }
        //Destroy(gameObject);
    }
    public void continuePlaying()
    {
        if (GamePreferences.GetAdsSettings() == Assets.Scripts.Enums.Settings.Ads.Show)
        {
            print("TRYING TO CONTINUE PLAYING BY REQUESTING A REWARD BASED VIDEO");

            keepLoading = false;
            AdsController.instance.RequestRewardBasedVideo();
            adIsShown = false;
        }
        else
        {
            print("WE ARE NOT SHOWING ADS");
            Destroy(gameObject);
        }

        //keepLoading = false;
        //adIsShown = false;
        //Destroy(gameObject);

        //AdsController.instance.ShowRewardBasedVideo();
        //switch (AdsController.instance.rewardVideoStatus)
        //{
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoLoaded:
        //        //AdsController.instance.ShowRewardBasedVideo();
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoFailedToLoad:
        //        Destroy(gameObject);
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoOpened:
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoStarted:
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoClosed:
        //        Destroy(gameObject);
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoRewarded:
        //        Destroy(gameObject);
        //        break;
        //    case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoLeftApplication:
        //        keepLoading = true;
        //        break;
        //    default:
        //        break;
        //}
        //Destroy(gameObject);
    }
}
