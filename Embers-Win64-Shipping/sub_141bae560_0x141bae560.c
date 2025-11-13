// 函数: sub_141bae560
// 地址: 0x141bae560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
float zmm6[0x4] = *(arg1 + 0x1e0)
float temp0_1[0x4] = _mm_rcp_ps(zmm6)
float temp0_2[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f31430)
float temp0_5[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0[0].q), *(arg1 + 0x1d0))
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f31300)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_7)
float temp0_14[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_6), temp0_11)
float temp0_15[0x4] = _mm_mul_ps(temp0_1, temp0_1)
float temp0_16[0x4] = _mm_add_ps(temp0_1, temp0_1)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm6)
float temp0_19[0x4] = _mm_mul_ps(temp0_8, temp0_17)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_6)
float temp0_23[0x4] = _mm_add_ps(temp0_19, zmm8)
float temp0_24[0x4] = _mm_mul_ps(temp0_20, temp0_20)
float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm6)
float temp0_28[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f31410), data_143f31420, 2)
float temp0_29[0x4] = _mm_sub_ps(temp0_25, temp0_26)
float temp0_32[0x4] =
    _mm_sub_ps(temp0_22, _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_7))
float zmm1[0x4] = zx.o(0)
zmm6 = _mm_and_ps(temp0_28, temp0_29 ^ zx.o(0)) ^ temp0_29
float temp0_35[0x4] = _mm_mul_ps(_mm_add_ps(temp0_32, temp0_23), zmm6)
float zmm2[0x4] = zx.o(0)
*arg3 = (_mm_unpacklo_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x55) ^ data_142d3f780, 
    (_mm_shuffle_ps(temp0_35, temp0_35, 0xaa) ^ data_142d3f780)[0].q)).q
zmm0 = zx.o(0)
zmm1[0] = float.s(*(arg1 + 0x458))
zmm1[0] = zmm1[0] f* *(arg1 + 0x464)
zmm1[0] = zmm1[0] + *arg3
*arg3 = zmm1[0]
zmm2[0] = float.s(*(arg1 + 0x45c))
zmm2[0] = zmm2[0] f* *(arg1 + 0x468)
zmm2[0] = zmm2[0] + arg3[1]
arg3[1] = zmm2[0]
uint32_t result = (*(arg1 + 0x458) u>> 0x20).d
zmm0[0] = float.s(result)
zmm2[0] = zmm2[0] / zmm0[0]
zmm2[0] = zmm2[0] * zmm0[0]
arg3[1] = zmm2[0]
return result
