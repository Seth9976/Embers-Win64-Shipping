// 函数: sub_141f70740
// 地址: 0x141f70740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 1)
    *(arg1 + 0x4e8) = *arg2
    *(arg1 + 0x4f0) = *(arg2 + 8)
    return sub_141f77550(arg1) __tailcall

float zmm0[0x4] = *(arg2 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
float zmm6[0x4] = *(arg1 + 0x1e0)
float temp0_1[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
float temp0_2[0x4] = _mm_rcp_ps(zmm6)
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_8)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_7)
float temp0_13[0x4] = _mm_mul_ps(temp0_2, temp0_2)
float temp0_14[0x4] = _mm_add_ps(temp0_2, temp0_2)
float temp0_15[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm6)
float temp0_17[0x4] = _mm_mul_ps(temp0_11, temp0_15)
float temp0_18[0x4] = _mm_sub_ps(temp0_14, temp0_16)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), temp0_8)
float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_4)
float temp0_22[0x4] = _mm_mul_ps(temp0_18, temp0_18)
float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_18)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm6)
float temp0_26[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_24)
float temp0_30[0x4] =
    _mm_sub_ps(temp0_20, _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), temp0_5))
zmm6 = _mm_and_ps(temp0_26, temp0_27 ^ zx.o(0)) ^ temp0_27
float temp0_33[0x4] = _mm_mul_ps(_mm_add_ps(temp0_30, temp0_21), zmm6)
float var_40 = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)[0]
*(arg1 + 0x4e8) = (_mm_unpacklo_ps(temp0_33, _mm_shuffle_ps(temp0_33, temp0_33, 0x55)[0].q)).q
*(arg1 + 0x4f0) = var_40
return sub_141f77550(arg1) __tailcall
