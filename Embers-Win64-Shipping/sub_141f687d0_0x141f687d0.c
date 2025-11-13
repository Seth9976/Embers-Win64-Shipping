// 函数: sub_141f687d0
// 地址: 0x141f687d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4] = arg2
float zmm6[0x4] = sub_141a1da60(arg1 + 0x408, arg2, arg3, &data_143dbb1f8)

if (arg4 == 1)
    float zmm5_1[0x4] = *(arg1 + 0x1c0)
    float zmm0_1[0x4] = (*result)[2]
    float temp0_1[0x4] = _mm_unpacklo_ps((*result)[1], 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float var_18_1[0x4] = zmm6
    float temp0_5[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*result, zmm0_1[0].q), temp0_1[0].q), *(arg1 + 0x1e0))
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_2)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_2)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
    float temp0_21[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18)
    float var_20_1 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
    *result = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
    (*result)[2] = var_20_1

return result
