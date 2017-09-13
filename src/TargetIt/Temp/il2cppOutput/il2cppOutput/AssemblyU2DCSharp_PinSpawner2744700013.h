#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PinSpawner
struct PinSpawner_t2744700013;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinSpawner
struct  PinSpawner_t2744700013  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PinSpawner::pinPrefab
	GameObject_t1756533147 * ___pinPrefab_3;
	// System.Single PinSpawner::startingY
	float ___startingY_4;

public:
	inline static int32_t get_offset_of_pinPrefab_3() { return static_cast<int32_t>(offsetof(PinSpawner_t2744700013, ___pinPrefab_3)); }
	inline GameObject_t1756533147 * get_pinPrefab_3() const { return ___pinPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_pinPrefab_3() { return &___pinPrefab_3; }
	inline void set_pinPrefab_3(GameObject_t1756533147 * value)
	{
		___pinPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___pinPrefab_3, value);
	}

	inline static int32_t get_offset_of_startingY_4() { return static_cast<int32_t>(offsetof(PinSpawner_t2744700013, ___startingY_4)); }
	inline float get_startingY_4() const { return ___startingY_4; }
	inline float* get_address_of_startingY_4() { return &___startingY_4; }
	inline void set_startingY_4(float value)
	{
		___startingY_4 = value;
	}
};

struct PinSpawner_t2744700013_StaticFields
{
public:
	// PinSpawner PinSpawner::instance
	PinSpawner_t2744700013 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PinSpawner_t2744700013_StaticFields, ___instance_2)); }
	inline PinSpawner_t2744700013 * get_instance_2() const { return ___instance_2; }
	inline PinSpawner_t2744700013 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PinSpawner_t2744700013 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
