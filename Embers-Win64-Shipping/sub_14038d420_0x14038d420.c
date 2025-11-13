// 函数: sub_14038d420
// 地址: 0x14038d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result[0x10] = *arg3
int32_t zmm7[0x4] = arg3[1]
int32_t zmm1[0x4] = data_14427e2d0
int64_t r8 = arg2 * 3
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(zmm7, data_14427e2e0)
int32_t temp0_1[0x4] = _mm_shuffle_epi8(zmm7, zmm1)
int32_t zmm4[0x4] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(zmm7, temp0), (temp0 ^ zmm7) & data_14427e270), temp0_1)
int32_t zmm6[0x4] = result u>> 8 | zmm7 << 0x78
int128_t zmm5 = result u>> 0x10 | zmm7 << 0x70
zmm7 = _mm_avg_epu8(zmm7, temp0_1)
int32_t zmm2[0x4] =
    _mm_avg_epu8(_mm_sub_epi8(_mm_avg_epu8(result, zmm5), (zmm5 ^ result) & data_14427e270), zmm6)
result = _mm_avg_epu8(result, zmm6)
int32_t i_1 = 8
int32_t i

do
    *arg1 = result
    arg1[1] = zmm7
    *(arg1 + arg2) = zmm2
    *(arg1 + arg2 + 0x10) = zmm4
    int32_t zmm3[0x4] = result u>> 8 | zmm7 << 0x78
    zmm5 = zmm2 u>> 8 | zmm4 << 0x78
    int32_t temp0_10[0x4] = _mm_shuffle_epi8(zmm7, zmm1)
    int32_t temp0_11[0x4] = _mm_shuffle_epi8(zmm4, zmm1)
    *(arg1 + (arg2 << 1)) = zmm3
    *(arg1 + (arg2 << 1) + 0x10) = temp0_10
    *(arg1 + r8) = zmm5
    *(arg1 + r8 + 0x10) = temp0_11
    result = zmm3 u>> 8 | temp0_10 << 0x78
    zmm2 = zmm5 u>> 8 | temp0_11 << 0x78
    zmm7 = _mm_shuffle_epi8(temp0_10, zmm1)
    zmm4 = _mm_shuffle_epi8(temp0_11, zmm1)
    arg1 = &(*arg1)[arg2 << 2]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
