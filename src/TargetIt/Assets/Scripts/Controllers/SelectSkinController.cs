using Assets.Scripts.Enums;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class SelectSkinController : MonoBehaviour {

    [SerializeField]
    GameObject PinSkinsPanel;
    [SerializeField]
    GameObject CollectorSkinsPanel;
    [SerializeField]
    GameObject CheckMarkPrefab;
    [SerializeField]
    GameObject[] PinSkins;
    [SerializeField]
    GameObject[] CollectorSkins;

    GameObject CheckMark;

    void Start () {
        showPinSkins();
		if (GamePreferences.GetAdsSettings () == Assets.Scripts.Enums.Settings.Ads.Show) {
			if (AdsController.instance.getInterstitialView != null)
				AdsController.instance.getInterstitialView.Destroy ();
			AdsController.instance.RequestBanner();
		}
    }

    public void showPinSkins()
    {
        PinSkinsPanel.SetActive(true);
        CollectorSkinsPanel.SetActive(false);

        //Loop all skins
        foreach (GameObject skin in PinSkins)
        {
            Skins.Pin var = skin.GetComponent<PinSkin>().Skin;

            //If the skin matches the skin in the settings then set a checkmark on it and break
            if (var == GamePreferences.GetPinSkin())
            {
                //Set the checkmark 
                CheckMark = Instantiate(CheckMarkPrefab);
                CheckMark.transform.SetParent(skin.transform);

                RectTransform rec = CheckMark.GetComponent<RectTransform>();
                rec.anchorMin = new Vector2(0, 1);
                rec.anchorMax = new Vector2(0, 1);
                rec.pivot = new Vector2(0.5f, 0.5f);

                rec.anchoredPosition = new Vector3(20, -20, -1);

                CheckMark.transform.localScale = new Vector3(1, 1, 1);

                //Break
                break;
            }
        }
    }

    public void showCollectorSkins()
    {
        PinSkinsPanel.SetActive(false);
        CollectorSkinsPanel.SetActive(true);

        foreach (GameObject skin in CollectorSkins)
        {
            Skins.Collector var = skin.GetComponent<CollectorSkin>().Skin;

            //If the skin matches the skin in the settings then set a checkmark on it and break
            if (var == GamePreferences.GetCollectorSkin())
            {
                //Set the checkmark 
                CheckMark = Instantiate(CheckMarkPrefab);
                CheckMark.transform.SetParent(skin.transform);

                RectTransform rec = CheckMark.GetComponent<RectTransform>();
                rec.anchorMin = new Vector2(0, 1);
                rec.anchorMax = new Vector2(0, 1);
                rec.pivot = new Vector2(0.5f, 0.5f);

                rec.anchoredPosition = new Vector3(20, -20, -1);

                CheckMark.transform.localScale = new Vector3(1, 1, 1);

                //Break
                break;
            }
        }
    }

    public void backButton()
    {
        SceneManager.LoadScene("Gameover");
    }

    public void setPinSkin()
    {
        var go = EventSystem.current.currentSelectedGameObject;

        if (go != null)
        {
            //GameObject obj = go.GetComponent<GameObject>();
            Skins.Pin currentSkin = go.GetComponent<PinSkin>().Skin;
            GamePreferences.SetPinSkin(currentSkin);
            GameManager.instance.setCurrentPinSkin();

            //Set the checkmark 
            CheckMark.transform.SetParent(go.transform);

            RectTransform rec = CheckMark.GetComponent<RectTransform>();
            rec.anchorMin = new Vector2(0, 1);
            rec.anchorMax = new Vector2(0, 1);
            rec.pivot = new Vector2(0.5f, 0.5f);

            rec.anchoredPosition = new Vector3(20, -20, -1);

            CheckMark.transform.localScale = new Vector3(1, 1, 1);
        }
        else
            Debug.Log("currentSelectedGameObject is null");
    }
    public void setCollectorSkin()
    {
        var go = EventSystem.current.currentSelectedGameObject;

        if (go != null)
        {
            //GameObject obj = go.GetComponent<GameObject>();
            Skins.Collector currentSkin = go.GetComponent<CollectorSkin>().Skin;
            GamePreferences.SetCollectorSkin(currentSkin);
            GameManager.instance.setCurrentCollectorSkin();

            //Set the checkmark 
            CheckMark.transform.SetParent(go.transform);

            RectTransform rec = CheckMark.GetComponent<RectTransform>();
            rec.anchorMin = new Vector2(0, 1);
            rec.anchorMax = new Vector2(0, 1);
            rec.pivot = new Vector2(0.5f, 0.5f);

            rec.anchoredPosition = new Vector3(20, -20, -1);

            CheckMark.transform.localScale = new Vector3(1, 1, 1);
        }
        else
            Debug.Log("currentSelectedGameObject is null");
    }
}
