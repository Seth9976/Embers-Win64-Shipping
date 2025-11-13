// 函数: sub_14153ebb0
// 地址: 0x14153ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float zmm12[0x4] = *arg3
float zmm5[0x4] = *(arg2 + 0x10)
float zmm6[0x4] = *(arg2 + 0x14)
int128_t zmm7 = *(arg2 + 0x18)
float zmm4[0x4] = *(arg2 + 0x28)
float temp0[0x4] = _mm_unpacklo_ps(zmm6, 0)
float temp0_3[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm7.q), temp0[0].q), arg3[2])
float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_5)
float temp0_17[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_14, temp0_4), temp0_15)
float temp0_19[0x4] = _mm_add_ps(_mm_mul_ps(temp0_6, temp0_12), temp0_3)
zmm4[0] = zmm4[0] f* *(arg2 + 0x1c)
float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_19)
zmm4[0] = zmm4[0] + zmm5[0]
float temp0_21[0x4] = __addps_xmmps_memps(temp0_20, arg3[1])
float var_b8 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
zmm4[0] = zmm4[0] f* *(arg2 + 0x20)
zmm4[0] = zmm4[0] f* *(arg2 + 0x24)
float var_110 = temp0_23[0]
zmm4[0] = zmm4[0] + zmm6[0]
zmm4[0] = zmm4[0] f+ zmm7.d
float temp0_24[0x4] = _mm_unpacklo_ps(zmm4, 0)
float temp0_27[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q), temp0_24[0].q), arg3[2])
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xd2)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_5)
float temp0_32[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_28, temp0_4), temp0_30)
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
zmm4 = *(arg4 + 0x28)
float zmm2[0x4] = *(arg4 + 0x14)
float zmm3[0x4] = *(arg4 + 0x10)
float temp0_34[0x4] = _mm_mul_ps(temp0_6, temp0_33)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc9), temp0_5)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
float temp0_38[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_39[0x4] = _mm_add_ps(temp0_34, temp0_27)
float temp0_42[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_37, temp0_4), temp0_36), temp0_39)
zmm12 = *arg5
float temp0_43[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_44[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_45[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
float temp0_46[0x4] = __addps_xmmps_memps(temp0_42, arg3[1])
float var_100 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
float temp0_50[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(arg4 + 0x18))[0].q), temp0_38[0].q), arg5[2])
zmm4[0] = zmm4[0] f* *(arg4 + 0x20)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
zmm4[0] = zmm4[0] f+ *(arg4 + 0x14)
float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc9), temp0_44)
float temp0_56[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd2), temp0_43), temp0_53)
float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xd2)
float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_44)
float temp0_62[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_59, temp0_43), temp0_60)
float temp0_63[0x4] = _mm_mul_ps(temp0_45, temp0_57)
float temp0_64[0x4] = _mm_unpacklo_ps(zmm4, 0)
float temp0_65[0x4] = _mm_add_ps(temp0_63, temp0_50)
zmm4[0] = zmm4[0] f* *(arg4 + 0x1c)
zmm4[0] = zmm4[0] f* *(arg4 + 0x24)
zmm4[0] = zmm4[0] f+ *(arg4 + 0x10)
float temp0_66[0x4] = _mm_add_ps(temp0_62, temp0_65)
zmm4[0] = zmm4[0] f+ *(arg4 + 0x18)
float temp0_67[0x4] = __addps_xmmps_memps(temp0_66, arg5[1])
float temp0_70[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q), temp0_64[0].q), arg5[2])
float var_d0 = _mm_shuffle_ps(temp0_67, temp0_67, 0xaa)[0]
float temp0_72[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
float temp0_73[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc9)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xd2)
float temp0_75[0x4] = _mm_mul_ps(temp0_73, temp0_44)
float temp0_77[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_74, temp0_43), temp0_75)
float temp0_78[0x4] = _mm_add_ps(temp0_77, temp0_77)
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xc9), temp0_44)
float temp0_81[0x4] = _mm_mul_ps(temp0_45, temp0_78)
float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xd2), temp0_43)
float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_70)
float temp0_87[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_83, temp0_80), temp0_84), arg5[1])
float var_f0 = _mm_shuffle_ps(temp0_87, temp0_87, 0xaa)[0]
float var_e0 = var_d0
float var_d0_1 = var_100
float var_c0_1 = var_110
int64_t var_f8 = (_mm_unpacklo_ps(temp0_87, _mm_shuffle_ps(temp0_87, temp0_87, 0x55)[0].q)).q
int64_t var_e8 = (_mm_unpacklo_ps(temp0_67, temp0_72[0].q)).q
int64_t var_d8 = (_mm_unpacklo_ps(temp0_46, temp0_51[0].q)).q
int64_t var_c8 = (_mm_unpacklo_ps(var_b8, temp0_22[0].q)).q
int32_t var_118
int32_t var_108
sub_140adfbe0(&var_c8, &var_d8, &var_e8, &var_f8, &var_108, &var_118)
float zmm5_1[0x4] = var_118
int32_t var_114
float zmm6_1[0x4] = var_114
float zmm4_1[0x4] = var_110
int32_t zmm7_1 = var_108
zmm5_1[0] = zmm5_1[0] f- zmm7_1
int32_t var_104
zmm6_1[0] = zmm6_1[0] f- var_104
zmm4_1[0] = zmm4_1[0] - var_100
zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
zmm5_1[0] = zmm5_1[0] + zmm6_1[0]
zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
float temp0_94[0x4] = _mm_sqrt_ss(0, zmm5_1[0])

if (not(temp0_94[0] <= 9.99999975e-05f))
    float zmm0_1[0x4] = 0x3f800000
    zmm0_1[0] = 1f / temp0_94[0]
    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
    zmm0_1 = *(arg4 + 0x2c)
    zmm0_1[0] = zmm0_1[0] f+ *(arg2 + 0x2c)
    temp0_94[0] = temp0_94[0] - zmm0_1[0]
    float var_c0_2 = (zmm4_1 ^ 0x80000000)[0]
    arg1[3].d = temp0_94[0]
    *arg1 = (_mm_unpacklo_ps(zmm5_1 ^ 0x80000000, (zmm6_1 ^ 0x80000000)[0].q)).q
    arg1[1].d = var_c0_2
    zmm0_1 = *(arg2 + 0x2c)
    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
    zmm5_1[0] = zmm5_1[0] f+ zmm7_1
    zmm6_1[0] = zmm6_1[0] f+ var_104
    zmm4_1[0] = zmm4_1[0] + var_100
    *(arg1 + 0xc) = (_mm_unpacklo_ps(zmm5_1, zmm6_1[0].q)).q
    *(arg1 + 0x14) = zmm4_1[0]

return arg1
