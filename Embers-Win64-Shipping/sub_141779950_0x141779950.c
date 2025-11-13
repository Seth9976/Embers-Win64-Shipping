// 函数: sub_141779950
// 地址: 0x141779950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float zmm5[0x4] = *arg1
float zmm0[0x4] = *(arg1 + 4)
float zmm1[0x4] = *(arg1 + 8)
int32_t zmm2 = *(arg1 + 0xc)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
zmm5 ^= 0x80000000
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0_1[0] = (zmm0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = (zmm1 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_58[0x4] = temp0_5
float temp0_7[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(temp0_5, temp0_5, 0))
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), zmm3)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_7, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_5, temp0_5, 0x55))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_5, temp0_5, 0xaa))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
var_58 = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
void var_48
float var_38[0x4]
int128_t zmm7 = sub_141780e40(&var_58, &var_38, &var_48)
float zmm1_1[0x4] = *(arg2 + 8)
float zmm0_1[0x4] = *(arg2 + 4)
zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
float zmm6[0x4] = zmm0_1 ^ zmm7
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] * zmm0_1[0]
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm1_1[0] = zmm1_1[0] f* *(arg2 + 0xc)
zmm1_1[0] = zmm1_1[0] f* *arg2
zmm6[0] = zmm6[0] - zmm1_1[0]
zmm6[0] = zmm6[0] f* *(arg2 + 0xc)
zmm6[0] = zmm6[0] f* *arg2
zmm6[0] = zmm6[0] + 1f
zmm6[0] = zmm6[0] + zmm1_1[0]
zmm1_1[0] = zmm1_1[0] - zmm6[0]
var_58[2] = zmm6[0]
float rax = var_58[2]
*arg3 = (_mm_unpacklo_ps(zmm6, zmm1_1[0].q)).q
arg3[1].d = rax
int64_t result
int32_t zmm0_2
zmm0_2, result = sub_141779860(&var_48)
*arg4 = zmm0_2
return result
