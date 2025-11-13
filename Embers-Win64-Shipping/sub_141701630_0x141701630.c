// 函数: sub_141701630
// 地址: 0x141701630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_f8[0x4]
uint32_t var_c8[0x4][0x4]
void var_88
float zmm6[0x4] = sub_1407c8dd0(&var_f8, sub_1417a3300(&var_88, sub_141743c50(arg4, &var_c8), arg2))
float zmm4[0x4] = var_f8
float zmm2[0x4] = *(arg1 + 0x14)
float result = *(arg3 + 0x24)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x10), (*(arg1 + 0x18))[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float var_d8[0x4]
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0, temp0_1[0].q), var_d8)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_2)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_2)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_4)
float temp0_19[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_16, temp0_5), temp0_15)
int64_t var_108 = *(arg3 + 0x1c)
float var_e8[0x4]
float temp0_21[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_19, temp0_17), var_e8)
temp0_21[0] = temp0_21[0] f- *(arg3 + 0x10)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
temp0_22[0] = temp0_22[0] f- *(arg3 + 0x14)
temp0_21[0] = temp0_21[0] f* *(arg3 + 0x1c)
temp0_22[0] = temp0_22[0] f* *(arg3 + 0x20)
temp0_22[0] = temp0_22[0] + temp0_21[0]
temp0_23[0] = temp0_23[0] f- *(arg3 + 0x18)
temp0_23[0] = temp0_23[0] f* *(arg3 + 0x24)
temp0_22[0] = temp0_22[0] + temp0_23[0]
temp0_22[0] = temp0_22[0] f- *(arg1 + 0x1c)

if (not(temp0_22[0] f>= *(arg5 + 0x9c)))
    *(arg5 + 0x9c) = temp0_22[0]
    float zmm5[0x4] = *arg4
    float temp0_24[0x4] = _mm_unpacklo_ps(var_108:4.d, 0)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float var_18_1[0x4] = zmm6
    float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108.d, result[0].q), temp0_24[0].q)
    float temp0_29[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_26)
    float temp0_34[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_25), temp0_31)
    float temp0_35[0x4] = _mm_add_ps(temp0_34, temp0_34)
    float temp0_36[0x4] = _mm_mul_ps(temp0_29, temp0_35)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc9), temp0_26)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xd2)
    float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_28)
    float temp0_43[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_39, temp0_25), temp0_38), temp0_40)
    float var_100_1 = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)[0]
    *(arg5 + 0x84) = (_mm_unpacklo_ps(temp0_43, _mm_shuffle_ps(temp0_43, temp0_43, 0x55)[0].q)).q
    *(arg5 + 0x8c) = var_100_1
    zmm2 = *(arg1 + 0x1c)
    zmm2[0] = zmm2[0] f* *(arg5 + 0x84)
    zmm2[0] = zmm2[0] f* *(arg5 + 0x88)
    zmm2[0] = zmm2[0] f* *(arg5 + 0x8c)
    temp0_21[0] = temp0_21[0] - zmm2[0]
    temp0_22[0] = temp0_22[0] - zmm2[0]
    temp0_23[0] = temp0_23[0] - zmm2[0]
    *(arg5 + 0x90) = (_mm_unpacklo_ps(temp0_21, temp0_22[0].q)).q
    result = temp0_23[0]
    *(arg5 + 0x98) = result

return result
