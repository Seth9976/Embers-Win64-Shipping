// 函数: sub_1403ad6ab
// 地址: 0x1403ad6ab
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2)
int32_t zmm6[0x4] = data_14427ea20
int64_t rax_1 = neg.q(rax)
int32_t result[0x4] = *(arg1 + rax)
int32_t zmm1[0x4] = *(arg1 + (rax_1 << 1))
int32_t zmm2[0x4] = zmm1
int32_t result_1[0x4] = result
int32_t temp0[0x4] = _mm_subs_epu8(result, zmm1)
zmm1 = _mm_srli_epi16((_mm_subs_epu8(zmm1, result_1) | temp0) & zmm6, 1)
int32_t zmm7[0x4] = *arg3
int32_t zmm5[0x4] = *(arg1 + rax_1)
int32_t result_2[0x4] = *arg1
result = result_2
zmm6 = zmm5
zmm5 = _mm_subs_epu8(zmm5, result_2) | _mm_subs_epu8(result_2, zmm6)
result_2 = data_14427ea30
zmm5 = _mm_cmpeq_epi8(_mm_subs_epu8(_mm_adds_epu8(_mm_adds_epu8(zmm5, zmm5), zmm1), zmm7), zx.o(0))
int32_t temp0_9[0x4] = _mm_subs_epi8(zmm2 ^ result_2, result_1 ^ result_2)
zmm6 ^= result_2
result ^= result_2
result_1 = result
int32_t temp0_10[0x4] = _mm_subs_epi8(result, zmm6)
zmm5 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(temp0_9, temp0_10), temp0_10), temp0_10)
int32_t temp0_14[0x4] = __paddsb_xmmdq_memdq(zmm5, data_14427ea50)
int32_t temp0_15[0x4] = __paddsb_xmmdq_memdq(zmm5, data_14427ea60)
zmm1 = data_14427eaa0
zmm2 = data_14427eab0
zmm7 = _mm_cmpgt_epi8(zx.o(0), temp0_15) & zmm1
result = (_mm_srli_epi16(temp0_15, 3) & zmm2) | zmm7
int32_t temp0_18[0x4] = _mm_subs_epi8(result_1, result)
zmm7 = _mm_cmpgt_epi8(zx.o(0), temp0_14) & zmm1
int32_t temp0_21[0x4] = _mm_adds_epi8(zmm6, (_mm_srli_epi16(temp0_14, 3) & zmm2) | zmm7)
*arg1 = temp0_18 ^ result_2
*(arg1 + rax_1) = temp0_21 ^ result_2
return result
