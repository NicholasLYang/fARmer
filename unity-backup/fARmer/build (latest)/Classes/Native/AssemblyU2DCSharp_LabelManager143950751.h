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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LabelManager
struct  LabelManager_t143950751  : public MonoBehaviour_t1158329972
{
public:
	// System.String LabelManager::plot_info
	String_t* ___plot_info_2;
	// System.String LabelManager::plant_info
	String_t* ___plant_info_3;
	// System.String LabelManager::user_info
	String_t* ___user_info_4;
	// UnityEngine.UI.Text LabelManager::label2
	Text_t356221433 * ___label2_5;
	// UnityEngine.UI.Text LabelManager::label1
	Text_t356221433 * ___label1_6;
	// System.Int32 LabelManager::userID
	int32_t ___userID_7;

public:
	inline static int32_t get_offset_of_plot_info_2() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___plot_info_2)); }
	inline String_t* get_plot_info_2() const { return ___plot_info_2; }
	inline String_t** get_address_of_plot_info_2() { return &___plot_info_2; }
	inline void set_plot_info_2(String_t* value)
	{
		___plot_info_2 = value;
		Il2CppCodeGenWriteBarrier(&___plot_info_2, value);
	}

	inline static int32_t get_offset_of_plant_info_3() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___plant_info_3)); }
	inline String_t* get_plant_info_3() const { return ___plant_info_3; }
	inline String_t** get_address_of_plant_info_3() { return &___plant_info_3; }
	inline void set_plant_info_3(String_t* value)
	{
		___plant_info_3 = value;
		Il2CppCodeGenWriteBarrier(&___plant_info_3, value);
	}

	inline static int32_t get_offset_of_user_info_4() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___user_info_4)); }
	inline String_t* get_user_info_4() const { return ___user_info_4; }
	inline String_t** get_address_of_user_info_4() { return &___user_info_4; }
	inline void set_user_info_4(String_t* value)
	{
		___user_info_4 = value;
		Il2CppCodeGenWriteBarrier(&___user_info_4, value);
	}

	inline static int32_t get_offset_of_label2_5() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___label2_5)); }
	inline Text_t356221433 * get_label2_5() const { return ___label2_5; }
	inline Text_t356221433 ** get_address_of_label2_5() { return &___label2_5; }
	inline void set_label2_5(Text_t356221433 * value)
	{
		___label2_5 = value;
		Il2CppCodeGenWriteBarrier(&___label2_5, value);
	}

	inline static int32_t get_offset_of_label1_6() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___label1_6)); }
	inline Text_t356221433 * get_label1_6() const { return ___label1_6; }
	inline Text_t356221433 ** get_address_of_label1_6() { return &___label1_6; }
	inline void set_label1_6(Text_t356221433 * value)
	{
		___label1_6 = value;
		Il2CppCodeGenWriteBarrier(&___label1_6, value);
	}

	inline static int32_t get_offset_of_userID_7() { return static_cast<int32_t>(offsetof(LabelManager_t143950751, ___userID_7)); }
	inline int32_t get_userID_7() const { return ___userID_7; }
	inline int32_t* get_address_of_userID_7() { return &___userID_7; }
	inline void set_userID_7(int32_t value)
	{
		___userID_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
