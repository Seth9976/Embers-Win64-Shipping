// 函数: sub_1403abde0
// 地址: 0x1403abde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_7[0x4]
int32_t result_10[0x4] = result_7
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int64_t rax = sx.q(arg2)
int64_t rax_1 = neg.q(rax)
int64_t* rsi_2 = arg1 + rax
int64_t rdi_2 = arg6 + rax
int32_t result_11[0x4]
result_11[0].q = *(rsi_2 + (rax << 1))
int32_t zmm1[0x4]
zmm1[0].q = *(rsi_2 + rax)
int32_t result_4[0x4]
result_4[0].q = *rsi_2
int32_t result_2[0x4]
result_2[0].q = *(rsi_2 + rax_1)
result_11 = result_11[0].q | *(rdi_2 + (rax << 1)) << 0x40
zmm1 = zmm1[0].q | *(rdi_2 + rax) << 0x40
result_4 = result_4[0].q | *rdi_2 << 0x40
result_2 = result_2[0].q | *(rdi_2 + rax_1) << 0x40
void* rsi_3 = rsi_2 + (rax_1 << 2)
int64_t rdi_3 = rdi_2 + (rax_1 << 2)
int32_t var_70[0x4] = zmm1
int32_t result_6[0x4] = result_4
zmm7 = *arg4
int32_t result_1[0x4] = result_4
int32_t temp0[0x4] = _mm_subs_epu8(zmm1, result_11)
int32_t temp0_1[0x4] = _mm_subs_epu8(result_11, zmm1)
int32_t temp0_2[0x4] = _mm_subs_epu8(result_4, zmm1)
int32_t temp0_3[0x4] = _mm_subs_epu8(zmm1, result_1)
result_4 = temp0_2 | temp0_3
int32_t result[0x4] = result_2
int32_t temp0_4[0x4] = _mm_max_epu8(temp0 | temp0_1, result_4)
result_2 = _mm_subs_epu8(result_2, result_1) | _mm_subs_epu8(result_1, result)
int32_t result_3[0x4] = result_2
int32_t temp0_7[0x4] = _mm_max_epu8(temp0_4, result_2)
temp0_1[0].q = *(rsi_3 + rax_1)
result_4[0].q = *rsi_3
temp0_3[0].q = *(rsi_3 + rax)
result_11 = temp0_1[0].q | *(rdi_3 + rax_1) << 0x40
result_4 = result_4[0].q | *rdi_3 << 0x40
result_7 = temp0_3[0].q | *(rdi_3 + rax) << 0x40
int32_t result_5[0x4] = result_4
int32_t result_9[0x4] = result_7
int32_t temp0_8[0x4] = _mm_subs_epu8(result_4, result_11)
int32_t temp0_9[0x4] = _mm_subs_epu8(result_11, result_4)
int32_t temp0_10[0x4] = _mm_subs_epu8(result_7, result_4)
int32_t temp0_11[0x4] = _mm_max_epu8(temp0_7, temp0_8)
int32_t temp0_12[0x4] = _mm_subs_epu8(result_4, result_7)
result_11 = result_7
int32_t temp0_15[0x4] =
    _mm_max_epu8(_mm_max_epu8(_mm_max_epu8(temp0_11, temp0_9), temp0_12), temp0_10)
temp0_8[0].q = *(rsi_3 + (rax << 1))
result_4 = temp0_8[0].q | *(rdi_3 + (rax << 1)) << 0x40
int32_t temp0_16[0x4] = _mm_subs_epu8(result_4, result_7)
result_7 = _mm_subs_epu8(result_7, result_4) | temp0_16
int32_t result_8[0x4] = result_7
int32_t temp0_18[0x4] = _mm_max_epu8(temp0_15, result_7)
int32_t temp0_19[0x4] = _mm_subs_epu8(result_6, result_11)
int32_t temp0_20[0x4] = _mm_subs_epu8(result_11, result_6)
int32_t temp0_21[0x4] = _mm_subs_epu8(temp0_18, zmm7)
zmm7 = *arg3
result_7 = result_4
result_11 = _mm_srli_epi16((temp0_20 | temp0_19) & data_14427ea20, 1)
result_2 = _mm_subs_epu8(result_4, result) | _mm_subs_epu8(result, result_7)
int32_t temp0_26[0x4] = _mm_adds_epu8(_mm_adds_epu8(result_2, result_2), result_11)
result_11 = *arg5
int32_t temp0_27[0x4] = _mm_subs_epu8(temp0_26, zmm7)
int32_t temp0_28[0x4] = _mm_subs_epu8(result_3, result_11)
int32_t temp0_29[0x4] = _mm_subs_epu8(result_8, result_11)
result_4 = _mm_cmpeq_epi8(_mm_add_epi8(temp0_28, temp0_29), temp0_27)
result_1 = _mm_cmpeq_epi8(temp0_29, temp0_29)
zmm1 = _mm_cmpeq_epi8(temp0_21 | temp0_27, zx.o(0))
result_4 ^= result_1
result_1 = data_14427ea30
zmm7 = result_6 ^ result_1
result_7 ^= result_1
result_11 = _mm_subs_epi8(result_9 ^ result_1, zmm7) & result_4
result ^= result_1
result_1 = result
int32_t temp0_35[0x4] = _mm_subs_epi8(result, result_7)
zmm1 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(result_11, temp0_35), temp0_35), temp0_35)
int32_t temp0_39[0x4] = __paddsb_xmmdq_memdq(zmm1, data_14427ea60)
int32_t temp0_40[0x4] = __paddsb_xmmdq_memdq(zmm1, data_14427ea50)
int32_t temp0_41[0x4] = _mm_unpackhi_epi8(temp0_27, temp0_40[0].q)
int32_t temp0_42[0x4] = _mm_unpacklo_epi8(temp0_40, temp0_40[0].q)
int32_t temp0_43[0x4] = _mm_unpacklo_epi8(temp0_35, temp0_39[0].q)
result_2 = _mm_srai_epi16(temp0_41, 0xb)
int32_t temp0_45[0x4] = _mm_unpackhi_epi8(temp0_39, temp0_39[0].q)
result_11 = _mm_packs_epi16(_mm_srai_epi16(temp0_42, 0xb), result_2)
result = _mm_srai_epi16(temp0_43, 0xb)
zmm1 = _mm_srai_epi16(temp0_45, 0xb)
result_2 = result
result = _mm_packs_epi16(result, zmm1)
int32_t temp0_51[0x4] = _mm_adds_epi8(result_7, result_11)
result_11 = data_14427ea70
int32_t temp0_52[0x4] = _mm_adds_epi16(result_2, result_11)
int32_t temp0_53[0x4] = _mm_adds_epi16(zmm1, result_11)
result_2 = _mm_packs_epi16(_mm_srai_epi16(temp0_52, 1), _mm_srai_epi16(temp0_53, 1))
result_11 = data_14427ea30
void* rsi_4 = rsi_3 + (rax << 1)
int128_t* rdi_4 = rdi_3 + (rax << 1)
result_4 &= not.o(result_2)
result_7 = temp0_51 ^ result_11
result_1 = _mm_subs_epi8(result_1, result) ^ result_11
zmm1 = _mm_adds_epi8(result_9 ^ result_11, result_4) ^ result_11
zmm7 = _mm_subs_epi8(zmm7, result_4) ^ result_11
*rsi_4 = result_7[0].q
*rdi_4 = *rdi_4 | result_7[0].q << 0x40
*(rsi_4 + rax_1) = zmm1[0].q
*(rdi_4 + rax_1) = *(rdi_4 + rax_1) | zmm1[0].q << 0x40
*(rsi_4 + rax) = result_1[0].q
*(rdi_4 + rax) = *(rdi_4 + rax) | result_1[0].q << 0x40
*(rsi_4 + (rax << 1)) = zmm7[0].q
*(rdi_4 + (rax << 1)) = *(rdi_4 + (rax << 1)) | zmm7[0].q << 0x40
*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result
