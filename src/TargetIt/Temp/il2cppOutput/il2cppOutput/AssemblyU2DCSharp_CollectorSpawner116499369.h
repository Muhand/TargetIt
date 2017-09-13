#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CollectorSpawner
struct CollectorSpawner_t116499369;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollectorSpawner
struct  CollectorSpawner_t116499369  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CollectorSpawner::CollectorPrefab
	GameObject_t1756533147 * ___CollectorPrefab_3;
	// System.Single CollectorSpawner::currentSpeedMultiplier
	float ___currentSpeedMultiplier_4;

public:
	inline static int32_t get_offset_of_CollectorPrefab_3() { return static_cast<int32_t>(offsetof(CollectorSpawner_t116499369, ___CollectorPrefab_3)); }
	inline GameObject_t1756533147 * get_CollectorPrefab_3() const { return ___CollectorPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_CollectorPrefab_3() { return &___CollectorPrefab_3; }
	inline void set_CollectorPrefab_3(GameObject_t1756533147 * value)
	{
		___CollectorPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectorPrefab_3, value);
	}

	inline static int32_t get_offset_of_currentSpeedMultiplier_4() { return static_cast<int32_t>(offsetof(CollectorSpawner_t116499369, ___currentSpeedMultiplier_4)); }
	inline float get_currentSpeedMultiplier_4() const { return ___currentSpeedMultiplier_4; }
	inline float* get_address_of_currentSpeedMultiplier_4() { return &___currentSpeedMultiplier_4; }
	inline void set_currentSpeedMultiplier_4(float value)
	{
		___currentSpeedMultiplier_4 = value;
	}
};

struct CollectorSpawner_t116499369_StaticFields
{
public:
	// CollectorSpawner CollectorSpawner::instance
	CollectorSpawner_t116499369 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CollectorSpawner_t116499369_StaticFields, ___instance_2)); }
	inline CollectorSpawner_t116499369 * get_instance_2() const { return ___instance_2; }
	inline CollectorSpawner_t116499369 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CollectorSpawner_t116499369 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
