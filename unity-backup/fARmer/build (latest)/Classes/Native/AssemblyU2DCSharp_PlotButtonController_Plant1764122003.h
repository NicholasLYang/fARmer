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

// PlotButtonController/Plant
struct  Plant_t1764122003  : public Il2CppObject
{
public:
	// System.String PlotButtonController/Plant::name
	String_t* ___name_0;
	// System.Int32 PlotButtonController/Plant::expected_yield
	int32_t ___expected_yield_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Plant_t1764122003, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_expected_yield_1() { return static_cast<int32_t>(offsetof(Plant_t1764122003, ___expected_yield_1)); }
	inline int32_t get_expected_yield_1() const { return ___expected_yield_1; }
	inline int32_t* get_address_of_expected_yield_1() { return &___expected_yield_1; }
	inline void set_expected_yield_1(int32_t value)
	{
		___expected_yield_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
