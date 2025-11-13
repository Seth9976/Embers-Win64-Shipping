// 函数: sub_14038d6b0
// 地址: 0x14038d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0[0x4] = *arg4
int128_t zmm7 = *(arg3 - 1)
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(zmm7, data_14427e350)
int128_t zmm5 = temp0 u>> 0x78 | zmm0 << 8
int128_t zmm3 = temp0 u>> 0x70 | zmm0 << 0x10
uint8_t temp0_3[0x10] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(zmm0, zmm3), (zmm3 ^ zmm0) & data_14427e270), zmm5)
__pshufb_xmmdq_memdq(zmm0, data_14427e2d0)
zmm5 = _mm_avg_epu8(zmm5, zmm0)
int32_t result[0x4] = _mm_unpacklo_epi8(temp0_3, zmm5.q)
uint8_t zmm4[0x10] = _mm_unpackhi_epi8(temp0_3, zmm5.q)
zmm3 = __pshufb_xmmdq_memdq(zmm7, data_14427e2d0)
zmm5 = __pshufb_xmmdq_memdq(zmm7, data_14427e2e0)
int32_t zmm1[0x4] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(zmm7, zmm5), (zmm5 ^ zmm7) & data_14427e270), zmm3)
int32_t temp0_12[0x4] = __pshufb_xmmdq_memdq(result, data_14427e350)
int64_t r8 = arg2 * 3
*arg1 = temp0_12 u>> 0x70 | zmm1 << 0x10
*(arg1 + arg2) = temp0_12 u>> 0x60 | zmm1 << 0x20
*(arg1 + (arg2 << 1)) = temp0_12 u>> 0x50 | zmm1 << 0x30
*(arg1 + r8) = temp0_12 u>> 0x40 | zmm1 << 0x40
void* rcx = &(*arg1)[arg2]
*rcx = temp0_12 u>> 0x30 | zmm1 << 0x50
*(rcx + arg2) = temp0_12 u>> 0x20 | zmm1 << 0x60
*(rcx + (arg2 << 1)) = temp0_12 u>> 0x10 | zmm1 << 0x70
zmm4 = __pshufb_xmmdq_memdq(zmm4, data_14427e350)
*(rcx + r8) = temp0_12
void* rcx_1 = rcx + (arg2 << 2)
*rcx_1 = zmm4 u>> 0x70 | temp0_12 << 0x10
*(rcx_1 + arg2) = zmm4 u>> 0x60 | temp0_12 << 0x20
*(rcx_1 + (arg2 << 1)) = zmm4 u>> 0x50 | temp0_12 << 0x30
*(rcx_1 + r8) = zmm4 u>> 0x40 | temp0_12 << 0x40
uint8_t (* rcx_2)[0x10] = rcx_1 + (arg2 << 2)
*rcx_2 = zmm4 u>> 0x30 | temp0_12 << 0x50
*(rcx_2 + arg2) = zmm4 u>> 0x20 | temp0_12 << 0x60
*(rcx_2 + (arg2 << 1)) = zmm4 u>> 0x10 | temp0_12 << 0x70
*(rcx_2 + r8) = zmm4
return result
