using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Collector : MonoBehaviour {

    [SerializeField]
    public Rigidbody2D rb;
    public float rotationSpeed;
    public float disappearSpeed;
    public bool rotate = true;
    public bool isDisappearing = false;
    public bool isGameOverDispaly = false;
    [SerializeField]
    public SpriteRenderer Renderer;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
        if(rotate)
            transform.Rotate(0f, 0f, rotationSpeed * Time.fixedDeltaTime);

        if (gameObject.transform.childCount >= 9 && !isGameOverDispaly)
        {
            rotate = false;
            GameplayController.instance.collectorIsDisappearing = true;

            //gameObject.transform.LookAt(Vector2.up);
            //GameplayController.instance.currentlyDeletedCollectorsCords.Add(gameObject.transform.position,gameObject.GetComponent<SpriteRenderer>().color);
            if (!isDisappearing)
            {
                GameplayController.instance.currentlyDeletedCollectors.Add(transform.position);
                GameplayController.instance.addScore(10);
                GameplayController.instance.speedOfDiedController = rotationSpeed;
                isDisappearing = true;
            }
            rb.MovePosition(rb.position + (Vector2.up * Time.fixedDeltaTime * disappearSpeed));
            //gameObject.transform.position = Vector2.MoveTowards(gameObject.transform.position, Vector2.down, 2 * Time.deltaTime);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Pin" || collision.tag == "Spear")
        {
            //SpriteRenderer PinSpriteRenderer = collision.GetComponent<SpriteRenderer>();
            //if(PinSpriteRenderer.color != gameObject.GetComponent<SpriteRenderer>().color)
            //{
            //    GameplayController.instance.losing = true;
            //    SceneManager.LoadScene("Gameover");
            //}
            //else
            //{
            //    if (!isDisappearing && !isGameOverDispaly)
            //        GameplayController.instance.addScore(1);
            //}
        }
    }

    private void OnBecameInvisible()
    {
        if (!isGameOverDispaly && GameplayController.instance.losing == false)
        {
            GameplayController.instance.currentCollectors.Remove(gameObject);
            GameplayController.instance.collectorIsDisappearing = false;
            Destroy(gameObject);
        }
        //Gameplay.instance.isShooting = false;
    }
}
