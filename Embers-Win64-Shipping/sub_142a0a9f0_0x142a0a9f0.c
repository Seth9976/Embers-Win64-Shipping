// 函数: sub_142a0a9f0
// 地址: 0x142a0a9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3[0x4] = data_1435ffa40
int32_t temp0[0x4] = __punpcklwd_xmmdq_memdq(*arg1, arg1[1])
uint32_t zmm0[0x4] = __punpckhwd_xmmdq_memdq(*arg1, arg1[1])
int32_t temp0_2[0x4] = _mm_unpackhi_epi16(temp0, zmm0[0].q)
int32_t temp0_3[0x4] = _mm_unpacklo_epi16(temp0, zmm0[0].q)
int32_t temp0_4[0x4] = _mm_unpackhi_epi16(temp0_3, temp0_2[0].q)
int32_t temp0_5[0x4] = _mm_unpacklo_epi16(temp0_3, temp0_2[0].q)
zmm0 = __pmaddwd_xmmdq_memdq(temp0_4, data_143600b30)
int32_t zmm1[0x4] = __pmaddwd_xmmdq_memdq(temp0_5, *"A-A-A-A-A-A-A-A-")
int32_t zmm4[0x4] = __pmaddwd_xmmdq_memdq(temp0_4, data_1436009b0)
int32_t zmm2[0x4] = __pmaddwd_xmmdq_memdq(temp0_5, data_1435ffdc0)
zmm0 = _mm_srai_epi32(_mm_add_epi32(zmm0, zmm3), 0xe)
int32_t temp0_12[0x4] = _mm_add_epi32(zmm1, zmm3)
int32_t temp0_13[0x4] = _mm_add_epi32(zmm4, zmm3)
int32_t temp0_14[0x4] = _mm_srai_epi32(temp0_12, 0xe)
int32_t temp0_15[0x4] = _mm_add_epi32(zmm2, zmm3)
int32_t temp0_17[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_13, 0xe), zmm0)
int32_t temp0_19[0x4] = _mm_packs_epi32(temp0_14, _mm_srai_epi32(temp0_15, 0xe))
zmm0 = _mm_add_epi16(temp0_17, temp0_19)
int32_t temp0_21[0x4] = _mm_sub_epi16(temp0_19, temp0_17)
*arg1 = zmm0
uint32_t result[0x4] = _mm_shuffle_epi32(temp0_21, 0x4e)
arg1[1] = result
return result
