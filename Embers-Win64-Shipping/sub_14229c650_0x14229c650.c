// 函数: sub_14229c650
// 地址: 0x14229c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = *arg2
float zmm9[0x4] = data_142d4cc00
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float zmm12[0x4] = data_142d4cc20
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float temp0_3[0x4] = __mulps_xmmps_memps(zmm12, arg2[2])
float temp0_4[0x4] = __mulps_xmmps_memps(zmm9, arg2[2])
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_1)
float temp0_9[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0), temp0_6)
float temp0_10[0x4] = _mm_add_ps(temp0_9, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xd2)
float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_1)
float temp0_15[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_12, temp0), temp0_13)
float temp0_16[0x4] = _mm_mul_ps(temp0_2, temp0_10)
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0)
float temp0_20[0x4] = _mm_add_ps(temp0_15, _mm_add_ps(temp0_16, temp0_3))
float var_c8 = temp0_20[0]
float var_c4 = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_1)
float var_c0 = temp0_22[0]
float temp0_25[0x4] = _mm_sub_ps(temp0_18, temp0_24)
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
float temp0_27[0x4] = _mm_mul_ps(temp0_2, temp0_26)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, temp0_1)
float temp0_31[0x4] = _mm_mul_ps(temp0_29, temp0)
float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_4)
float temp0_34[0x4] = _mm_add_ps(_mm_sub_ps(temp0_31, temp0_30), temp0_32)
float var_bc = temp0_34[0]
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
float var_b4 = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)[0]
float zmm1[0x4] = arg2[1]
float var_b8 = temp0_35[0]
float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_b0 = zmm1[0]
float var_a8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_ac = temp0_37[0]
float zmm9_1[0x4]
int32_t zmm10_1
int32_t zmm11_1
int32_t zmm13_1
zmm9_1, zmm10_1, zmm11_1, zmm13_1 =
    sub_142298930(arg1, &var_b0, &var_bc, &var_c8, arg3, arg4[0], arg5, arg6, arg7.d, arg8.d, arg9)
float zmm7_1[0x4] = *arg2
float temp0_39[0x4] = __mulps_xmmps_memps(zmm9_1, arg2[2])
float zmm8_1[0x4] = data_142d4cc30
float temp0_40[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
float temp0_41[0x4] = __mulps_xmmps_memps(zmm8_1, arg2[2])
float temp0_42[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
float temp0_43[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xc9), temp0_42)
float temp0_48[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xd2), temp0_40), temp0_45)
float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_48)
float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xd2)
float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_42)
float temp0_53[0x4] = _mm_mul_ps(temp0_51, temp0_40)
float temp0_54[0x4] = _mm_mul_ps(temp0_49, temp0_43)
float temp0_57[0x4] = _mm_add_ps(_mm_sub_ps(temp0_53, temp0_52), _mm_add_ps(temp0_54, temp0_41))
float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd2), temp0_40)
var_b0 = temp0_57[0]
float var_ac_1 = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)[0]
float temp0_61[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc9), temp0_42)
float var_a8_1 = temp0_61[0]
float temp0_64[0x4] = _mm_sub_ps(temp0_59, temp0_63)
float temp0_65[0x4] = _mm_add_ps(temp0_64, temp0_64)
float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xd2)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xc9), temp0_42)
float temp0_69[0x4] = _mm_mul_ps(temp0_66, temp0_40)
float temp0_70[0x4] = _mm_mul_ps(temp0_65, temp0_43)
float temp0_73[0x4] = _mm_add_ps(_mm_sub_ps(temp0_69, temp0_68), _mm_add_ps(temp0_70, temp0_39))
var_bc = temp0_73[0]
float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
float var_b4_1 = _mm_shuffle_ps(temp0_73, temp0_73, 0xaa)[0]
float zmm1_1[0x4] = arg2[1]
float var_b8_1 = temp0_74[0]
float temp0_76[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
var_c8 = zmm1_1[0]
float var_c0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
float var_c4_1 = temp0_76[0]
float zmm8_2[0x4]
int32_t zmm10_2
int32_t zmm11_2
float zmm12_1[0x4]
int32_t zmm13_2
zmm8_2, zmm10_2, zmm11_2, zmm12_1, zmm13_2 = sub_142298930(arg1, &var_c8, &var_bc, &var_b0, arg3, 
    zmm13_1, arg5, arg6, zmm10_1, zmm11_1, arg9)
float temp0_78[0x4] = __mulps_xmmps_memps(zmm8_2, arg2[2])
float zmm6_2[0x4] = *arg2
float temp0_79[0x4] = __mulps_xmmps_memps(zmm12_1, arg2[2])
float temp0_80[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
float temp0_81[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xc9), temp0_80)
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xd2), temp0_81)
float temp0_86[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
float temp0_87[0x4] = _mm_sub_ps(temp0_85, temp0_83)
float temp0_88[0x4] = _mm_add_ps(temp0_87, temp0_87)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
float temp0_90[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xd2)
float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_80)
float temp0_93[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_90, temp0_81), temp0_91)
float temp0_94[0x4] = _mm_mul_ps(temp0_86, temp0_88)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xd2), temp0_81)
float temp0_98[0x4] = _mm_add_ps(temp0_93, _mm_add_ps(temp0_94, temp0_78))
var_b0 = temp0_98[0]
float var_ac_2 = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)[0]
float temp0_100[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xaa)
float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xc9), temp0_80)
float var_a8_2 = temp0_100[0]
float temp0_103[0x4] = _mm_sub_ps(temp0_96, temp0_102)
float temp0_104[0x4] = _mm_add_ps(temp0_103, temp0_103)
float temp0_105[0x4] = _mm_mul_ps(temp0_86, temp0_104)
float temp0_106[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc9)
float temp0_107[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xd2)
float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_80)
float temp0_109[0x4] = _mm_mul_ps(temp0_107, temp0_81)
float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_79)
float temp0_112[0x4] = _mm_add_ps(_mm_sub_ps(temp0_109, temp0_108), temp0_110)
var_bc = temp0_112[0]
float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0x55)
float var_b4_2 = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)[0]
float zmm1_2[0x4] = arg2[1]
float var_b8_2 = temp0_113[0]
float temp0_115[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
var_c8 = zmm1_2[0]
float var_c0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
float var_c4_2 = temp0_115[0]
return sub_142298930(arg1, &var_c8, &var_bc, &var_b0, arg3, zmm13_2, arg5, arg6, zmm10_2, zmm11_2, 
    arg9)
