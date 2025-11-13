// 函数: sub_14038d530
// 地址: 0x14038d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result =
    __pshufb_xmmdq_memdq(_mm_unpacklo_epi32(zx.o(*arg4), zx.q(*(arg3 - 1))), data_14427e2f0)
uint128_t temp0_2 = _mm_bsrli_si128(result, 1)
uint128_t temp0_3 = _mm_bsrli_si128(result, 2)
int32_t temp0_9[0x4] = __pshufb_xmmdq_memdq(
    _mm_unpacklo_epi64(
        _mm_avg_epu8(
            _mm_sub_epi8(_mm_avg_epu8(result, temp0_3), (temp0_3 ^ result) & data_14427e270), 
            temp0_2), 
        _mm_avg_epu8(temp0_2, result).q), 
    data_14427e300)
*(arg1 + arg2 * 3) = temp0_9[0]
int32_t zmm3[0x4] = _mm_bsrli_si128(temp0_9, 2)
*(arg1 + (arg2 << 1)) = zmm3[0]
zmm3 = _mm_bsrli_si128(zmm3, 2)
*(arg1 + arg2) = zmm3[0]
*arg1 = _mm_bsrli_si128(zmm3, 2)[0]
return result
