#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collector
struct  Collector_t237117861  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Collector::rb
	Rigidbody2D_t502193897 * ___rb_2;
	// System.Single Collector::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single Collector::disappearSpeed
	float ___disappearSpeed_4;
	// System.Boolean Collector::rotate
	bool ___rotate_5;
	// System.Boolean Collector::isDisappearing
	bool ___isDisappearing_6;
	// System.Boolean Collector::isGameOverDispaly
	bool ___isGameOverDispaly_7;
	// UnityEngine.SpriteRenderer Collector::Renderer
	SpriteRenderer_t1209076198 * ___Renderer_8;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___rb_2)); }
	inline Rigidbody2D_t502193897 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody2D_t502193897 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_disappearSpeed_4() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___disappearSpeed_4)); }
	inline float get_disappearSpeed_4() const { return ___disappearSpeed_4; }
	inline float* get_address_of_disappearSpeed_4() { return &___disappearSpeed_4; }
	inline void set_disappearSpeed_4(float value)
	{
		___disappearSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotate_5() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___rotate_5)); }
	inline bool get_rotate_5() const { return ___rotate_5; }
	inline bool* get_address_of_rotate_5() { return &___rotate_5; }
	inline void set_rotate_5(bool value)
	{
		___rotate_5 = value;
	}

	inline static int32_t get_offset_of_isDisappearing_6() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___isDisappearing_6)); }
	inline bool get_isDisappearing_6() const { return ___isDisappearing_6; }
	inline bool* get_address_of_isDisappearing_6() { return &___isDisappearing_6; }
	inline void set_isDisappearing_6(bool value)
	{
		___isDisappearing_6 = value;
	}

	inline static int32_t get_offset_of_isGameOverDispaly_7() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___isGameOverDispaly_7)); }
	inline bool get_isGameOverDispaly_7() const { return ___isGameOverDispaly_7; }
	inline bool* get_address_of_isGameOverDispaly_7() { return &___isGameOverDispaly_7; }
	inline void set_isGameOverDispaly_7(bool value)
	{
		___isGameOverDispaly_7 = value;
	}

	inline static int32_t get_offset_of_Renderer_8() { return static_cast<int32_t>(offsetof(Collector_t237117861, ___Renderer_8)); }
	inline SpriteRenderer_t1209076198 * get_Renderer_8() const { return ___Renderer_8; }
	inline SpriteRenderer_t1209076198 ** get_address_of_Renderer_8() { return &___Renderer_8; }
	inline void set_Renderer_8(SpriteRenderer_t1209076198 * value)
	{
		___Renderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
