#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "EasyMovement_U3CModuleU3E3783534214.h"
#include "EasyMovement_EasyMovement_Move2DObject2181059768.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// EasyMovement.Move2DObject
struct Move2DObject_t2181059768;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
extern Il2CppClass* Move2DObject_t2181059768_il2cpp_TypeInfo_var;
extern const uint32_t Move2DObject_translateOverLine_m3171216924_MetadataUsageId;
extern const uint32_t Move2DObject_translateOverLine2_m1933090694_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Move2DObject_getDistance_m3894933016_MetadataUsageId;




// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_MoveTowards_m1358638081 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C"  float Time_get_fixedDeltaTime_m2734072926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyMovement.Move2DObject::translateOverLine(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void Move2DObject_translateOverLine_m3171216924 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___objectToTransform0, Vector3_t2243707580  ___direction1, float ___step2, float ___speed3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Move2DObject_translateOverLine_m3171216924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t2243707580  L_0 = ___direction1;
		float L_1 = L_0.get_x_1();
		GameObject_t1756533147 * L_2 = ___objectToTransform0;
		NullCheck(L_2);
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_1();
		if ((((float)((float)((float)L_1-(float)L_5))) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		Vector3_t2243707580  L_6 = ___direction1;
		float L_7 = L_6.get_y_2();
		GameObject_t1756533147 * L_8 = ___objectToTransform0;
		NullCheck(L_8);
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_2();
		if ((((float)((float)((float)L_7-(float)L_11))) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		GameObject_t1756533147 * L_12 = ___objectToTransform0;
		NullCheck(L_12);
		Transform_t3275118058 * L_13 = GameObject_get_transform_m909382139(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t2243707580  L_14 = Transform_get_position_m1104419803(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_2();
		Vector3_t2243707580  L_16 = ___direction1;
		float L_17 = L_16.get_y_2();
		GameObject_t1756533147 * L_18 = ___objectToTransform0;
		NullCheck(L_18);
		Transform_t3275118058 * L_19 = GameObject_get_transform_m909382139(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_1();
		Vector3_t2243707580  L_22 = ___direction1;
		float L_23 = L_22.get_x_1();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_slope_2(((float)((float)((float)((float)L_15-(float)L_17))/(float)((float)((float)L_21-(float)L_23)))));
		GameObject_t1756533147 * L_24 = ___objectToTransform0;
		NullCheck(L_24);
		Transform_t3275118058 * L_25 = GameObject_get_transform_m909382139(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t2243707580  L_26 = Transform_get_position_m1104419803(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_2();
		GameObject_t1756533147 * L_28 = ___objectToTransform0;
		NullCheck(L_28);
		Transform_t3275118058 * L_29 = GameObject_get_transform_m909382139(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t2243707580  L_30 = Transform_get_position_m1104419803(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_1();
		float L_32 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_slope_2();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_yintercept_3(((float)((float)L_27-(float)((float)((float)L_31*(float)L_32)))));
		Vector3_t2243707580  L_33 = ___direction1;
		float L_34 = L_33.get_x_1();
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		GameObject_t1756533147 * L_35 = ___objectToTransform0;
		NullCheck(L_35);
		Transform_t3275118058 * L_36 = GameObject_get_transform_m909382139(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t2243707580  L_37 = Transform_get_position_m1104419803(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_1();
		float L_39 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_38+(float)L_39)));
		goto IL_00df;
	}

IL_00c8:
	{
		GameObject_t1756533147 * L_40 = ___objectToTransform0;
		NullCheck(L_40);
		Transform_t3275118058 * L_41 = GameObject_get_transform_m909382139(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t2243707580  L_42 = Transform_get_position_m1104419803(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_x_1();
		float L_44 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_43-(float)L_44)));
	}

IL_00df:
	{
		float L_45 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_slope_2();
		float L_46 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		float L_47 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_yintercept_3();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)((float)((float)L_45*(float)L_46))+(float)L_47)));
		GameObject_t1756533147 * L_48 = ___objectToTransform0;
		NullCheck(L_48);
		Transform_t3275118058 * L_49 = GameObject_get_transform_m909382139(L_48, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_50 = ___objectToTransform0;
		NullCheck(L_50);
		Transform_t3275118058 * L_51 = GameObject_get_transform_m909382139(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t2243707580  L_52 = Transform_get_position_m1104419803(L_51, /*hidden argument*/NULL);
		float L_53 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		float L_54 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m2638739322(&L_55, L_53, L_54, (0.0f), /*hidden argument*/NULL);
		float L_56 = ___speed3;
		float L_57 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_58 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_52, L_55, ((float)((float)L_56*(float)L_57)), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_m2469242620(L_49, L_58, /*hidden argument*/NULL);
		return;
	}

IL_012c:
	{
		Vector3_t2243707580  L_59 = ___direction1;
		float L_60 = L_59.get_x_1();
		GameObject_t1756533147 * L_61 = ___objectToTransform0;
		NullCheck(L_61);
		Transform_t3275118058 * L_62 = GameObject_get_transform_m909382139(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t2243707580  L_63 = Transform_get_position_m1104419803(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_x_1();
		if ((!(((float)((float)((float)L_60-(float)L_64))) == ((float)(0.0f)))))
		{
			goto IL_0169;
		}
	}
	{
		Vector3_t2243707580  L_65 = ___direction1;
		float L_66 = L_65.get_y_2();
		GameObject_t1756533147 * L_67 = ___objectToTransform0;
		NullCheck(L_67);
		Transform_t3275118058 * L_68 = GameObject_get_transform_m909382139(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t2243707580  L_69 = Transform_get_position_m1104419803(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_y_2();
		if ((!(((float)((float)((float)L_66-(float)L_70))) == ((float)(0.0f)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}

IL_0169:
	{
		Vector3_t2243707580  L_71 = ___direction1;
		float L_72 = L_71.get_x_1();
		GameObject_t1756533147 * L_73 = ___objectToTransform0;
		NullCheck(L_73);
		Transform_t3275118058 * L_74 = GameObject_get_transform_m909382139(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t2243707580  L_75 = Transform_get_position_m1104419803(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_x_1();
		if ((!(((float)((float)((float)L_72-(float)L_76))) == ((float)(0.0f)))))
		{
			goto IL_0259;
		}
	}
	{
		Vector3_t2243707580  L_77 = ___direction1;
		float L_78 = L_77.get_y_2();
		if ((!(((float)L_78) > ((float)(0.0f)))))
		{
			goto IL_01f0;
		}
	}
	{
		GameObject_t1756533147 * L_79 = ___objectToTransform0;
		NullCheck(L_79);
		Transform_t3275118058 * L_80 = GameObject_get_transform_m909382139(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t2243707580  L_81 = Transform_get_position_m1104419803(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_y_2();
		float L_83 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)L_82+(float)L_83)));
		GameObject_t1756533147 * L_84 = ___objectToTransform0;
		NullCheck(L_84);
		Transform_t3275118058 * L_85 = GameObject_get_transform_m909382139(L_84, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_86 = ___objectToTransform0;
		NullCheck(L_86);
		Transform_t3275118058 * L_87 = GameObject_get_transform_m909382139(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t2243707580  L_88 = Transform_get_position_m1104419803(L_87, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_89 = ___objectToTransform0;
		NullCheck(L_89);
		Transform_t3275118058 * L_90 = GameObject_get_transform_m909382139(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector3_t2243707580  L_91 = Transform_get_position_m1104419803(L_90, /*hidden argument*/NULL);
		float L_92 = L_91.get_x_1();
		float L_93 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_94;
		memset(&L_94, 0, sizeof(L_94));
		Vector3__ctor_m2638739322(&L_94, L_92, L_93, (0.0f), /*hidden argument*/NULL);
		float L_95 = ___speed3;
		float L_96 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_97 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_88, L_94, ((float)((float)L_95*(float)L_96)), /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_position_m2469242620(L_85, L_97, /*hidden argument*/NULL);
		return;
	}

IL_01f0:
	{
		Vector3_t2243707580  L_98 = ___direction1;
		float L_99 = L_98.get_y_2();
		if ((!(((float)L_99) < ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		GameObject_t1756533147 * L_100 = ___objectToTransform0;
		NullCheck(L_100);
		Transform_t3275118058 * L_101 = GameObject_get_transform_m909382139(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Vector3_t2243707580  L_102 = Transform_get_position_m1104419803(L_101, /*hidden argument*/NULL);
		float L_103 = L_102.get_y_2();
		float L_104 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)L_103-(float)L_104)));
		GameObject_t1756533147 * L_105 = ___objectToTransform0;
		NullCheck(L_105);
		Transform_t3275118058 * L_106 = GameObject_get_transform_m909382139(L_105, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_107 = ___objectToTransform0;
		NullCheck(L_107);
		Transform_t3275118058 * L_108 = GameObject_get_transform_m909382139(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t2243707580  L_109 = Transform_get_position_m1104419803(L_108, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_110 = ___objectToTransform0;
		NullCheck(L_110);
		Transform_t3275118058 * L_111 = GameObject_get_transform_m909382139(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		Vector3_t2243707580  L_112 = Transform_get_position_m1104419803(L_111, /*hidden argument*/NULL);
		float L_113 = L_112.get_x_1();
		float L_114 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_115;
		memset(&L_115, 0, sizeof(L_115));
		Vector3__ctor_m2638739322(&L_115, L_113, L_114, (0.0f), /*hidden argument*/NULL);
		float L_116 = ___speed3;
		float L_117 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_118 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_109, L_115, ((float)((float)L_116*(float)L_117)), /*hidden argument*/NULL);
		NullCheck(L_106);
		Transform_set_position_m2469242620(L_106, L_118, /*hidden argument*/NULL);
		return;
	}

IL_0259:
	{
		Vector3_t2243707580  L_119 = ___direction1;
		float L_120 = L_119.get_y_2();
		GameObject_t1756533147 * L_121 = ___objectToTransform0;
		NullCheck(L_121);
		Transform_t3275118058 * L_122 = GameObject_get_transform_m909382139(L_121, /*hidden argument*/NULL);
		NullCheck(L_122);
		Vector3_t2243707580  L_123 = Transform_get_position_m1104419803(L_122, /*hidden argument*/NULL);
		float L_124 = L_123.get_y_2();
		if ((!(((float)((float)((float)L_120-(float)L_124))) == ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		Vector3_t2243707580  L_125 = ___direction1;
		float L_126 = L_125.get_x_1();
		if ((!(((float)L_126) > ((float)(0.0f)))))
		{
			goto IL_02e0;
		}
	}
	{
		GameObject_t1756533147 * L_127 = ___objectToTransform0;
		NullCheck(L_127);
		Transform_t3275118058 * L_128 = GameObject_get_transform_m909382139(L_127, /*hidden argument*/NULL);
		NullCheck(L_128);
		Vector3_t2243707580  L_129 = Transform_get_position_m1104419803(L_128, /*hidden argument*/NULL);
		float L_130 = L_129.get_x_1();
		float L_131 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_130+(float)L_131)));
		GameObject_t1756533147 * L_132 = ___objectToTransform0;
		NullCheck(L_132);
		Transform_t3275118058 * L_133 = GameObject_get_transform_m909382139(L_132, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_134 = ___objectToTransform0;
		NullCheck(L_134);
		Transform_t3275118058 * L_135 = GameObject_get_transform_m909382139(L_134, /*hidden argument*/NULL);
		NullCheck(L_135);
		Vector3_t2243707580  L_136 = Transform_get_position_m1104419803(L_135, /*hidden argument*/NULL);
		float L_137 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		GameObject_t1756533147 * L_138 = ___objectToTransform0;
		NullCheck(L_138);
		Transform_t3275118058 * L_139 = GameObject_get_transform_m909382139(L_138, /*hidden argument*/NULL);
		NullCheck(L_139);
		Vector3_t2243707580  L_140 = Transform_get_position_m1104419803(L_139, /*hidden argument*/NULL);
		float L_141 = L_140.get_y_2();
		Vector3_t2243707580  L_142;
		memset(&L_142, 0, sizeof(L_142));
		Vector3__ctor_m2638739322(&L_142, L_137, L_141, (0.0f), /*hidden argument*/NULL);
		float L_143 = ___speed3;
		float L_144 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_145 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_136, L_142, ((float)((float)L_143*(float)L_144)), /*hidden argument*/NULL);
		NullCheck(L_133);
		Transform_set_position_m2469242620(L_133, L_145, /*hidden argument*/NULL);
		return;
	}

IL_02e0:
	{
		Vector3_t2243707580  L_146 = ___direction1;
		float L_147 = L_146.get_y_2();
		if ((!(((float)L_147) < ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		GameObject_t1756533147 * L_148 = ___objectToTransform0;
		NullCheck(L_148);
		Transform_t3275118058 * L_149 = GameObject_get_transform_m909382139(L_148, /*hidden argument*/NULL);
		NullCheck(L_149);
		Vector3_t2243707580  L_150 = Transform_get_position_m1104419803(L_149, /*hidden argument*/NULL);
		float L_151 = L_150.get_x_1();
		float L_152 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_151-(float)L_152)));
		GameObject_t1756533147 * L_153 = ___objectToTransform0;
		NullCheck(L_153);
		Transform_t3275118058 * L_154 = GameObject_get_transform_m909382139(L_153, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_155 = ___objectToTransform0;
		NullCheck(L_155);
		Transform_t3275118058 * L_156 = GameObject_get_transform_m909382139(L_155, /*hidden argument*/NULL);
		NullCheck(L_156);
		Vector3_t2243707580  L_157 = Transform_get_position_m1104419803(L_156, /*hidden argument*/NULL);
		float L_158 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		GameObject_t1756533147 * L_159 = ___objectToTransform0;
		NullCheck(L_159);
		Transform_t3275118058 * L_160 = GameObject_get_transform_m909382139(L_159, /*hidden argument*/NULL);
		NullCheck(L_160);
		Vector3_t2243707580  L_161 = Transform_get_position_m1104419803(L_160, /*hidden argument*/NULL);
		float L_162 = L_161.get_y_2();
		Vector3_t2243707580  L_163;
		memset(&L_163, 0, sizeof(L_163));
		Vector3__ctor_m2638739322(&L_163, L_158, L_162, (0.0f), /*hidden argument*/NULL);
		float L_164 = ___speed3;
		float L_165 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_166 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_157, L_163, ((float)((float)L_164*(float)L_165)), /*hidden argument*/NULL);
		NullCheck(L_154);
		Transform_set_position_m2469242620(L_154, L_166, /*hidden argument*/NULL);
	}

IL_0345:
	{
		return;
	}
}
// System.Void EasyMovement.Move2DObject::translateOverLine2(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void Move2DObject_translateOverLine2_m1933090694 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___objectToTransform0, Vector3_t2243707580  ___direction1, float ___step2, float ___speed3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Move2DObject_translateOverLine2_m1933090694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t2243707580  L_0 = ___direction1;
		float L_1 = L_0.get_x_1();
		GameObject_t1756533147 * L_2 = ___objectToTransform0;
		NullCheck(L_2);
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_1();
		if ((((float)((float)((float)L_1-(float)L_5))) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		Vector3_t2243707580  L_6 = ___direction1;
		float L_7 = L_6.get_y_2();
		GameObject_t1756533147 * L_8 = ___objectToTransform0;
		NullCheck(L_8);
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_2();
		if ((((float)((float)((float)L_7-(float)L_11))) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		GameObject_t1756533147 * L_12 = ___objectToTransform0;
		NullCheck(L_12);
		Transform_t3275118058 * L_13 = GameObject_get_transform_m909382139(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t2243707580  L_14 = Transform_get_position_m1104419803(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_2();
		Vector3_t2243707580  L_16 = ___direction1;
		float L_17 = L_16.get_y_2();
		GameObject_t1756533147 * L_18 = ___objectToTransform0;
		NullCheck(L_18);
		Transform_t3275118058 * L_19 = GameObject_get_transform_m909382139(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_1();
		Vector3_t2243707580  L_22 = ___direction1;
		float L_23 = L_22.get_x_1();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_slope_2(((float)((float)((float)((float)L_15-(float)L_17))/(float)((float)((float)L_21-(float)L_23)))));
		GameObject_t1756533147 * L_24 = ___objectToTransform0;
		NullCheck(L_24);
		Transform_t3275118058 * L_25 = GameObject_get_transform_m909382139(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t2243707580  L_26 = Transform_get_position_m1104419803(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_2();
		GameObject_t1756533147 * L_28 = ___objectToTransform0;
		NullCheck(L_28);
		Transform_t3275118058 * L_29 = GameObject_get_transform_m909382139(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t2243707580  L_30 = Transform_get_position_m1104419803(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_1();
		float L_32 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_slope_2();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_yintercept_3(((float)((float)L_27-(float)((float)((float)L_31*(float)L_32)))));
		Vector3_t2243707580  L_33 = ___direction1;
		float L_34 = L_33.get_x_1();
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		GameObject_t1756533147 * L_35 = ___objectToTransform0;
		NullCheck(L_35);
		Transform_t3275118058 * L_36 = GameObject_get_transform_m909382139(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t2243707580  L_37 = Transform_get_position_m1104419803(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_1();
		float L_39 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_38+(float)L_39)));
		goto IL_00df;
	}

IL_00c8:
	{
		GameObject_t1756533147 * L_40 = ___objectToTransform0;
		NullCheck(L_40);
		Transform_t3275118058 * L_41 = GameObject_get_transform_m909382139(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t2243707580  L_42 = Transform_get_position_m1104419803(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_x_1();
		float L_44 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_43-(float)L_44)));
	}

IL_00df:
	{
		float L_45 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_slope_2();
		float L_46 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		float L_47 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_yintercept_3();
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)((float)((float)L_45*(float)L_46))+(float)L_47)));
		GameObject_t1756533147 * L_48 = ___objectToTransform0;
		NullCheck(L_48);
		Transform_t3275118058 * L_49 = GameObject_get_transform_m909382139(L_48, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_50 = ___objectToTransform0;
		NullCheck(L_50);
		Transform_t3275118058 * L_51 = GameObject_get_transform_m909382139(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t2243707580  L_52 = Transform_get_position_m1104419803(L_51, /*hidden argument*/NULL);
		float L_53 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		float L_54 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m2638739322(&L_55, L_53, L_54, (0.0f), /*hidden argument*/NULL);
		float L_56 = ___speed3;
		float L_57 = Time_get_fixedDeltaTime_m2734072926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_58 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_52, L_55, ((float)((float)L_56*(float)L_57)), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_m2469242620(L_49, L_58, /*hidden argument*/NULL);
		return;
	}

IL_012c:
	{
		Vector3_t2243707580  L_59 = ___direction1;
		float L_60 = L_59.get_x_1();
		GameObject_t1756533147 * L_61 = ___objectToTransform0;
		NullCheck(L_61);
		Transform_t3275118058 * L_62 = GameObject_get_transform_m909382139(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t2243707580  L_63 = Transform_get_position_m1104419803(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_x_1();
		if ((!(((float)((float)((float)L_60-(float)L_64))) == ((float)(0.0f)))))
		{
			goto IL_0169;
		}
	}
	{
		Vector3_t2243707580  L_65 = ___direction1;
		float L_66 = L_65.get_y_2();
		GameObject_t1756533147 * L_67 = ___objectToTransform0;
		NullCheck(L_67);
		Transform_t3275118058 * L_68 = GameObject_get_transform_m909382139(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t2243707580  L_69 = Transform_get_position_m1104419803(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_y_2();
		if ((!(((float)((float)((float)L_66-(float)L_70))) == ((float)(0.0f)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}

IL_0169:
	{
		Vector3_t2243707580  L_71 = ___direction1;
		float L_72 = L_71.get_x_1();
		GameObject_t1756533147 * L_73 = ___objectToTransform0;
		NullCheck(L_73);
		Transform_t3275118058 * L_74 = GameObject_get_transform_m909382139(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t2243707580  L_75 = Transform_get_position_m1104419803(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_x_1();
		if ((!(((float)((float)((float)L_72-(float)L_76))) == ((float)(0.0f)))))
		{
			goto IL_0259;
		}
	}
	{
		Vector3_t2243707580  L_77 = ___direction1;
		float L_78 = L_77.get_y_2();
		if ((!(((float)L_78) > ((float)(0.0f)))))
		{
			goto IL_01f0;
		}
	}
	{
		GameObject_t1756533147 * L_79 = ___objectToTransform0;
		NullCheck(L_79);
		Transform_t3275118058 * L_80 = GameObject_get_transform_m909382139(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t2243707580  L_81 = Transform_get_position_m1104419803(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_y_2();
		float L_83 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)L_82+(float)L_83)));
		GameObject_t1756533147 * L_84 = ___objectToTransform0;
		NullCheck(L_84);
		Transform_t3275118058 * L_85 = GameObject_get_transform_m909382139(L_84, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_86 = ___objectToTransform0;
		NullCheck(L_86);
		Transform_t3275118058 * L_87 = GameObject_get_transform_m909382139(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t2243707580  L_88 = Transform_get_position_m1104419803(L_87, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_89 = ___objectToTransform0;
		NullCheck(L_89);
		Transform_t3275118058 * L_90 = GameObject_get_transform_m909382139(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector3_t2243707580  L_91 = Transform_get_position_m1104419803(L_90, /*hidden argument*/NULL);
		float L_92 = L_91.get_x_1();
		float L_93 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_94;
		memset(&L_94, 0, sizeof(L_94));
		Vector3__ctor_m2638739322(&L_94, L_92, L_93, (0.0f), /*hidden argument*/NULL);
		float L_95 = ___speed3;
		float L_96 = Time_get_fixedDeltaTime_m2734072926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_97 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_88, L_94, ((float)((float)L_95*(float)L_96)), /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_position_m2469242620(L_85, L_97, /*hidden argument*/NULL);
		return;
	}

IL_01f0:
	{
		Vector3_t2243707580  L_98 = ___direction1;
		float L_99 = L_98.get_y_2();
		if ((!(((float)L_99) < ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		GameObject_t1756533147 * L_100 = ___objectToTransform0;
		NullCheck(L_100);
		Transform_t3275118058 * L_101 = GameObject_get_transform_m909382139(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Vector3_t2243707580  L_102 = Transform_get_position_m1104419803(L_101, /*hidden argument*/NULL);
		float L_103 = L_102.get_y_2();
		float L_104 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextY_4(((float)((float)L_103-(float)L_104)));
		GameObject_t1756533147 * L_105 = ___objectToTransform0;
		NullCheck(L_105);
		Transform_t3275118058 * L_106 = GameObject_get_transform_m909382139(L_105, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_107 = ___objectToTransform0;
		NullCheck(L_107);
		Transform_t3275118058 * L_108 = GameObject_get_transform_m909382139(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t2243707580  L_109 = Transform_get_position_m1104419803(L_108, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_110 = ___objectToTransform0;
		NullCheck(L_110);
		Transform_t3275118058 * L_111 = GameObject_get_transform_m909382139(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		Vector3_t2243707580  L_112 = Transform_get_position_m1104419803(L_111, /*hidden argument*/NULL);
		float L_113 = L_112.get_x_1();
		float L_114 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextY_4();
		Vector3_t2243707580  L_115;
		memset(&L_115, 0, sizeof(L_115));
		Vector3__ctor_m2638739322(&L_115, L_113, L_114, (0.0f), /*hidden argument*/NULL);
		float L_116 = ___speed3;
		float L_117 = Time_get_fixedDeltaTime_m2734072926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_118 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_109, L_115, ((float)((float)L_116*(float)L_117)), /*hidden argument*/NULL);
		NullCheck(L_106);
		Transform_set_position_m2469242620(L_106, L_118, /*hidden argument*/NULL);
		return;
	}

IL_0259:
	{
		Vector3_t2243707580  L_119 = ___direction1;
		float L_120 = L_119.get_y_2();
		GameObject_t1756533147 * L_121 = ___objectToTransform0;
		NullCheck(L_121);
		Transform_t3275118058 * L_122 = GameObject_get_transform_m909382139(L_121, /*hidden argument*/NULL);
		NullCheck(L_122);
		Vector3_t2243707580  L_123 = Transform_get_position_m1104419803(L_122, /*hidden argument*/NULL);
		float L_124 = L_123.get_y_2();
		if ((!(((float)((float)((float)L_120-(float)L_124))) == ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		Vector3_t2243707580  L_125 = ___direction1;
		float L_126 = L_125.get_x_1();
		if ((!(((float)L_126) > ((float)(0.0f)))))
		{
			goto IL_02e0;
		}
	}
	{
		GameObject_t1756533147 * L_127 = ___objectToTransform0;
		NullCheck(L_127);
		Transform_t3275118058 * L_128 = GameObject_get_transform_m909382139(L_127, /*hidden argument*/NULL);
		NullCheck(L_128);
		Vector3_t2243707580  L_129 = Transform_get_position_m1104419803(L_128, /*hidden argument*/NULL);
		float L_130 = L_129.get_x_1();
		float L_131 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_130+(float)L_131)));
		GameObject_t1756533147 * L_132 = ___objectToTransform0;
		NullCheck(L_132);
		Transform_t3275118058 * L_133 = GameObject_get_transform_m909382139(L_132, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_134 = ___objectToTransform0;
		NullCheck(L_134);
		Transform_t3275118058 * L_135 = GameObject_get_transform_m909382139(L_134, /*hidden argument*/NULL);
		NullCheck(L_135);
		Vector3_t2243707580  L_136 = Transform_get_position_m1104419803(L_135, /*hidden argument*/NULL);
		float L_137 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		GameObject_t1756533147 * L_138 = ___objectToTransform0;
		NullCheck(L_138);
		Transform_t3275118058 * L_139 = GameObject_get_transform_m909382139(L_138, /*hidden argument*/NULL);
		NullCheck(L_139);
		Vector3_t2243707580  L_140 = Transform_get_position_m1104419803(L_139, /*hidden argument*/NULL);
		float L_141 = L_140.get_y_2();
		Vector3_t2243707580  L_142;
		memset(&L_142, 0, sizeof(L_142));
		Vector3__ctor_m2638739322(&L_142, L_137, L_141, (0.0f), /*hidden argument*/NULL);
		float L_143 = ___speed3;
		float L_144 = Time_get_fixedDeltaTime_m2734072926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_145 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_136, L_142, ((float)((float)L_143*(float)L_144)), /*hidden argument*/NULL);
		NullCheck(L_133);
		Transform_set_position_m2469242620(L_133, L_145, /*hidden argument*/NULL);
		return;
	}

IL_02e0:
	{
		Vector3_t2243707580  L_146 = ___direction1;
		float L_147 = L_146.get_y_2();
		if ((!(((float)L_147) < ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		GameObject_t1756533147 * L_148 = ___objectToTransform0;
		NullCheck(L_148);
		Transform_t3275118058 * L_149 = GameObject_get_transform_m909382139(L_148, /*hidden argument*/NULL);
		NullCheck(L_149);
		Vector3_t2243707580  L_150 = Transform_get_position_m1104419803(L_149, /*hidden argument*/NULL);
		float L_151 = L_150.get_x_1();
		float L_152 = ___step2;
		((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->set_nextX_5(((float)((float)L_151-(float)L_152)));
		GameObject_t1756533147 * L_153 = ___objectToTransform0;
		NullCheck(L_153);
		Transform_t3275118058 * L_154 = GameObject_get_transform_m909382139(L_153, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_155 = ___objectToTransform0;
		NullCheck(L_155);
		Transform_t3275118058 * L_156 = GameObject_get_transform_m909382139(L_155, /*hidden argument*/NULL);
		NullCheck(L_156);
		Vector3_t2243707580  L_157 = Transform_get_position_m1104419803(L_156, /*hidden argument*/NULL);
		float L_158 = ((Move2DObject_t2181059768_StaticFields*)Move2DObject_t2181059768_il2cpp_TypeInfo_var->static_fields)->get_nextX_5();
		GameObject_t1756533147 * L_159 = ___objectToTransform0;
		NullCheck(L_159);
		Transform_t3275118058 * L_160 = GameObject_get_transform_m909382139(L_159, /*hidden argument*/NULL);
		NullCheck(L_160);
		Vector3_t2243707580  L_161 = Transform_get_position_m1104419803(L_160, /*hidden argument*/NULL);
		float L_162 = L_161.get_y_2();
		Vector3_t2243707580  L_163;
		memset(&L_163, 0, sizeof(L_163));
		Vector3__ctor_m2638739322(&L_163, L_158, L_162, (0.0f), /*hidden argument*/NULL);
		float L_164 = ___speed3;
		float L_165 = Time_get_fixedDeltaTime_m2734072926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_166 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_157, L_163, ((float)((float)L_164*(float)L_165)), /*hidden argument*/NULL);
		NullCheck(L_154);
		Transform_set_position_m2469242620(L_154, L_166, /*hidden argument*/NULL);
	}

IL_0345:
	{
		return;
	}
}
// System.Single EasyMovement.Move2DObject::getDistance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Move2DObject_getDistance_m3894933016 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pos10, Vector2_t2243707579  ___pos21, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Move2DObject_getDistance_m3894933016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector2_t2243707579  L_0 = ___pos21;
		float L_1 = L_0.get_x_0();
		Vector2_t2243707579  L_2 = ___pos10;
		float L_3 = L_2.get_x_0();
		Vector2_t2243707579  L_4 = ___pos21;
		float L_5 = L_4.get_y_1();
		Vector2_t2243707579  L_6 = ___pos10;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)((float)L_5-(float)L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_8 = powf(((float)((float)L_1-(float)L_3)), (2.0f));
		float L_9 = V_0;
		float L_10 = powf(L_9, (2.0f));
		float L_11 = sqrtf(((float)((float)L_8+(float)L_10)));
		return L_11;
	}
}
// System.Void EasyMovement.Move2DObject::.ctor()
extern "C"  void Move2DObject__ctor_m3004955167 (Move2DObject_t2181059768 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
