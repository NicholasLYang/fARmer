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

// PlotButtonController
struct  PlotButtonController_t1946637431  : public MonoBehaviour_t1158329972
{
public:
	// System.String PlotButtonController::plot_info
	String_t* ___plot_info_2;
	// System.String PlotButtonController::plant_info
	String_t* ___plant_info_3;
	// System.String PlotButtonController::user_info
	String_t* ___user_info_4;
	// UnityEngine.UI.Text PlotButtonController::label2
	Text_t356221433 * ___label2_5;
	// UnityEngine.UI.Text PlotButtonController::label1
	Text_t356221433 * ___label1_6;
	// JSONObject PlotButtonController::plots_json
	JSONObject_t1971882247 * ___plots_json_7;
	// System.Int32 PlotButtonController::commID
	int32_t ___commID_8;
	// System.Boolean PlotButtonController::clicked
	bool ___clicked_9;

public:
	inline static int32_t get_offset_of_plot_info_2() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___plot_info_2)); }
	inline String_t* get_plot_info_2() const { return ___plot_info_2; }
	inline String_t** get_address_of_plot_info_2() { return &___plot_info_2; }
	inline void set_plot_info_2(String_t* value)
	{
		___plot_info_2 = value;
		Il2CppCodeGenWriteBarrier(&___plot_info_2, value);
	}

	inline static int32_t get_offset_of_plant_info_3() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___plant_info_3)); }
	inline String_t* get_plant_info_3() const { return ___plant_info_3; }
	inline String_t** get_address_of_plant_info_3() { return &___plant_info_3; }
	inline void set_plant_info_3(String_t* value)
	{
		___plant_info_3 = value;
		Il2CppCodeGenWriteBarrier(&___plant_info_3, value);
	}

	inline static int32_t get_offset_of_user_info_4() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___user_info_4)); }
	inline String_t* get_user_info_4() const { return ___user_info_4; }
	inline String_t** get_address_of_user_info_4() { return &___user_info_4; }
	inline void set_user_info_4(String_t* value)
	{
		___user_info_4 = value;
		Il2CppCodeGenWriteBarrier(&___user_info_4, value);
	}

	inline static int32_t get_offset_of_label2_5() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___label2_5)); }
	inline Text_t356221433 * get_label2_5() const { return ___label2_5; }
	inline Text_t356221433 ** get_address_of_label2_5() { return &___label2_5; }
	inline void set_label2_5(Text_t356221433 * value)
	{
		___label2_5 = value;
		Il2CppCodeGenWriteBarrier(&___label2_5, value);
	}

	inline static int32_t get_offset_of_label1_6() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___label1_6)); }
	inline Text_t356221433 * get_label1_6() const { return ___label1_6; }
	inline Text_t356221433 ** get_address_of_label1_6() { return &___label1_6; }
	inline void set_label1_6(Text_t356221433 * value)
	{
		___label1_6 = value;
		Il2CppCodeGenWriteBarrier(&___label1_6, value);
	}

	inline static int32_t get_offset_of_plots_json_7() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___plots_json_7)); }
	inline JSONObject_t1971882247 * get_plots_json_7() const { return ___plots_json_7; }
	inline JSONObject_t1971882247 ** get_address_of_plots_json_7() { return &___plots_json_7; }
	inline void set_plots_json_7(JSONObject_t1971882247 * value)
	{
		___plots_json_7 = value;
		Il2CppCodeGenWriteBarrier(&___plots_json_7, value);
	}

	inline static int32_t get_offset_of_commID_8() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___commID_8)); }
	inline int32_t get_commID_8() const { return ___commID_8; }
	inline int32_t* get_address_of_commID_8() { return &___commID_8; }
	inline void set_commID_8(int32_t value)
	{
		___commID_8 = value;
	}

	inline static int32_t get_offset_of_clicked_9() { return static_cast<int32_t>(offsetof(PlotButtonController_t1946637431, ___clicked_9)); }
	inline bool get_clicked_9() const { return ___clicked_9; }
	inline bool* get_address_of_clicked_9() { return &___clicked_9; }
	inline void set_clicked_9(bool value)
	{
		___clicked_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
