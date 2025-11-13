// 函数: sub_14038de20
// 地址: 0x14038de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2 * 3
int128_t result = *arg4
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(result, data_14427e2d0)
int32_t temp0_1[0x4] = __pshufb_xmmdq_memdq(result, data_14427e2e0)
int128_t zmm3 = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(result, temp0_1), (temp0_1 ^ result) & data_14427e270), temp0)
int32_t zmm1[0x4] = _mm_avg_epu8(temp0, result)
int32_t zmm4[0x4] = _mm_unpackhi_epi8(zmm1, zmm3.q)
int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm1, zmm3.q)
*arg1 = temp0_7
*(arg1 + arg2) = temp0_7 u>> 0x10 | zmm4 << 0x70
*(arg1 + (arg2 << 1)) = temp0_7 u>> 0x20 | zmm4 << 0x60
*(arg1 + r8) = temp0_7 u>> 0x30 | zmm4 << 0x50
int128_t* rcx = &(*arg1)[arg2]
*rcx = temp0_7 u>> 0x40 | zmm4 << 0x40
*(rcx + arg2) = temp0_7 u>> 0x50 | zmm4 << 0x30
*(rcx + (arg2 << 1)) = temp0_7 u>> 0x60 | zmm4 << 0x20
*(rcx + r8) = temp0_7 u>> 0x70 | zmm4 << 0x10
int32_t i_1 = 2
result = data_14427e2e0
int32_t i

do
    rcx += arg2 << 2
    *rcx = zmm4
    int32_t temp0_8[0x4] = _mm_shuffle_epi8(zmm4, result)
    *(rcx + arg2) = temp0_8
    int32_t temp0_9[0x4] = _mm_shuffle_epi8(temp0_8, result)
    *(rcx + (arg2 << 1)) = temp0_9
    int32_t temp0_10[0x4] = _mm_shuffle_epi8(temp0_9, result)
    *(rcx + r8) = temp0_10
    zmm4 = _mm_shuffle_epi8(temp0_10, result)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
