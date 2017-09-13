#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameplayController
struct GameplayController_t3794343528;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameplayController
struct  GameplayController_t3794343528  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> GameplayController::availableColors
	List_1_t1389513207 * ___availableColors_3;
	// System.Collections.Generic.List`1<UnityEngine.Color> GameplayController::usedColors
	List_1_t1389513207 * ___usedColors_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameplayController::currentCollectors
	List_1_t1125654279 * ___currentCollectors_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameplayController::currentPins
	List_1_t1125654279 * ___currentPins_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GameplayController::currentlyDeletedCollectors
	List_1_t1612828712 * ___currentlyDeletedCollectors_7;
	// System.Boolean GameplayController::isShooting
	bool ___isShooting_8;
	// System.Boolean GameplayController::collectorIsDisappearing
	bool ___collectorIsDisappearing_9;
	// System.Boolean GameplayController::losing
	bool ___losing_10;
	// System.Int32 GameplayController::score
	int32_t ___score_11;
	// UnityEngine.UI.Text GameplayController::scoreField
	Text_t356221433 * ___scoreField_12;
	// UnityEngine.UI.Button GameplayController::musicBtn
	Button_t2872111280 * ___musicBtn_13;
	// UnityEngine.Sprite[] GameplayController::musicIcons
	SpriteU5BU5D_t3359083662* ___musicIcons_14;
	// System.Single GameplayController::speedOfDiedController
	float ___speedOfDiedController_15;

public:
	inline static int32_t get_offset_of_availableColors_3() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___availableColors_3)); }
	inline List_1_t1389513207 * get_availableColors_3() const { return ___availableColors_3; }
	inline List_1_t1389513207 ** get_address_of_availableColors_3() { return &___availableColors_3; }
	inline void set_availableColors_3(List_1_t1389513207 * value)
	{
		___availableColors_3 = value;
		Il2CppCodeGenWriteBarrier(&___availableColors_3, value);
	}

	inline static int32_t get_offset_of_usedColors_4() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___usedColors_4)); }
	inline List_1_t1389513207 * get_usedColors_4() const { return ___usedColors_4; }
	inline List_1_t1389513207 ** get_address_of_usedColors_4() { return &___usedColors_4; }
	inline void set_usedColors_4(List_1_t1389513207 * value)
	{
		___usedColors_4 = value;
		Il2CppCodeGenWriteBarrier(&___usedColors_4, value);
	}

	inline static int32_t get_offset_of_currentCollectors_5() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___currentCollectors_5)); }
	inline List_1_t1125654279 * get_currentCollectors_5() const { return ___currentCollectors_5; }
	inline List_1_t1125654279 ** get_address_of_currentCollectors_5() { return &___currentCollectors_5; }
	inline void set_currentCollectors_5(List_1_t1125654279 * value)
	{
		___currentCollectors_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentCollectors_5, value);
	}

	inline static int32_t get_offset_of_currentPins_6() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___currentPins_6)); }
	inline List_1_t1125654279 * get_currentPins_6() const { return ___currentPins_6; }
	inline List_1_t1125654279 ** get_address_of_currentPins_6() { return &___currentPins_6; }
	inline void set_currentPins_6(List_1_t1125654279 * value)
	{
		___currentPins_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentPins_6, value);
	}

	inline static int32_t get_offset_of_currentlyDeletedCollectors_7() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___currentlyDeletedCollectors_7)); }
	inline List_1_t1612828712 * get_currentlyDeletedCollectors_7() const { return ___currentlyDeletedCollectors_7; }
	inline List_1_t1612828712 ** get_address_of_currentlyDeletedCollectors_7() { return &___currentlyDeletedCollectors_7; }
	inline void set_currentlyDeletedCollectors_7(List_1_t1612828712 * value)
	{
		___currentlyDeletedCollectors_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentlyDeletedCollectors_7, value);
	}

	inline static int32_t get_offset_of_isShooting_8() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___isShooting_8)); }
	inline bool get_isShooting_8() const { return ___isShooting_8; }
	inline bool* get_address_of_isShooting_8() { return &___isShooting_8; }
	inline void set_isShooting_8(bool value)
	{
		___isShooting_8 = value;
	}

	inline static int32_t get_offset_of_collectorIsDisappearing_9() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___collectorIsDisappearing_9)); }
	inline bool get_collectorIsDisappearing_9() const { return ___collectorIsDisappearing_9; }
	inline bool* get_address_of_collectorIsDisappearing_9() { return &___collectorIsDisappearing_9; }
	inline void set_collectorIsDisappearing_9(bool value)
	{
		___collectorIsDisappearing_9 = value;
	}

	inline static int32_t get_offset_of_losing_10() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___losing_10)); }
	inline bool get_losing_10() const { return ___losing_10; }
	inline bool* get_address_of_losing_10() { return &___losing_10; }
	inline void set_losing_10(bool value)
	{
		___losing_10 = value;
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_scoreField_12() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___scoreField_12)); }
	inline Text_t356221433 * get_scoreField_12() const { return ___scoreField_12; }
	inline Text_t356221433 ** get_address_of_scoreField_12() { return &___scoreField_12; }
	inline void set_scoreField_12(Text_t356221433 * value)
	{
		___scoreField_12 = value;
		Il2CppCodeGenWriteBarrier(&___scoreField_12, value);
	}

	inline static int32_t get_offset_of_musicBtn_13() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___musicBtn_13)); }
	inline Button_t2872111280 * get_musicBtn_13() const { return ___musicBtn_13; }
	inline Button_t2872111280 ** get_address_of_musicBtn_13() { return &___musicBtn_13; }
	inline void set_musicBtn_13(Button_t2872111280 * value)
	{
		___musicBtn_13 = value;
		Il2CppCodeGenWriteBarrier(&___musicBtn_13, value);
	}

	inline static int32_t get_offset_of_musicIcons_14() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___musicIcons_14)); }
	inline SpriteU5BU5D_t3359083662* get_musicIcons_14() const { return ___musicIcons_14; }
	inline SpriteU5BU5D_t3359083662** get_address_of_musicIcons_14() { return &___musicIcons_14; }
	inline void set_musicIcons_14(SpriteU5BU5D_t3359083662* value)
	{
		___musicIcons_14 = value;
		Il2CppCodeGenWriteBarrier(&___musicIcons_14, value);
	}

	inline static int32_t get_offset_of_speedOfDiedController_15() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528, ___speedOfDiedController_15)); }
	inline float get_speedOfDiedController_15() const { return ___speedOfDiedController_15; }
	inline float* get_address_of_speedOfDiedController_15() { return &___speedOfDiedController_15; }
	inline void set_speedOfDiedController_15(float value)
	{
		___speedOfDiedController_15 = value;
	}
};

struct GameplayController_t3794343528_StaticFields
{
public:
	// GameplayController GameplayController::instance
	GameplayController_t3794343528 * ___instance_2;
	// System.Action`1<System.Boolean> GameplayController::<>f__am$cache0
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache0_16;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528_StaticFields, ___instance_2)); }
	inline GameplayController_t3794343528 * get_instance_2() const { return ___instance_2; }
	inline GameplayController_t3794343528 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameplayController_t3794343528 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(GameplayController_t3794343528_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
