#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t1741881492  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ButtonController::text
	Text_t356221433 * ___text_2;
	// System.String ButtonController::plant_name
	String_t* ___plant_name_3;
	// System.Boolean ButtonController::clicked
	bool ___clicked_4;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_plant_name_3() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___plant_name_3)); }
	inline String_t* get_plant_name_3() const { return ___plant_name_3; }
	inline String_t** get_address_of_plant_name_3() { return &___plant_name_3; }
	inline void set_plant_name_3(String_t* value)
	{
		___plant_name_3 = value;
		Il2CppCodeGenWriteBarrier(&___plant_name_3, value);
	}

	inline static int32_t get_offset_of_clicked_4() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___clicked_4)); }
	inline bool get_clicked_4() const { return ___clicked_4; }
	inline bool* get_address_of_clicked_4() { return &___clicked_4; }
	inline void set_clicked_4(bool value)
	{
		___clicked_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
