// 函数: sub_142a24c90
// 地址: 0x142a24c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 1)
    return sub_142a31c40(arg1, arg2, arg3.d) __tailcall

int16_t zmm1[0x8] = *(arg1 + 0x10)
int16_t temp0[0x8] = _mm_srai_epi16(*arg1, 2)
int16_t temp0_1[0x8] = _mm_srai_epi16(zmm1, 2)
int16_t zmm0[0x8] = _mm_unpacklo_epi16(temp0, temp0_1[0].q)
int16_t zmm3[0x8] = _mm_unpackhi_epi16(temp0, temp0_1[0].q)
int16_t zmm2[0x8] = zmm0
zmm0 = _mm_unpacklo_epi16(zmm0, zmm3[0].q)
zmm2 = _mm_unpackhi_epi16(zmm2, zmm3[0].q)
zmm1 = _mm_shuffle_epi32(zmm0, 0xe)
zmm3 = _mm_shuffle_epi32(zmm2, 0xe)
int16_t temp0_8[0x8] = _mm_add_epi16(zmm0, zmm1)
zmm2 = _mm_sub_epi16(zmm2, zmm3)
int32_t temp0_10[0x4] = _mm_unpacklo_epi16(arg5, temp0_8[0].q)
int32_t temp0_11[0x4] = _mm_unpacklo_epi16(arg6, zmm2[0].q)
int32_t temp0_15[0x4] =
    _mm_srai_epi32(_mm_sub_epi32(_mm_srai_epi32(temp0_10, 0x10), _mm_srai_epi32(temp0_11, 0x10)), 1)
int32_t temp0_16[0x4] = _mm_packs_epi32(temp0_15, temp0_15)
int32_t temp0_17[0x4] = _mm_sub_epi16(temp0_16, zmm3)
int32_t temp0_18[0x4] = _mm_sub_epi16(temp0_16, zmm1)
zmm0 = _mm_sub_epi16(temp0_8, temp0_17)
int16_t temp0_20[0x8] = _mm_add_epi16(zmm2, temp0_18)
zmm0 = _mm_unpacklo_epi16(zmm0, temp0_18[0].q)
int32_t temp0_22[0x4] = _mm_unpacklo_epi16(temp0_17, temp0_20[0].q)
arg5 = zmm0
zmm0 = _mm_unpacklo_epi16(zmm0, temp0_22[0].q)
int32_t temp0_24[0x4] = _mm_unpackhi_epi16(arg5, temp0_22[0].q)
arg6 = _mm_shuffle_epi32(zmm0, 0xe)
zmm2 = _mm_shuffle_epi32(temp0_24, 0xe)
int16_t temp0_27[0x8] = _mm_add_epi16(zmm0, arg6)
int32_t temp0_28[0x4] = _mm_sub_epi16(temp0_24, zmm2)
zmm1 = _mm_unpacklo_epi16(zmm1, temp0_27[0].q)
zmm3 = _mm_unpacklo_epi16(zmm3, temp0_28[0].q)
zmm1 = _mm_srai_epi32(_mm_sub_epi32(_mm_srai_epi32(zmm1, 0x10), _mm_srai_epi32(zmm3, 0x10)), 1)
zmm1 = _mm_packs_epi32(zmm1, zmm1)
zmm3 = _mm_sub_epi16(zmm1, zmm2)
zmm1 = _mm_sub_epi16(zmm1, arg6)
zmm0 = _mm_sub_epi16(temp0_27, zmm3)
arg5 = _mm_add_epi16(temp0_28, zmm1)
uint128_t zmm6 = zx.o(*(arg2 + arg3))
zmm2 = _mm_unpacklo_epi8(zx.o(*arg2), 0)
zmm6 = _mm_unpacklo_epi8(zmm6, 0)
int16_t temp0_42[0x8] = _mm_add_epi16(zmm0, zmm2)
int16_t temp0_43[0x8] = _mm_add_epi16(zmm3, zmm6)
int16_t temp0_44[0x8] = _mm_packus_epi16(temp0_42, zx.o(0))
int16_t temp0_45[0x8] = _mm_packus_epi16(temp0_43, zx.o(0))
*arg2 = temp0_44[0].d
*(arg2 + arg3) = temp0_45[0].d
int32_t* rdx_1 = arg2 + (arg3 << 1)
zmm6 = zx.o(*(rdx_1 + arg3))
zmm2 = _mm_unpacklo_epi8(zx.o(*rdx_1), 0)
zmm6 = _mm_unpacklo_epi8(zmm6, 0)
int16_t temp0_48[0x8] = _mm_add_epi16(zmm1, zmm2)
arg5 = _mm_add_epi16(arg5, zmm6)
int16_t temp0_50[0x8] = _mm_packus_epi16(temp0_48, zx.o(0))
arg5 = _mm_packus_epi16(arg5, zx.o(0))
*rdx_1 = temp0_50[0].d
*(rdx_1 + arg3) = arg5[0]
