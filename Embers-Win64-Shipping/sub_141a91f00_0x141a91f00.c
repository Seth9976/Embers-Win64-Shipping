// 函数: sub_141a91f00
// 地址: 0x141a91f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2b810
arg4[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg4 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg4[2] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
float zmm6[0x4] = arg3[2]
float zmm0[0x4] = (*arg2)[2]
float zmm2[0x4] = (*arg2)[1]
float zmm8[0x4] = *arg2
float temp0_2[0x4] = __mulps_xmmps_memps(*arg3, data_143f2b8e0)
float temp0_6[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), arg3[1])
float temp0_7[0x4] = _mm_rcp_ps(zmm6)
zmm8 = __andps_xmmxud_memxud(temp0_6, data_143f2b820)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_10)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_9)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
float temp0_17[0x4] = _mm_mul_ps(temp0_7, temp0_7)
float temp0_18[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_16)
float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
float temp0_21[0x4] = _mm_mul_ps(temp0_15, temp0_19)
float temp0_22[0x4] = _mm_sub_ps(temp0_18, temp0_20)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_9)
float temp0_25[0x4] = _mm_add_ps(temp0_21, zmm8)
float temp0_26[0x4] = _mm_mul_ps(temp0_22, temp0_22)
float temp0_27[0x4] = _mm_add_ps(temp0_22, temp0_22)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm6)
float temp0_30[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f2b9a0), data_143f2b990, 2)
float temp0_31[0x4] = _mm_sub_ps(temp0_27, temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_10)
zmm6 = _mm_and_ps(temp0_30, zx.o(0) ^ temp0_31)
float temp0_37[0x4] =
    _mm_mul_ps(_mm_add_ps(_mm_sub_ps(temp0_24, temp0_33), temp0_25), zmm6 ^ temp0_31)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)
float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
float result[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_37, temp0_38[0].q), _mm_unpacklo_ps(temp0_39, 0)[0].q)
arg4[1] = result
return result
