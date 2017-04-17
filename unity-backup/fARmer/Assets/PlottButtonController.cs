using System.Collections;
using System.IO;
using System.Net;
using UnityEngine.UI;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif


public class PlottButtonController : MonoBehaviour {

	public string plot_info;
	public string plant_info;
	public string user_info;
	public Text label2, label1;
	private bool clicked = false;
	public JSONObject plots_json;
	void click()
	{
		clicked = true;
	}


	private int userID;

	[System.Serializable]
	public class Plant {
		public string name;
		public int expected_yield;
	}

	[System.Serializable]
	public class User {
		public string name;
	}

	void Start() {

		userID = PlayerPrefs.GetInt ("fID.txt");
		Debug.Log (userID);

		string plots_url = "http://arfarmer.org/plots_json";

		var plots_string = new WebClient ().DownloadString (plots_url);
		plots_json = new JSONObject (plots_string);
		Debug.Log (plots_json.list.Count);

		Button boton = gameObject.GetComponent<Button> ();
		boton.onClick.AddListener (click);
	}
	void OnGUI() {
		if (clicked) {
			int upTo = 0;
			for (int i = 0; i < plots_json.list.Count; i++) {
				Debug.Log (plots_json [i] ["user_id"]);
				if ("" + userID == "" + plots_json [i] ["user_id"]) {
					label1 = GameObject.Find ("Text" + (2 * upTo)).GetComponent<Text> ();
					label2 = GameObject.Find ("Text" + (2 * upTo + 1)).GetComponent<Text> ();

					var plant_id = plots_json [i] ["plant_id"];
					var user_id = plots_json [i] ["user_id"];

					string plant_url = "http://arfarmer.org/plant_json/" + plant_id;
					string user_url = "http://arfarmer.org/user_json/" + user_id;

					//plant data
					var plant_json = new WebClient ().DownloadString (plant_url);
					var plant_name = JsonUtility.FromJson<Plant> (plant_json).name;
					var plant_yield = JsonUtility.FromJson<Plant> (plant_json).expected_yield;

					//user data
					var user_json = new WebClient ().DownloadString (user_url);
					var user_name = JsonUtility.FromJson<Plant> (user_json).name;

					label1.text = plant_name + " - " + user_name;
					label2.text = "ExpYield: " + plant_yield;
					label1.color = Color.green;
					label2.color = Color.green;


					#if UNITY_EDITOR

					GameObject parent = GameObject.Find ("ImageTarget");
					//plot 1
					if (upTo == 0) {
						for (int a = -3; a >= -18; a -= 3) {
							for (int b = -3; b >= -18; b -= 3) {
								Object prefab = AssetDatabase.LoadAssetAtPath ("Assets/Resources/Prefabs/Standard/" + plant_name + "_Plant.prefab", typeof(GameObject));
								GameObject crop = Instantiate (prefab, Vector3.zero, Quaternion.identity) as GameObject;
								crop.transform.position = new Vector3 (a, 0, b);
								crop.transform.parent = parent.transform;
							}
						}
						//plot 2
					} else if (upTo == 1) {
						for (int a = -3; a >= -18; a -= 3) {
							for (int b = 3; b <= 18; b += 3) {
								Object prefab = AssetDatabase.LoadAssetAtPath ("Assets/Resources/Prefabs/Standard/" + plant_name + "_Plant.prefab", typeof(GameObject));
								GameObject crop = Instantiate (prefab, Vector3.zero, Quaternion.identity) as GameObject;
								crop.transform.position = new Vector3 (a, 0, b);
								crop.transform.parent = parent.transform;
							}
						}
						//plot 3
					} else if (upTo == 2) {
						for (int a = 3; a <= 18; a += 3) {
							for (int b = 3; b <= 18; b += 3) {
								Object prefab = AssetDatabase.LoadAssetAtPath ("Assets/Resources/Prefabs/Standard/" + plant_name + "_Plant.prefab", typeof(GameObject));
								GameObject crop = Instantiate (prefab, Vector3.zero, Quaternion.identity) as GameObject;
								crop.transform.position = new Vector3 (a, 0, b);
								crop.transform.parent = parent.transform;
							}
						}
						//plot 4
					} else if (upTo == 3) {
						for (int a = 3; a <= 18; a += 3) {
							for (int b = -3; b >= -18; b -= 3) {
								Object prefab = AssetDatabase.LoadAssetAtPath ("Assets/Resources/Prefabs/Standard/" + plant_name + "_Plant.prefab", typeof(GameObject));
								GameObject crop = Instantiate (prefab, Vector3.zero, Quaternion.identity) as GameObject;
								crop.transform.position = new Vector3 (a, 0, b);
								crop.transform.parent = parent.transform;
							}
						}
					}
					#endif
					upTo++;
				}
			}
		}
	}
}
