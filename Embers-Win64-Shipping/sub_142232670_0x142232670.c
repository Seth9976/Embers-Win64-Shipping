// 函数: sub_142232670
// 地址: 0x142232670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[2]
float var_68 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_60 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_64 = temp0[0]
void** var_58
void*** result = sub_1422313b0(arg1, &var_58, &var_68, &data_143dbb0c0)
float zmm5[0x4] = *arg3
int32_t var_24
float temp0_2[0x4] = _mm_unpacklo_ps(var_24, 0)
int32_t var_28
int32_t var_20
float temp0_3[0x4] = _mm_unpacklo_ps(var_28, var_20[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_4)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_4)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
float temp0_22[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), arg3[1])
temp0_22[0] = temp0_22[0] f- *arg2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
temp0_23[0] = temp0_23[0] f- arg2[1]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
temp0_24[0] = temp0_24[0] f- arg2[2]
temp0_22[0] = temp0_22[0] * temp0_22[0]
temp0_23[0] = temp0_23[0] * temp0_23[0]
temp0_24[0] = temp0_24[0] * temp0_24[0]
temp0_23[0] = temp0_23[0] + temp0_22[0]
temp0_23[0] = temp0_23[0] + temp0_24[0]
float temp0_25[0x4] = _mm_sqrt_ss(0, temp0_23[0])
int32_t var_1c
temp0_25[0] = temp0_25[0] f- var_1c
temp0_25[0]
return result
