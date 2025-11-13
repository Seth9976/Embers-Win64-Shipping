// 函数: sub_14038d2f0
// 地址: 0x14038d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = zx.o(*arg3)
int64_t r8 = arg2 * 3
uint128_t zmm1 = __pshufb_xmmdq_memdq(zmm3, data_14427e2c0)
uint128_t result = __pshufb_xmmdq_memdq(zmm3, data_14427e2a0)
uint128_t zmm2 = __pshufb_xmmdq_memdq(zmm3, data_14427e2b0)
zmm3 = __pshufb_xmmdq_memdq(zmm3, data_14427e2a0)
int32_t zmm4[0x4] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(result, zmm1), (zmm1 ^ result) & data_14427e270), zmm2)
zmm3 = _mm_avg_epu8(zmm3, zmm2)
*arg1 = zmm3.q
*(arg1 + arg2) = zmm4[0].q
uint128_t temp0_8 = _mm_bsrli_si128(zmm3, 1)
zmm4 = _mm_bsrli_si128(zmm4, 1)
*(arg1 + (arg2 << 1)) = temp0_8.q
*(arg1 + r8) = zmm4[0].q
void* rcx = arg1 + (arg2 << 2)
uint128_t temp0_10 = _mm_bsrli_si128(temp0_8, 1)
zmm4 = _mm_bsrli_si128(zmm4, 1)
*rcx = temp0_10.q
*(rcx + arg2) = zmm4[0].q
uint128_t temp0_12 = _mm_bsrli_si128(temp0_10, 1)
zmm4 = _mm_bsrli_si128(zmm4, 1)
*(rcx + (arg2 << 1)) = temp0_12.q
*(rcx + r8) = zmm4[0].q
return result
