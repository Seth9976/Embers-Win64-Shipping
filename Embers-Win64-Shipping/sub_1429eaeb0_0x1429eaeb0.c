// 函数: sub_1429eaeb0
// 地址: 0x1429eaeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = zx.o(*(arg1 + (arg2 << 1)))
uint128_t zmm5 = zx.o(*(arg1 + (arg2 << 2)))
uint128_t zmm6 = *arg4
int32_t temp0[0x4] = _mm_unpacklo_epi16(zx.o(*arg1), *(arg1 + arg2))
zmm2 = _mm_unpacklo_epi16(zmm2, *(arg2 * 3 + arg1))
int32_t zmm1[0x4] = zx.o(*(arg1 + arg2 * 6))
zmm5 = _mm_unpacklo_epi16(zmm5, *(arg2 * 5 + arg1))
int32_t temp0_3[0x4] = _mm_unpackhi_epi32(temp0, zmm2.q)
int32_t temp0_4[0x4] = _mm_unpacklo_epi32(temp0, zmm2.q)
int32_t temp0_5[0x4] = _mm_unpacklo_epi16(zmm1, *(arg2 * 7 + arg1))
uint128_t result = __pshufb_xmmdq_memdq(zmm6, data_1435ff830)
zmm2 = _mm_unpacklo_epi32(zmm5, temp0_5[0].q)
zmm5 = _mm_unpackhi_epi32(zmm5, temp0_5[0].q)
int32_t temp0_9[0x4] = _mm_unpackhi_epi64(temp0_3, zmm5.q)
int32_t temp0_10[0x4] = _mm_unpacklo_epi64(temp0_3, zmm5.q)
int32_t zmm3[0x4] = _mm_maddubs_epi16(_mm_unpackhi_epi64(temp0_4, zmm2.q), result)
result = __pshufb_xmmdq_memdq(zmm6, data_1435ff850)
int32_t temp0_14[0x4] = _mm_unpacklo_epi64(temp0_4, zmm2.q)
zmm1 = _mm_maddubs_epi16(temp0_10, result)
result = __pshufb_xmmdq_memdq(zmm6, data_1435ff860)
zmm6 = __pshufb_xmmdq_memdq(zmm6, data_1435ff800)
int32_t zmm7[0x4] = _mm_maddubs_epi16(temp0_9, result)
int32_t zmm4[0x4] = _mm_maddubs_epi16(temp0_14, zmm6)
result = _mm_min_epi16(zmm1, zmm3)
int32_t temp0_21[0x4] = _mm_max_epi16(zmm1, zmm3)
int32_t temp0_25[0x4] = __pmulhrsw_xmmdq_memdq(
    _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm7, zmm4), result), temp0_21), data_1435ff7f0)
*arg3 = _mm_packus_epi16(temp0_25, temp0_25)[0].q
return result
