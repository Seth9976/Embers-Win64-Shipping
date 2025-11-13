// 函数: sub_14038dd70
// 地址: 0x14038dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = zx.o(*arg4)
int64_t r8 = arg2 * 3
uint128_t zmm1 = __pshufb_xmmdq_memdq(zmm3, data_14427e2c0)
int32_t temp0_1[0x4] = __pshufb_xmmdq_memdq(zmm3, data_14427e2a0)
uint128_t zmm2 = __pshufb_xmmdq_memdq(zmm3, data_14427e2b0)
zmm3 =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(temp0_1, zmm1), (zmm1 ^ temp0_1) & data_14427e270), zmm2)
int32_t temp0_7[0x4] = _mm_unpacklo_epi8(_mm_avg_epu8(temp0_1, zmm2), zmm3.q)
*arg1 = temp0_7[0].q
int32_t result[0x4] = _mm_bsrli_si128(temp0_7, 2)
*(arg1 + arg2) = result[0].q
result = _mm_bsrli_si128(result, 2)
*(arg1 + (arg2 << 1)) = result[0].q
result = _mm_bsrli_si128(result, 2)
*(arg1 + r8) = result[0].q
void* rcx = arg1 + (arg2 << 2)
result = _mm_bsrli_si128(_mm_shufflehi_epi16(result, 0), 2)
*rcx = result[0].q
result = _mm_bsrli_si128(result, 2)
*(rcx + arg2) = result[0].q
result = _mm_bsrli_si128(result, 2)
*(rcx + (arg2 << 1)) = result[0].q
result = _mm_bsrli_si128(result, 2)
*(rcx + r8) = result[0].q
return result
