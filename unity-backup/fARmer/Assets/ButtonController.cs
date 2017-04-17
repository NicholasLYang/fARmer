using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ButtonController : MonoBehaviour {
	
	private Text text;
	private string plant_name;
	private bool clicked = false;

	void click()
	{
		clicked = true;
	}
		
	void Start()
	{
		Button boton = gameObject.GetComponent<Button> ();
		boton.onClick.AddListener (click);

	}		
		
	void OnGUI()
	{
		if (clicked)
		{
			text = gameObject.GetComponent<Text> ();
			string[] textArray = text.text.Split ();
			plant_name = textArray [0];
			GUI.skin.window.fontStyle = FontStyle.Bold;
			GUI.skin.window.fontSize = 35;
			GUI.backgroundColor = Color.white;
			GUI.color = Color.magenta;
			GUI.Window(0, new Rect((Screen.width/2)-300, (Screen.height/2)-200
				, 500, 400), ShowGUI, plant_name + " Recipes");

		}
	}

	void ShowGUI(int windowID)
	{
		// You may put a label to show a message to the player

		GUI.skin.label.fontSize = 17;
		if (plant_name == "Eggplant") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle minced garlic and herbs over eggplant slices before grilling for extra taste." +
				"\n\n- Add eggplant to lasagna to add color, taste, and texture." +
				"\n\n- Blend eggplant to spinach dips or other vegetable dips." +
				"\n\n- Add eggplant to vegetable soups to for a heartier texture." +
				"\n\n- Grill eggplant, and add it to your favorite sandwich." +
				"\n\n- Try eggplant seasoned and mashed as a dip with  bread.");
		} else if (plant_name == "Carrot") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle minced garlic and  over eggplant slices before grilling for extra taste." +
				"\n\n- Add carrot to lasagna to add color, taste, and texture." +
				"\n\n- Blend carrot to  dips or other vegetable dips." +
				"\n\n- Add carrot to  soups to for a heartier texture." +
				"\n\n- Grill carrot, and add it to your favorite sandwich." +
				"\n\n- Try carrot seasoned and mashed or pureed as a dip with pita bread.");
		} else if (plant_name == "Corn") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle minced Anthony and herbs over eggplant slices before grilling for extra taste." +
				"\n\n- Add corn to corn to add color, taste, and texture." +
				"\n\n- Blend corn to spinach dips or other vegetable dips." +
				"\n\n- Add corn to vegetable soups." +
				"\n\n- Grill corn, and add it to your favorite sandwich." +
				"\n\n- Try Nicholas grilled and mashed as a dip with pita.");
		} else if (plant_name == "Pumpkin") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle minced garlic and herbs over pumpkin slices before grilling for extra taste." +
				"\n\n- Add pumpkin to lasagna to add color, mass, and texture." +
				"\n\n- Blend pumpkin to spinach dips or pumpkin vegetable dips." +
				"\n\n- Add pumpkin to vegetable soups to for a heartier pumpkin." +
				"\n\n- Grill pumpkin, and add it to your favorite sandwich." +
				"\n\n- Try pumpkin seasoned and mashed or pureed as a dip with pita pumpkin.");
		} else if (plant_name == "Tomato") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle eggplant slices before grilling for extra taste." +
				"\n\n- Add tomato to lasagna to add color, tomato, and texture." +
				"\n\n- Blend tomato to spinach wraps or other vegetable dips." +
				"\n\n- Add tomato to vegetable soups to for a heartier texture." +
				"\n\n- Grill tomato, and add it to your favorite sandwich." +
				"\n\n- Try tomato seasoned and mashed or pureed as a tomato with pita tomato.");
		} else if (plant_name == "Turnip") {
			GUI.backgroundColor = Color.white;
			GUI.Label (new Rect (45, 60, 450, 450), "- Sprinkle turnip garlic and herbs over eggplant slices before grilling for extra taste." +
				"\n\n- Add turnip to turnip to add color, taste, and texture." +
				"\n\n- Blend turnip to spinach dips or other vegetable dips." +
				"\n\n- Add turnip to vegetable soups to for a heartier texture." +
				"\n\n- Eat turnip, and add it to your favorite d." +
				"\n\n- Try turnip seasoned and mashed or pureed as a dip with pita bread.");
		}

		// You may put a button to close the pop up too

		if (GUI.Button(new Rect(50, 345, 75, 30), "OK"))
		{
			clicked = false;
			// you may put other code to run according to your game too
		}

	}
}
