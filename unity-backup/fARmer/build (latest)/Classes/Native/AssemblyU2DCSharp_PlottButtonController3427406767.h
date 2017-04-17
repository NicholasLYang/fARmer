#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// JSONObject
struct JSONObject_t1971882247;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlottButtonController
struct  PlottButtonController_t3427406767  : public MonoBehaviour_t1158329972
{
public:
	// System.String PlottButtonController::plot_info
	String_t* ___plot_info_2;
	// System.String PlottButtonController::plant_info
	String_t* ___plant_info_3;
	// System.String PlottButtonController::user_info
	String_t* ___user_info_4;
	// UnityEngine.UI.Text PlottButtonController::label2
	Text_t356221433 * ___label2_5;
	// UnityEngine.UI.Text PlottButtonController::label1
	Text_t356221433 * ___label1_6;
	// System.Boolean PlottButtonController::clicked
	bool ___clicked_7;
	// JSONObject PlottButtonController::plots_json
	JSONObject_t1971882247 * ___plots_json_8;
	// System.Int32 PlottButtonController::userID
	int32_t ___userID_9;

public:
	inline static int32_t get_offset_of_plot_info_2() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___plot_info_2)); }
	inline String_t* get_plot_info_2() const { return ___plot_info_2; }
	inline String_t** get_address_of_plot_info_2() { return &___plot_info_2; }
	inline void set_plot_info_2(String_t* value)
	{
		___plot_info_2 = value;
		Il2CppCodeGenWriteBarrier(&___plot_info_2, value);
	}

	inline static int32_t get_offset_of_plant_info_3() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___plant_info_3)); }
	inline String_t* get_plant_info_3() const { return ___plant_info_3; }
	inline String_t** get_address_of_plant_info_3() { return &___plant_info_3; }
	inline void set_plant_info_3(String_t* value)
	{
		___plant_info_3 = value;
		Il2CppCodeGenWriteBarrier(&___plant_info_3, value);
	}

	inline static int32_t get_offset_of_user_info_4() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___user_info_4)); }
	inline String_t* get_user_info_4() const { return ___user_info_4; }
	inline String_t** get_address_of_user_info_4() { return &___user_info_4; }
	inline void set_user_info_4(String_t* value)
	{
		___user_info_4 = value;
		Il2CppCodeGenWriteBarrier(&___user_info_4, value);
	}

	inline static int32_t get_offset_of_label2_5() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___label2_5)); }
	inline Text_t356221433 * get_label2_5() const { return ___label2_5; }
	inline Text_t356221433 ** get_address_of_label2_5() { return &___label2_5; }
	inline void set_label2_5(Text_t356221433 * value)
	{
		___label2_5 = value;
		Il2CppCodeGenWriteBarrier(&___label2_5, value);
	}

	inline static int32_t get_offset_of_label1_6() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___label1_6)); }
	inline Text_t356221433 * get_label1_6() const { return ___label1_6; }
	inline Text_t356221433 ** get_address_of_label1_6() { return &___label1_6; }
	inline void set_label1_6(Text_t356221433 * value)
	{
		___label1_6 = value;
		Il2CppCodeGenWriteBarrier(&___label1_6, value);
	}

	inline static int32_t get_offset_of_clicked_7() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___clicked_7)); }
	inline bool get_clicked_7() const { return ___clicked_7; }
	inline bool* get_address_of_clicked_7() { return &___clicked_7; }
	inline void set_clicked_7(bool value)
	{
		___clicked_7 = value;
	}

	inline static int32_t get_offset_of_plots_json_8() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___plots_json_8)); }
	inline JSONObject_t1971882247 * get_plots_json_8() const { return ___plots_json_8; }
	inline JSONObject_t1971882247 ** get_address_of_plots_json_8() { return &___plots_json_8; }
	inline void set_plots_json_8(JSONObject_t1971882247 * value)
	{
		___plots_json_8 = value;
		Il2CppCodeGenWriteBarrier(&___plots_json_8, value);
	}

	inline static int32_t get_offset_of_userID_9() { return static_cast<int32_t>(offsetof(PlottButtonController_t3427406767, ___userID_9)); }
	inline int32_t get_userID_9() const { return ___userID_9; }
	inline int32_t* get_address_of_userID_9() { return &___userID_9; }
	inline void set_userID_9(int32_t value)
	{
		___userID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
