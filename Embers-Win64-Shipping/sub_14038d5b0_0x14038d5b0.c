// 函数: sub_14038d5b0
// 地址: 0x14038d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg4 | *(arg3 - 1) << 0x40
uint128_t zmm1 = __pshufb_xmmdq_memdq(zmm0, data_14427e310)
uint128_t zmm2 = __pshufb_xmmdq_memdq(zmm0, data_14427e320)
uint128_t zmm3 = __pshufb_xmmdq_memdq(zmm0, data_14427e330)
zmm0 = __pshufb_xmmdq_memdq(zmm0, data_14427e340)
uint128_t temp0_4 = _mm_bsrli_si128(zmm0, 1)
uint128_t temp0_5 = _mm_bsrli_si128(zmm0, 2)
uint128_t zmm6 = _mm_avg_epu8(zmm1, zmm2)
uint8_t temp0_9[0x10] = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(zmm0, temp0_5), (temp0_5 ^ zmm0) & data_14427e270), temp0_4)
zmm6 = _mm_unpacklo_epi8(zmm6, 
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(zmm1, zmm3), (zmm3 ^ zmm1) & data_14427e270), zmm2).q)
int64_t r8 = arg2 * 3
*(arg1 + r8) = *(arg1 + r8) | zmm6.q << 0x40
zmm0 = zmm6 u>> 0x50 | temp0_9 << 0x30
*(arg1 + (arg2 << 1)) = zmm0.q
uint128_t temp0_14 = _mm_bsrli_si128(zmm0, 2)
*(arg1 + arg2) = temp0_14.q
uint128_t result = _mm_bsrli_si128(temp0_14, 2)
*arg1 = result.q
int64_t* rcx = arg1 + (arg2 << 2)
*(rcx + r8) = zmm6.q
uint128_t temp0_15 = _mm_bsrli_si128(zmm6, 2)
*(rcx + (arg2 << 1)) = temp0_15.q
uint128_t temp0_16 = _mm_bsrli_si128(temp0_15, 2)
*(rcx + arg2) = temp0_16.q
*rcx = _mm_bsrli_si128(temp0_16, 2).q
return result
