// 函数: sub_1403ac3f3
// 地址: 0x1403ac3f3
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_8[0x4]
int32_t result_12[0x4] = result_8
int32_t result_9[0x4]
int32_t result_13[0x4] = result_9
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int64_t rax = sx.q(arg2)
int64_t rax_1 = neg.q(rax)
int64_t* rsi_2 = arg1 + rax
int64_t rdi_2 = arg6 + rax
int32_t result_4[0x4]
result_4[0].q = *(rsi_2 + (rax << 1))
int32_t result_14[0x4]
result_14[0].q = *(rsi_2 + rax)
int32_t result_5[0x4]
result_5[0].q = *rsi_2
int32_t result_2[0x4]
result_2[0].q = *(rsi_2 + rax_1)
result_4 = result_4[0].q | *(rdi_2 + (rax << 1)) << 0x40
result_14 = result_14[0].q | *(rdi_2 + rax) << 0x40
result_5 = result_5[0].q | *rdi_2 << 0x40
result_2 = result_2[0].q | *(rdi_2 + rax_1) << 0x40
void* rsi_3 = rsi_2 + (rax_1 << 2)
int64_t rdi_3 = rdi_2 + (rax_1 << 2)
int32_t result_15[0x4] = result_14
int32_t result_7[0x4] = result_5
result_9 = *arg4
int32_t result_1[0x4] = result_5
int32_t temp0[0x4] = _mm_subs_epu8(result_14, result_4)
int32_t temp0_1[0x4] = _mm_subs_epu8(result_4, result_14)
int32_t temp0_2[0x4] = _mm_subs_epu8(result_5, result_14)
int32_t temp0_3[0x4] = _mm_subs_epu8(result_14, result_1)
result_5 = temp0_2 | temp0_3
int32_t result[0x4] = result_2
int32_t temp0_4[0x4] = _mm_max_epu8(temp0 | temp0_1, result_5)
result_2 = _mm_subs_epu8(result_2, result_1) | _mm_subs_epu8(result_1, result)
int32_t result_3[0x4] = result_2
int32_t temp0_7[0x4] = _mm_max_epu8(temp0_4, result_2)
temp0_1[0].q = *(rsi_3 + rax_1)
result_5[0].q = *rsi_3
temp0_3[0].q = *(rsi_3 + rax)
result_4 = temp0_1[0].q | *(rdi_3 + rax_1) << 0x40
result_5 = result_5[0].q | *rdi_3 << 0x40
result_8 = temp0_3[0].q | *(rdi_3 + rax) << 0x40
int32_t result_6[0x4] = result_5
int32_t result_11[0x4] = result_8
int32_t temp0_8[0x4] = _mm_subs_epu8(result_5, result_4)
int32_t temp0_9[0x4] = _mm_subs_epu8(result_4, result_5)
int32_t temp0_10[0x4] = _mm_subs_epu8(result_8, result_5)
int32_t temp0_11[0x4] = _mm_max_epu8(temp0_7, temp0_8)
int32_t temp0_12[0x4] = _mm_subs_epu8(result_5, result_8)
result_4 = result_8
int32_t temp0_15[0x4] =
    _mm_max_epu8(_mm_max_epu8(_mm_max_epu8(temp0_11, temp0_9), temp0_12), temp0_10)
temp0_8[0].q = *(rsi_3 + (rax << 1))
result_5 = temp0_8[0].q | *(rdi_3 + (rax << 1)) << 0x40
int32_t temp0_16[0x4] = _mm_subs_epu8(result_5, result_8)
result_8 = _mm_subs_epu8(result_8, result_5) | temp0_16
int32_t result_10[0x4] = result_8
int32_t temp0_18[0x4] = _mm_max_epu8(temp0_15, result_8)
int32_t temp0_19[0x4] = _mm_subs_epu8(result_7, result_4)
int32_t temp0_20[0x4] = _mm_subs_epu8(result_4, result_7)
int32_t temp0_21[0x4] = _mm_subs_epu8(temp0_18, result_9)
result_9 = *arg3
result_8 = result_5
result_4 = _mm_srli_epi16((temp0_20 | temp0_19) & data_14427ea20, 1)
result_2 = _mm_subs_epu8(result_5, result) | _mm_subs_epu8(result, result_8)
int32_t temp0_26[0x4] = _mm_adds_epu8(_mm_adds_epu8(result_2, result_2), result_4)
result_4 = *arg5
int32_t temp0_27[0x4] = _mm_subs_epu8(temp0_26, result_9)
int32_t temp0_28[0x4] = _mm_subs_epu8(result_3, result_4)
int32_t temp0_29[0x4] = _mm_subs_epu8(result_10, result_4)
result_5 = _mm_cmpeq_epi8(_mm_add_epi8(temp0_28, temp0_29), temp0_27)
result_1 = _mm_cmpeq_epi8(temp0_29, temp0_29)
result_14 = _mm_cmpeq_epi8(temp0_21 | temp0_27, zx.o(0))
result_5 ^= result_1
result_1 = data_14427ea30
result_9 = result_7 ^ result_1
result_8 ^= result_1
result ^= result_1
int32_t temp0_34[0x4] = _mm_subs_epi8(result_11 ^ result_1, result_9)
result_1 = result
int32_t temp0_35[0x4] = _mm_subs_epi8(result, result_8)
result_14 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(temp0_34, temp0_35), temp0_35), temp0_35)
result_4 = result_14 & result_5
result_5 &= not.o(result_14)
int32_t temp0_39[0x4] = _mm_unpacklo_epi8(zx.o(0), result_5[0].q)
int32_t temp0_40[0x4] = _mm_unpackhi_epi8(zx.o(0), result_5[0].q)
result_5 = data_14427ea80
int32_t temp0_41[0x4] = __paddsb_xmmdq_memdq(result_4, data_14427ea50)
int32_t temp0_42[0x4] = __paddsb_xmmdq_memdq(result_4, data_14427ea60)
result_14 = _mm_mulhi_epi16(temp0_40, result_5)
result = _mm_mulhi_epi16(temp0_39, result_5)
int32_t temp0_45[0x4] = _mm_unpackhi_epi8(result_9, temp0_41[0].q)
int32_t temp0_46[0x4] = _mm_unpacklo_epi8(temp0_41, temp0_41[0].q)
result_9 = _mm_srai_epi16(temp0_45, 0xb)
result_2 = _mm_srai_epi16(temp0_46, 0xb)
int32_t temp0_49[0x4] = _mm_unpackhi_epi8(result_5, temp0_42[0].q)
int32_t temp0_50[0x4] = _mm_unpacklo_epi8(temp0_42, temp0_42[0].q)
result_5 = _mm_srai_epi16(temp0_49, 0xb)
result_2 = _mm_packs_epi16(result_2, result_9)
result_4 = _mm_packs_epi16(_mm_srai_epi16(temp0_50, 0xb), result_5)
int32_t temp0_55[0x4] = _mm_adds_epi8(result_8, result_2)
int32_t temp0_56[0x4] = _mm_subs_epi8(result_1, result_4)
result_9 = result_14
result_5 = data_14427ea90
result_2 = result
result_4 = result_2
result = _mm_add_epi16(result, result_5)
result_14 = _mm_add_epi16(result_14, result_5)
result_5 = result_9
result_2 = _mm_add_epi16(result_2, result_2)
result_9 = _mm_add_epi16(result_9, result_9)
result_2 = _mm_add_epi16(result_2, result)
result_9 = _mm_add_epi16(result_9, result_14)
result_4 = _mm_add_epi16(result_4, result)
result = _mm_srai_epi16(result, 7)
result_5 = _mm_add_epi16(result_5, result_14)
result_14 = _mm_srai_epi16(result_14, 7)
result_4 = _mm_srai_epi16(result_4, 7)
result = _mm_packs_epi16(result, result_14)
result_5 = _mm_srai_epi16(result_5, 7)
result_2 = _mm_packs_epi16(_mm_srai_epi16(result_2, 7), _mm_srai_epi16(result_9, 7))
result_4 = _mm_packs_epi16(result_4, result_5)
result_9 = data_14427ea30
void* rsi_4 = rsi_3 + (rax << 1)
int128_t* rdi_4 = rdi_3 + (rax << 1)
int32_t temp0_74[0x4] = _mm_subs_epi8(temp0_56, result_2)
int32_t temp0_75[0x4] = _mm_adds_epi8(temp0_55, result_2)
result_14 = _mm_subs_epi8(result_7 ^ result_9, result_4) ^ result_9
result_5 = _mm_adds_epi8(result_11 ^ result_9, result_4) ^ result_9
result_4 = _mm_adds_epi8(result_6 ^ result_9, result) ^ result_9
result_2 = _mm_subs_epi8(result_15 ^ result_9, result) ^ result_9
result_1 = temp0_74 ^ result_9
result_8 = temp0_75 ^ result_9
*rsi_4 = result_8[0].q
*rdi_4 = *rdi_4 | result_8[0].q << 0x40
*(rsi_4 + rax) = result_1[0].q
*(rdi_4 + rax) = *(rdi_4 + rax) | result_1[0].q << 0x40
int64_t rdx_3 = rax * 3
*(rsi_4 + (rax << 1)) = result_14[0].q
*(rdi_4 + (rax << 1)) = *(rdi_4 + (rax << 1)) | result_14[0].q << 0x40
*(rsi_4 + rax_1) = result_5[0].q
*(rdi_4 + rax_1) = *(rdi_4 + rax_1) | result_5[0].q << 0x40
*(rsi_4 + (rax_1 << 1)) = result_4[0].q
*(rdi_4 + (rax_1 << 1)) = *(rdi_4 + (rax_1 << 1)) | result_4[0].q << 0x40
*(rsi_4 + rdx_3) = result_2[0].q
*(rdi_4 + rdx_3) = *(rdi_4 + rdx_3) | result_2[0].q << 0x40
*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result
