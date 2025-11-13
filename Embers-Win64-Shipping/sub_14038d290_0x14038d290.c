// 函数: sub_14038d290
// 地址: 0x14038d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = zx.o(*arg3)
uint128_t zmm1 = __pshufb_xmmdq_memdq(zmm3, data_14427e290)
uint128_t zmm2 = __pshufb_xmmdq_memdq(zmm3, data_14427e280)
int32_t zmm4[0x4] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(zmm3, zmm1), (zmm1 ^ zmm3) & data_14427e270), zmm2)
zmm3 = _mm_avg_epu8(zmm3, zmm2)
*arg1 = zmm3.d
*(arg1 + arg2) = zmm4[0]
int32_t* rcx = arg1 + (arg2 << 1)
uint128_t temp0_6 = _mm_bsrli_si128(zmm3, 1)
zmm4 = _mm_bsrli_si128(zmm4, 1)
*rcx = temp0_6.d
*(rcx + arg2) = zmm4[0]
