// 函数: sub_142a092e0
// 地址: 0x142a092e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0[0x4] = __punpcklwd_xmmdq_memdq(*arg1, arg1[1])
int32_t temp0_1[0x4] = __punpckhwd_xmmdq_memdq(*arg1, arg1[1])
int32_t zmm7[0x4] = data_1435ffa40
int32_t temp0_2[0x4] = _mm_unpacklo_epi16(temp0, temp0_1[0].q)
int32_t temp0_3[0x4] = _mm_unpackhi_epi16(temp0, temp0_1[0].q)
int32_t temp0_4[0x4] = _mm_unpacklo_epi16(temp0_2, temp0_3[0].q)
int32_t temp0_5[0x4] = _mm_unpackhi_epi16(temp0_2, temp0_3[0].q)
int32_t zmm6[0x4] = _mm_bsrli_si128(temp0_3, 8)
int32_t zmm0[0x4] = __pmaddwd_xmmdq_memdq(temp0_4, data_143600a90)
zmm6 = _mm_add_epi16(zmm6, temp0_2)
int32_t zmm3[0x4] = __pmaddwd_xmmdq_memdq(temp0_4, data_143600bd0)
int32_t temp0_10[0x4] = _mm_sub_epi16(zmm6, temp0_3)
int32_t zmm8[0x4] = __pmaddwd_xmmdq_memdq(_mm_unpackhi_epi16(temp0_2, 0), *"A4A4A4A4A4A4A4A4")
zmm6 = __pmaddwd_xmmdq_memdq(_mm_unpacklo_epi16(temp0_10, 0), *"A4A4A4A4A4A4A4A4")
int32_t zmm5[0x4] = __pmaddwd_xmmdq_memdq(temp0_5, data_143600b20)
int32_t zmm2[0x4] = __pmaddwd_xmmdq_memdq(temp0_5, data_143600a10)
int32_t zmm1[0x4] = _mm_slli_epi32(zmm8, 2)
int32_t temp0_18[0x4] = _mm_add_epi32(zmm6, zmm7)
int32_t temp0_19[0x4] = _mm_add_epi32(zmm5, zmm3)
int32_t temp0_20[0x4] = _mm_srai_epi32(temp0_18, 0xe)
int32_t temp0_21[0x4] = _mm_add_epi32(zmm2, zmm0)
int32_t temp0_22[0x4] = _mm_add_epi32(temp0_19, temp0_21)
int32_t temp0_23[0x4] = _mm_add_epi32(temp0_19, zmm7)
int32_t temp0_24[0x4] = _mm_add_epi32(zmm8, temp0_22)
int32_t temp0_25[0x4] = _mm_srai_epi32(temp0_23, 0xe)
int32_t temp0_27[0x4] = _mm_add_epi32(_mm_sub_epi32(temp0_24, zmm1), zmm7)
int32_t temp0_28[0x4] = _mm_add_epi32(zmm7, temp0_21)
int32_t temp0_30[0x4] = _mm_packs_epi32(temp0_20, _mm_srai_epi32(temp0_27, 0xe))
int32_t result[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_28, 0xe), temp0_25)
arg1[1] = temp0_30
*arg1 = result
return result
