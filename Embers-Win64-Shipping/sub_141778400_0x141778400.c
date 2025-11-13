// 函数: sub_141778400
// 地址: 0x141778400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
float zmm1[0x4] = *(arg1 + 4) ^ 0x80000000
int32_t zmm4 = *(arg1 + 0xc)
int128_t zmm3 = *(arg1 + 8) ^ 0x80000000
float zmm7[0x4] = *arg1 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x1b)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
temp0_2[0] = zmm3.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_4[0] = zmm4
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_68[0x4] = temp0_5
float temp0_7[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(temp0_5, temp0_5, 0))
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), zmm5)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_7, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_5, temp0_5, 0x55))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_5, temp0_5, 0xaa))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
var_68 = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
void var_58
float var_48[0x4]
sub_141780e40(&var_68, &var_58, &var_48)
var_68[2] = 0x3f800000
var_68[0].q = 0
sub_141759530(&var_58, arg4, arg5, &var_68, arg3.d)
float result = *arg5

if (not(result <= 3.14159274f))
    result = result - 6.28318548f
    *arg5 = result

return result
