// 函数: sub_1403bac80
// 地址: 0x1403bac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(*arg4)
uint128_t zmm4 = _mm_unpacklo_epi8(result, result.q)
uint128_t temp0_2 = _mm_bsrli_si128(_mm_unpacklo_epi16(zmm4, zmm4.q), 0xc)
result = _mm_unpacklo_epi32(result, temp0_2.q)
uint128_t temp0_4 = _mm_bsrli_si128(result, 1)
uint128_t temp0_5 = _mm_bsrli_si128(result, 2)
int32_t zmm3[0x4] = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(result, temp0_5), (temp0_5 ^ result) & data_14427efa0), temp0_4)
uint128_t zmm1 = _mm_unpacklo_epi8(_mm_avg_epu8(temp0_4, result), zmm3[0].q)
*arg1 = zmm1.d
zmm1 = _mm_srli_epi64(zmm1, 0x10)
*(arg1 + arg2) = zmm1.d
int32_t* rcx = arg1 + (arg2 << 1)
*rcx = _mm_srli_epi64(zmm1, 0x10).d
*(rcx + arg2) = temp0_2.d
return result
