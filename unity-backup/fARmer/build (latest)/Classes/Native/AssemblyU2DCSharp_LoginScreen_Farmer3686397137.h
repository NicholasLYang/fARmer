#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginScreen/Farmer
struct  Farmer_t3686397137  : public Il2CppObject
{
public:
	// System.String LoginScreen/Farmer::name
	String_t* ___name_0;
	// System.Int32 LoginScreen/Farmer::user_id
	int32_t ___user_id_1;
	// System.Int32 LoginScreen/Farmer::community_id
	int32_t ___community_id_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Farmer_t3686397137, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_user_id_1() { return static_cast<int32_t>(offsetof(Farmer_t3686397137, ___user_id_1)); }
	inline int32_t get_user_id_1() const { return ___user_id_1; }
	inline int32_t* get_address_of_user_id_1() { return &___user_id_1; }
	inline void set_user_id_1(int32_t value)
	{
		___user_id_1 = value;
	}

	inline static int32_t get_offset_of_community_id_2() { return static_cast<int32_t>(offsetof(Farmer_t3686397137, ___community_id_2)); }
	inline int32_t get_community_id_2() const { return ___community_id_2; }
	inline int32_t* get_address_of_community_id_2() { return &___community_id_2; }
	inline void set_community_id_2(int32_t value)
	{
		___community_id_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
