// 函数: sub_1416f5060
// 地址: 0x1416f5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float zmm5[0x4] = *arg3
float temp0_3[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg2 + 0x10), (*(arg2 + 0x18))[0].q), 
        _mm_unpacklo_ps(*(arg2 + 0x14), 0)[0].q), 
    arg3[2])
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float zmm12[0x4] = *arg5
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4)
float temp0_11[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_12[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_13[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_15)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), temp0_4)
float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_5)
float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_3)
float zmm6[0x4] = *(arg4 + 0x14)
float temp0_22[0x4] = _mm_unpacklo_ps(zmm6, 0)
float temp0_24[0x4] = _mm_add_ps(_mm_sub_ps(temp0_19, temp0_20), temp0_21)
zmm5 = *(arg4 + 0x10)
float temp0_25[0x4] = __addps_xmmps_memps(temp0_24, arg3[1])
float var_88 = temp0_25[0]
float var_84 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)[0]
float temp0_27[0x4] = _mm_unpacklo_ps(zmm5, (*(arg4 + 0x18))[0].q)
float var_80 = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)[0]
float temp0_30[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_27, temp0_22[0].q), arg5[2])
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xc9), temp0_11)
float temp0_35[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xd2), temp0_12), temp0_32)
float temp0_36[0x4] = _mm_add_ps(temp0_35, temp0_35)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xd2)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
float temp0_45[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_37, temp0_12), _mm_mul_ps(temp0_38, temp0_11)), 
        _mm_add_ps(_mm_mul_ps(temp0_13, temp0_36), temp0_30)), 
    arg5[1])
float var_68 = temp0_45[0]
float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x55)
float var_60 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
float zmm2[0x4] = *(arg4 + 0x28)
float var_64 = temp0_46[0]
zmm2[0] = zmm2[0] f* *(arg4 + 0x1c)
zmm2[0] = zmm2[0] f* *(arg4 + 0x24)
zmm2[0] = zmm2[0] f* *(arg4 + 0x20)
zmm2[0] = zmm2[0] + zmm5[0]
zmm2[0] = zmm2[0] f+ *(arg4 + 0x18)
zmm2[0] = zmm2[0] + zmm6[0]
float temp0_51[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), arg5[2])
float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_11)
float temp0_56[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd2), temp0_12), temp0_53)
float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
float temp0_58[0x4] = _mm_mul_ps(temp0_13, temp0_57)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xd2), temp0_12)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
float temp0_62[0x4] = _mm_add_ps(temp0_58, temp0_51)
float temp0_66[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(temp0_60, _mm_mul_ps(temp0_61, temp0_11)), temp0_62), arg5[1])
float var_78 = temp0_66[0]
float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
float var_70 = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)[0]
float var_74 = temp0_67[0]
int32_t var_58
sub_140acf9d0(&var_58, &var_88, &var_68, &var_78)
float zmm5_1[0x4] = var_58
int32_t var_54
float zmm6_1[0x4] = var_54
zmm5_1[0] = zmm5_1[0] - var_88
zmm6_1[0] = zmm6_1[0] - var_84
int32_t var_50
float zmm4_1[0x4] = var_50
zmm4_1[0] = zmm4_1[0] - var_80
zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
zmm5_1[0] = zmm5_1[0] + zmm6_1[0]
zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
float temp0_69[0x4] = _mm_sqrt_ss(0, zmm5_1[0])

if (not(temp0_69[0] <= 9.99999975e-05f))
    float zmm0_1[0x4] = 0x3f800000
    zmm0_1[0] = 1f / temp0_69[0]
    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
    zmm0_1 = *(arg4 + 0x2c)
    zmm0_1[0] = zmm0_1[0] f+ *(arg2 + 0x1c)
    temp0_69[0] = temp0_69[0] - zmm0_1[0]
    float var_50_1 = (zmm4_1 ^ 0x80000000)[0]
    arg1[3].d = temp0_69[0]
    *arg1 = (_mm_unpacklo_ps(zmm5_1 ^ 0x80000000, (zmm6_1 ^ 0x80000000)[0].q)).q
    arg1[1].d = var_50_1
    zmm0_1 = *(arg2 + 0x1c)
    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
    zmm5_1[0] = zmm5_1[0] + var_88
    zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] + var_84
    zmm4_1[0] = zmm4_1[0] + var_80
    *(arg1 + 0xc) = (_mm_unpacklo_ps(zmm5_1, zmm6_1[0].q)).q
    *(arg1 + 0x14) = zmm4_1[0]

return arg1
