// 函数: sub_1403babe0
// 地址: 0x1403babe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t zmm1[0x10] = *arg3
uint128_t temp0 = _mm_slli_si128(zmm1, 1)
uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 1)
int64_t r8 = arg2 * 3
int32_t zmm3[0x4] = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(temp0, temp0_1), (temp0_1 ^ temp0) & data_14427efa0), zmm1)
uint128_t result = _mm_unpackhi_epi8(temp0, temp0.q)
result = _mm_unpacklo_epi16(result, result.q)
result = _mm_unpacklo_epi32(result, result.q)
zmm3 = _mm_bsrli_si128(_mm_unpacklo_epi64(zmm3, result.q), 1)
*arg1 = zmm3[0].q
zmm3 = _mm_bsrli_si128(zmm3, 1)
*(arg1 + arg2) = zmm3[0].q
zmm3 = _mm_bsrli_si128(zmm3, 1)
*(arg1 + (arg2 << 1)) = zmm3[0].q
zmm3 = _mm_bsrli_si128(zmm3, 1)
*(arg1 + r8) = zmm3[0].q
int64_t* rcx = arg1 + (arg2 << 2)
zmm3 = _mm_bsrli_si128(zmm3, 1)
*rcx = zmm3[0].q
zmm3 = _mm_bsrli_si128(zmm3, 1)
*(rcx + arg2) = zmm3[0].q
zmm3 = _mm_bsrli_si128(zmm3, 1)
*(rcx + (arg2 << 1)) = zmm3[0].q
*(rcx + r8) = _mm_bsrli_si128(zmm3, 1)[0].q
return result
