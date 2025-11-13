// 函数: sub_142a16440
// 地址: 0x142a16440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q((arg2 * 3).d)
uint128_t zmm8 = _mm_unpacklo_epi64(zx.o(*(arg1 - r11)), *(arg1 - sx.q((arg2 << 2).d)))
int64_t rcx = sx.q((arg2 * 2).d)
int64_t rax_7 = sx.q(arg2.d)
int64_t* r10_2 = arg1 - rcx
int128_t* rbx = rax_7 + arg1
int32_t zmm4[0x4] = zx.o(*(rcx + arg1))
int64_t* rdx_1 = arg1 - rax_7
uint128_t zmm6 = _mm_unpacklo_epi64(zx.o(*r10_2), *(rax_7 + arg1))
uint128_t result_1 = _mm_unpacklo_epi64(zx.o(*rdx_1), *arg1)
int32_t temp0_3[0x4] = _mm_unpacklo_epi64(zmm4, *(r11 + arg1))
uint128_t result_2 = result_1
uint128_t zmm9 = _mm_unpacklo_epi64(result_1, zmm6.q)
uint128_t zmm3 = _mm_subs_epu8(zmm6, result_1)
result_1 = _mm_subs_epu8(result_1, zmm6)
result_2 = _mm_unpackhi_epi64(result_2, zmm6.q)
zmm3 |= result_1
uint128_t zmm5 = _mm_subs_epu8(zmm9, result_2)
result_1 = _mm_unpacklo_epi64(zmm6, zmm8.q)
zmm5 |= _mm_subs_epu8(result_2, zmm9)
zmm6 = _mm_unpacklo_epi64(_mm_bsrli_si128(zmm6, 8), temp0_3[0].q)
uint128_t zmm11 = _mm_max_epu8(zmm3, _mm_bsrli_si128(zmm3, 8))
int32_t temp0_15[0x4] = _mm_unpackhi_epi8(zmm5, zmm5.q)
uint128_t result = _mm_unpacklo_epi8(zx.o(*arg5), 0)
uint128_t zmm2 = _mm_subs_epu8(zmm6, temp0_3)
zmm11 = _mm_unpacklo_epi8(zmm11, 0)
int32_t temp0_19[0x4] = _mm_subs_epu8(temp0_3, zmm6)
zmm11 = _mm_cmpgt_epi16(zmm11, result)
int32_t zmm7[0x4] = _mm_srli_epi16(temp0_15, 9)
zmm7 = _mm_packs_epi16(zmm7, zmm7)
result = _mm_subs_epu8(result_1, zmm8)
zmm11 = _mm_packs_epi16(zmm11, zmm11)
result |= _mm_subs_epu8(zmm8, result_1)
zmm5 = _mm_adds_epu8(zmm5, zmm5)
result = _mm_max_epu8(result, zmm3)
int32_t temp0_28[0x4] = _mm_adds_epu8(zmm7, zmm5)
zmm2 = _mm_max_epu8(zmm2 | temp0_19, result)
result_1 = zx.o(*arg3)
zmm3 = data_143600c70
zmm4 = zmm3 ^ result_2
zmm2 = _mm_max_epu8(zmm2, _mm_bsrli_si128(zmm2, 8))
result_1 = _mm_unpacklo_epi64(result_1, *arg4)
int32_t temp0_34[0x4] = _mm_subs_epu8(_mm_unpacklo_epi64(temp0_28, zmm2.q), result_1)
zmm2 = zmm3 ^ zmm9
zmm7 = _mm_cmpeq_epi8(temp0_34, zx.o(0))
char temp0_36[0x10] = _mm_cmpeq_epi8(zx.o(0), zx.o(0))
result = _mm_subs_epi8(zmm2, zmm4)
result_1 = _mm_subs_epi8(
    _mm_subs_epi8(_mm_subs_epi8(_mm_bsrli_si128(result, 8) & zmm11, result), result), result)
    & _mm_bsrli_si128(zmm7, 8) & zmm7
result = _mm_adds_epi8(data_143600c30, _mm_unpacklo_epi64(result_1, result_1.q))
result_1 = _mm_unpacklo_epi8(result, result.q)
result = _mm_srai_epi16(_mm_unpackhi_epi8(result, result.q), 0xb)
result_1 = _mm_packs_epi16(_mm_srai_epi16(result_1, 0xb), result)
result = _mm_subs_epi8(result_1, temp0_36)
result = _mm_srai_epi16(_mm_unpacklo_epi8(result, result.q), 9)
zmm11 &= not.o(_mm_packs_epi16(result, result))
result = result_1
result_1 = _mm_unpackhi_epi64(result_1, zmm11.q)
result = _mm_unpacklo_epi64(result, zmm11.q)
result_1 = _mm_adds_epi8(result_1, zmm2) ^ zmm3
*r10_2 = *r10_2 | result_1.q << 0x40
zmm4 = _mm_subs_epi8(zmm4, result) ^ zmm3
*rdx_1 = result_1.q
*arg1 = zmm4[0].q
*rbx = *rbx | zmm4[0].q << 0x40
return result
