﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyMovement;
using UnityEngine.SceneManagement;
using System;

public class Pin : MonoBehaviour
{

    [SerializeField]
    public GameObject spear;
    [SerializeField]
    public Rigidbody2D rb;
    public float speed = 20f;
    public bool isMoving = false;
    private Vector3 target;
    private float lastSqrMag;
    private Vector2 targetPos;

    // Use this for initialization
    void Start()
    {
        spear.GetComponent<SpriteRenderer>().color = this.gameObject.GetComponent<SpriteRenderer>().color;
    }

    private void FixedUpdate()
    {
        if (isMoving)
        {
            Move2DObject.translateOverLine2(gameObject, target, 0.1f, speed);
        }
    }
    

    public void setTarget(Vector3 targetTransform)
    {
        this.target = targetTransform;


        Vector2 diff = target - transform.position;

        float angle = Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg;

        transform.rotation = Quaternion.Euler(0.0f, 0.0f, angle);
    }
    

    private void OnTriggerEnter2D(Collider2D collision)
    {
        print("COllided with " + collision.name+" Tag = "+collision.tag);

        if (collision.tag == "Collector")
        {

            SpriteRenderer CollectorSpriteRenderer = collision.GetComponent<SpriteRenderer>();
            if (CollectorSpriteRenderer.color != gameObject.GetComponent<SpriteRenderer>().color)
            {
                GameplayController.instance.losing = true;
                SceneManager.LoadScene("Gameover");
            }
            else
            {
                if (!GameplayController.instance.collectorIsDisappearing)
                    GameplayController.instance.addScore(1);


                //(collision.GetComponent<SpriteRenderer>().color == gameObject.GetComponent<SpriteRenderer>().color)
                transform.SetParent(collision.transform);

                if (!GameplayController.instance.collectorIsDisappearing)
                {
                    int leftPins = Convert.ToInt16(collision.transform.GetChild(0).GetComponent<TextMesh>().text);
                    leftPins--;
                    collision.transform.GetChild(0).GetComponent<TextMesh>().text = leftPins.ToString();
                }

                GameplayController.instance.isShooting = false;
            }
            isMoving = false;
        }
        else if ((collision.tag == "Spear" || collision.tag == "Pin") && Move2DObject.getDistance(gameObject.transform.position, new Vector2(0,-1.9f)) > 0.5f)
        {
            SpriteRenderer collisionRenderer = collision.GetComponent<SpriteRenderer>();
            if (collisionRenderer.color == GetComponent<SpriteRenderer>().color)
            {
                GameplayController.instance.losing = true;
                SceneManager.LoadScene("Gameover");
            }
        }
    }

    private void OnBecameInvisible()
    {
        if (isMoving == true)
        {
            GameplayController.instance.isShooting = false;
            Destroy(gameObject);
        }
        //Gameplay.instance.isShooting = false;
    }
}