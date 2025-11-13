// 函数: sub_14038d3a0
// 地址: 0x14038d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result[0x10] = *arg3
int32_t zmm1[0x4] = data_14427e2d0
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(result, data_14427e2e0)
int32_t temp0_1[0x4] = _mm_shuffle_epi8(result, zmm1)
int32_t zmm4[0x4] = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(result, temp0), (temp0 ^ result) & data_14427e270), temp0_1)
result = _mm_avg_epu8(result, temp0_1)
int32_t i_1 = 4
int32_t i

do
    *arg1 = result
    *(arg1 + arg2) = zmm4
    result = _mm_shuffle_epi8(result, zmm1)
    int32_t temp0_7[0x4] = _mm_shuffle_epi8(zmm4, zmm1)
    *(arg1 + (arg2 << 1)) = result
    *(arg1 + arg2 * 3) = temp0_7
    result = _mm_shuffle_epi8(result, zmm1)
    zmm4 = _mm_shuffle_epi8(temp0_7, zmm1)
    arg1 = &(*arg1)[arg2 << 2]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
