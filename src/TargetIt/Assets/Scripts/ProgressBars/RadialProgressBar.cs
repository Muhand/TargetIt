using UnityEngine;
using UnityEngine.UI;

public class RadialProgressBar : MonoBehaviour {

    public Transform LoadingBar;
    public Transform TextIndicator;
    public Transform TextLoading;
    [SerializeField] public float currentAmount;
    [SerializeField] public float speed;
    public bool isLoading = false;

	// Update is called once per frame
	void Update () {
        //if(currentAmount < 100)
        //{
        //    currentAmount += speed * Time.deltaTime;
        //    //TextIndicator.GetComponent<Text>().text = ((int)currentAmount).ToString() + "%";
        //    //TextLoading.gameObject.SetActive(true);
        //}
        //else
        //{
        //    //TextLoading.gameObject.SetActive(false);
        //    //TextIndicator.GetComponent<Text>().text = "DONE!";
        //}
       

        //LoadingBar.GetComponent<Image>().fillAmount = currentAmount / 100;
	}
    public void incremeantProgressBar()
    {
        //if (currentAmount < 100)
            currentAmount += 1 * Time.deltaTime;

        LoadingBar.GetComponent<Image>().fillAmount = currentAmount / 100;
    }
    public void incremeantProgressBar(float amount)
    {
        //if (currentAmount < 100)
        currentAmount += amount;

        LoadingBar.GetComponent<Image>().fillAmount = amount;
    }

    public void startTimerFor(int time)
    {
        isLoading = true;
        float temp=0;
        while (temp < time)
        {
            temp += Time.deltaTime;
            LoadingBar.GetComponent<Image>().fillAmount = temp / time;
        }

        isLoading = false;

    }
}
