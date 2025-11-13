// 函数: sub_141f635d0
// 地址: 0x141f635d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
float zmm6[0x4] = sub_141a1d730(arg1 + 0x408, arg2, arg3, &data_143dbb1f8)

if (arg4 == 1)
    float zmm5_1[0x4] = *(arg1 + 0x1c0)
    float zmm0_1[0x4] = result[1].d
    float temp0_1[0x4] = _mm_unpacklo_ps(*(result + 4), 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float var_18_1[0x4] = zmm6
    float temp0_5[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*result, zmm0_1[0].q), temp0_1[0].q), *(arg1 + 0x1e0))
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_2), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_2)
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_6)
    float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_5)
    float temp0_22[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), *(arg1 + 0x1d0))
    float var_20_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    *result = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
    result[1].d = var_20_1

return result
