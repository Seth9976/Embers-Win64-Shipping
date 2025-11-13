// 函数: sub_141746150
// 地址: 0x141746150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
float zmm6[0x4] = *(arg1 + 0x40)
float temp0_1[0x4] = __mulps_xmmps_memps(data_143ef7590, *(arg1 + 0x20))
float temp0_4[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0[0].q), *(arg1 + 0x30))
int64_t* rcx = *(arg1 + 0x10)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
float temp0_6[0x4] = _mm_rcp_ps(zmm6)
float zmm8[0x4] = __andps_xmmxud_memxud(temp0_4, data_143ef7300)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_5)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_8)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_10)
float temp0_15[0x4] = _mm_mul_ps(temp0_6, temp0_6)
float temp0_16[0x4] = _mm_add_ps(temp0_6, temp0_6)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm6)
float temp0_19[0x4] = _mm_mul_ps(temp0_13, temp0_17)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_8)
float temp0_23[0x4] = _mm_add_ps(temp0_19, zmm8)
float temp0_24[0x4] = _mm_mul_ps(temp0_20, temp0_20)
float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm6)
float temp0_28[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143ef7580), data_143ef7570, 2)
float temp0_29[0x4] = _mm_sub_ps(temp0_25, temp0_26)
float temp0_32[0x4] =
    _mm_sub_ps(temp0_22, _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_5))
zmm6 = _mm_and_ps(temp0_28, temp0_29 ^ zx.o(0)) ^ temp0_29
float temp0_35[0x4] = _mm_mul_ps(_mm_add_ps(temp0_32, temp0_23), zmm6)
float var_50 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)[0]
int64_t var_68 = (_mm_unpacklo_ps(temp0_35, _mm_shuffle_ps(temp0_35, temp0_35, 0x55)[0].q)).q
float var_60 = var_50
return (*(*rcx + 0x60))(rcx, &var_68, arg3)
