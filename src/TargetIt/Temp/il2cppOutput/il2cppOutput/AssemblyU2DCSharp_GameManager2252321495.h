#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameManager
struct GameManager_t2252321495;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameManager::currentPinSkin
	GameObject_t1756533147 * ___currentPinSkin_3;
	// UnityEngine.GameObject GameManager::currentCollectorSkin
	GameObject_t1756533147 * ___currentCollectorSkin_4;
	// UnityEngine.GameObject[] GameManager::availablePinSkins
	GameObjectU5BU5D_t3057952154* ___availablePinSkins_5;
	// UnityEngine.GameObject[] GameManager::availableCollectorSkins
	GameObjectU5BU5D_t3057952154* ___availableCollectorSkins_6;

public:
	inline static int32_t get_offset_of_currentPinSkin_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currentPinSkin_3)); }
	inline GameObject_t1756533147 * get_currentPinSkin_3() const { return ___currentPinSkin_3; }
	inline GameObject_t1756533147 ** get_address_of_currentPinSkin_3() { return &___currentPinSkin_3; }
	inline void set_currentPinSkin_3(GameObject_t1756533147 * value)
	{
		___currentPinSkin_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentPinSkin_3, value);
	}

	inline static int32_t get_offset_of_currentCollectorSkin_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currentCollectorSkin_4)); }
	inline GameObject_t1756533147 * get_currentCollectorSkin_4() const { return ___currentCollectorSkin_4; }
	inline GameObject_t1756533147 ** get_address_of_currentCollectorSkin_4() { return &___currentCollectorSkin_4; }
	inline void set_currentCollectorSkin_4(GameObject_t1756533147 * value)
	{
		___currentCollectorSkin_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentCollectorSkin_4, value);
	}

	inline static int32_t get_offset_of_availablePinSkins_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___availablePinSkins_5)); }
	inline GameObjectU5BU5D_t3057952154* get_availablePinSkins_5() const { return ___availablePinSkins_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_availablePinSkins_5() { return &___availablePinSkins_5; }
	inline void set_availablePinSkins_5(GameObjectU5BU5D_t3057952154* value)
	{
		___availablePinSkins_5 = value;
		Il2CppCodeGenWriteBarrier(&___availablePinSkins_5, value);
	}

	inline static int32_t get_offset_of_availableCollectorSkins_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___availableCollectorSkins_6)); }
	inline GameObjectU5BU5D_t3057952154* get_availableCollectorSkins_6() const { return ___availableCollectorSkins_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_availableCollectorSkins_6() { return &___availableCollectorSkins_6; }
	inline void set_availableCollectorSkins_6(GameObjectU5BU5D_t3057952154* value)
	{
		___availableCollectorSkins_6 = value;
		Il2CppCodeGenWriteBarrier(&___availableCollectorSkins_6, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2252321495 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___instance_2)); }
	inline GameManager_t2252321495 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t2252321495 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t2252321495 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
