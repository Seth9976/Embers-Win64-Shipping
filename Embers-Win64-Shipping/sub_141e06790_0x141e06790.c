// 函数: sub_141e06790
// 地址: 0x141e06790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = 0x3f800000
zmm2[0] = 1f f- *(arg1 + 4)
float zmm6[0x4]
float var_18[0x4] = zmm6
float temp0[0x4] = _mm_max_ss(zmm2[0], 0)
uint32_t zmm4[0x4]

if (not(temp0[0] <= 9.99999975e-05f))
    zmm4 = data_143f393b0
    float zmm1[0x4] = zmm4
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm4, data_143f393c0)
    zmm1[0].q = zx.o(0) u>> 0x40
    float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    int128_t var_38_1 = zx.o(0)
    uint32_t var_28_1[0x4] = temp0_1
    sub_141df38f0(arg1, &var_48, temp0)

zmm6 = *(arg1 + 0x10)
float zmm5[0x4] = data_143f39360
float temp0_3[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_5[0x4] = _mm_add_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0x4e))
zmm4 = _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5)
float temp0_8[0x4] = _mm_rsqrt_ps(zmm4)
float temp0_9[0x4] = _mm_mul_ps(zmm5, zmm4)
float temp0_14[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_8, temp0_8), temp0_9)), temp0_8), 
    temp0_8)
float temp0_17[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_14, temp0_14), temp0_9))
float result[0x4] = _mm_cmpeq_ps(data_143f393a0, zmm4, 2)
*(arg1 + 0x10) = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_17, temp0_14), temp0_14), zmm6) ^ data_143f39350, result)
    ^ data_143f39350
return result
