// 函数: sub_1403be280
// 地址: 0x1403be280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg1 + (arg3 << 2)
uint128_t result_1 = zx.o(*(arg1 + (arg3 << 1)))
uint128_t zmm2 = zx.o(*r9)
uint128_t zmm3 = zx.o(*(r9 + (arg3 << 1)))
uint128_t result = _mm_add_epi16(zx.o(*arg1), result_1)
zmm3 = _mm_sub_epi16(zmm3, zmm2)
uint128_t result_2 = _mm_srai_epi16(_mm_sub_epi16(zx.o(result.q), zmm3), 1)
uint128_t zmm5 = _mm_sub_epi16(zx.o(result_2.q), result_1)
result_2 = _mm_sub_epi16(result_2, zmm2)
result = _mm_sub_epi16(result, result_2)
zmm3 = _mm_add_epi16(zmm3, zmm5)
result = _mm_unpacklo_epi16(result, result_2.q)
zmm3 = _mm_unpacklo_epi16(zmm3, zmm5.q)
result_2 = result
result = _mm_unpacklo_epi32(result, zmm3.q)
result_2 = _mm_unpackhi_epi32(result_2, zmm3.q)
uint128_t temp0_12 = _mm_bsrli_si128(result, 8)
uint128_t temp0_13 = _mm_bsrli_si128(result_2, 8)
result = _mm_add_epi16(result, temp0_12)
zmm5 = _mm_sub_epi16(temp0_13, result_2)
result_1 = _mm_srai_epi16(_mm_sub_epi16(zx.o(result.q), zmm5), 1)
zmm2 = _mm_sub_epi16(zx.o(result_1.q), temp0_12)
result_1 = _mm_sub_epi16(result_1, result_2)
result = _mm_sub_epi16(result, result_1)
zmm5 = _mm_add_epi16(zmm5, zmm2)
result = _mm_unpacklo_epi16(result, result_1.q)
zmm5 = _mm_unpacklo_epi16(zmm5, zmm2.q)
result_1 = result
result = _mm_unpacklo_epi32(result, zmm5.q)
result_1 = _mm_unpackhi_epi32(result_1, zmm5.q)
result = _mm_slli_epi16(result, 2)
result_1 = _mm_slli_epi16(result_1, 2)
*arg2 = result
arg2[1] = result_1
return result
