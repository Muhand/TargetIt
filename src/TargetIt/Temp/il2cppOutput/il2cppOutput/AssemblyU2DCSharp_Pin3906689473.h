#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pin
struct  Pin_t3906689473  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Pin::spear
	GameObject_t1756533147 * ___spear_2;
	// UnityEngine.Rigidbody2D Pin::rb
	Rigidbody2D_t502193897 * ___rb_3;
	// System.Single Pin::speed
	float ___speed_4;
	// System.Boolean Pin::isMoving
	bool ___isMoving_5;
	// UnityEngine.Vector3 Pin::target
	Vector3_t2243707580  ___target_6;
	// System.Single Pin::lastSqrMag
	float ___lastSqrMag_7;
	// UnityEngine.Vector2 Pin::targetPos
	Vector2_t2243707579  ___targetPos_8;
	// System.Boolean Pin::isPinned
	bool ___isPinned_9;

public:
	inline static int32_t get_offset_of_spear_2() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___spear_2)); }
	inline GameObject_t1756533147 * get_spear_2() const { return ___spear_2; }
	inline GameObject_t1756533147 ** get_address_of_spear_2() { return &___spear_2; }
	inline void set_spear_2(GameObject_t1756533147 * value)
	{
		___spear_2 = value;
		Il2CppCodeGenWriteBarrier(&___spear_2, value);
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___rb_3)); }
	inline Rigidbody2D_t502193897 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t502193897 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_isMoving_5() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___isMoving_5)); }
	inline bool get_isMoving_5() const { return ___isMoving_5; }
	inline bool* get_address_of_isMoving_5() { return &___isMoving_5; }
	inline void set_isMoving_5(bool value)
	{
		___isMoving_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___target_6)); }
	inline Vector3_t2243707580  get_target_6() const { return ___target_6; }
	inline Vector3_t2243707580 * get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(Vector3_t2243707580  value)
	{
		___target_6 = value;
	}

	inline static int32_t get_offset_of_lastSqrMag_7() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___lastSqrMag_7)); }
	inline float get_lastSqrMag_7() const { return ___lastSqrMag_7; }
	inline float* get_address_of_lastSqrMag_7() { return &___lastSqrMag_7; }
	inline void set_lastSqrMag_7(float value)
	{
		___lastSqrMag_7 = value;
	}

	inline static int32_t get_offset_of_targetPos_8() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___targetPos_8)); }
	inline Vector2_t2243707579  get_targetPos_8() const { return ___targetPos_8; }
	inline Vector2_t2243707579 * get_address_of_targetPos_8() { return &___targetPos_8; }
	inline void set_targetPos_8(Vector2_t2243707579  value)
	{
		___targetPos_8 = value;
	}

	inline static int32_t get_offset_of_isPinned_9() { return static_cast<int32_t>(offsetof(Pin_t3906689473, ___isPinned_9)); }
	inline bool get_isPinned_9() const { return ___isPinned_9; }
	inline bool* get_address_of_isPinned_9() { return &___isPinned_9; }
	inline void set_isPinned_9(bool value)
	{
		___isPinned_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
