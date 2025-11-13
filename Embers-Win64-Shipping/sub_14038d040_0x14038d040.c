// 函数: sub_14038d040
// 地址: 0x14038d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result[0x10] = *arg3
int64_t r8 = arg2 * 3
int128_t* r9 = &(*arg1)[arg2 << 3]
int32_t zmm1[0x4] = data_14427e2d0
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(result, data_14427e2e0)
int32_t zmm3[0x4] = _mm_avg_epu8(temp0, result)
result = _mm_avg_epu8(_mm_shuffle_epi8(result, zmm1), 
    _mm_sub_epi8(zmm3, (temp0 ^ result) & data_14427e270))
int32_t i_1 = 2
int32_t i

do
    *arg1 = result
    *r9 = *r9 | result[0].q << 0x40
    result = _mm_shuffle_epi8(result, zmm1)
    *(arg1 + arg2) = result
    *(r9 + arg2) = *(r9 + arg2) | result[0].q << 0x40
    result = _mm_shuffle_epi8(result, zmm1)
    *(arg1 + (arg2 << 1)) = result
    *(r9 + (arg2 << 1)) = *(r9 + (arg2 << 1)) | result[0].q << 0x40
    result = _mm_shuffle_epi8(result, zmm1)
    *(arg1 + r8) = result
    *(r9 + r8) = *(r9 + r8) | result[0].q << 0x40
    result = _mm_shuffle_epi8(result, zmm1)
    arg1 = &(*arg1)[arg2 << 2]
    r9 += arg2 << 2
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 8) = *(arg1 + 8) | result[0].q << 0x40
*(arg1 + arg2 + 8) = *(arg1 + arg2 + 8) | result[0].q << 0x40
*(arg1 + (arg2 << 1) + 8) = *(arg1 + (arg2 << 1) + 8) | result[0].q << 0x40
*(arg1 + r8 + 8) = *(arg1 + r8 + 8) | result[0].q << 0x40
void* rcx = &(*arg1)[arg2 << 2]
*(rcx + 8) = *(rcx + 8) | result[0].q << 0x40
*(rcx + arg2 + 8) = *(rcx + arg2 + 8) | result[0].q << 0x40
*(rcx + (arg2 << 1) + 8) = *(rcx + (arg2 << 1) + 8) | result[0].q << 0x40
*(rcx + r8 + 8) = *(rcx + r8 + 8) | result[0].q << 0x40
return result
