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

    // Use this for initialization
    void Start () {
        GameManager.instance.timesLost++;
    }
	
    void disappear()
    {
        //Destroy(gameObject);
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

    }
    public void continuePlaying()
    {
        keepLoading = false;
        AdsController.instance.RequestRewardBasedVideo();
        switch (AdsController.instance.rewardVideoStatus)
        {
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoLoaded:
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoFailedToLoad:
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoOpened:
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoStarted:
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoClosed:
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoRewarded:
                Destroy(gameObject);
                break;
            case Assets.Scripts.Enums.RewardVideoCallBack.HandleRewardBasedVideoLeftApplication:
                break;
            default:
                break;
        }
        //Destroy(gameObject);
    }
}
