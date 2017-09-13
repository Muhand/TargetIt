#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameoverController
struct  GameoverController_t118478568  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource GameoverController::ClickAudioSource
	AudioSource_t1135106623 * ___ClickAudioSource_2;
	// UnityEngine.AudioClip GameoverController::ClickClip
	AudioClip_t1932558630 * ___ClickClip_3;
	// UnityEngine.UI.Text GameoverController::CurrentScoreTextField
	Text_t356221433 * ___CurrentScoreTextField_4;
	// UnityEngine.UI.Text GameoverController::HighestScoreTextField
	Text_t356221433 * ___HighestScoreTextField_5;

public:
	inline static int32_t get_offset_of_ClickAudioSource_2() { return static_cast<int32_t>(offsetof(GameoverController_t118478568, ___ClickAudioSource_2)); }
	inline AudioSource_t1135106623 * get_ClickAudioSource_2() const { return ___ClickAudioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_ClickAudioSource_2() { return &___ClickAudioSource_2; }
	inline void set_ClickAudioSource_2(AudioSource_t1135106623 * value)
	{
		___ClickAudioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___ClickAudioSource_2, value);
	}

	inline static int32_t get_offset_of_ClickClip_3() { return static_cast<int32_t>(offsetof(GameoverController_t118478568, ___ClickClip_3)); }
	inline AudioClip_t1932558630 * get_ClickClip_3() const { return ___ClickClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_ClickClip_3() { return &___ClickClip_3; }
	inline void set_ClickClip_3(AudioClip_t1932558630 * value)
	{
		___ClickClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___ClickClip_3, value);
	}

	inline static int32_t get_offset_of_CurrentScoreTextField_4() { return static_cast<int32_t>(offsetof(GameoverController_t118478568, ___CurrentScoreTextField_4)); }
	inline Text_t356221433 * get_CurrentScoreTextField_4() const { return ___CurrentScoreTextField_4; }
	inline Text_t356221433 ** get_address_of_CurrentScoreTextField_4() { return &___CurrentScoreTextField_4; }
	inline void set_CurrentScoreTextField_4(Text_t356221433 * value)
	{
		___CurrentScoreTextField_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentScoreTextField_4, value);
	}

	inline static int32_t get_offset_of_HighestScoreTextField_5() { return static_cast<int32_t>(offsetof(GameoverController_t118478568, ___HighestScoreTextField_5)); }
	inline Text_t356221433 * get_HighestScoreTextField_5() const { return ___HighestScoreTextField_5; }
	inline Text_t356221433 ** get_address_of_HighestScoreTextField_5() { return &___HighestScoreTextField_5; }
	inline void set_HighestScoreTextField_5(Text_t356221433 * value)
	{
		___HighestScoreTextField_5 = value;
		Il2CppCodeGenWriteBarrier(&___HighestScoreTextField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
