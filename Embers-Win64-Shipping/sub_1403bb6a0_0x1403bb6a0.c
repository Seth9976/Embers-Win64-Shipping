// 函数: sub_1403bb6a0
// 地址: 0x1403bb6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm6[0x8]
int16_t arg_8[0x8] = zmm6
uint16_t zmm7[0x8]
uint16_t arg_18[0x8] = zmm7
int32_t zmm0[0x4] = *arg3
int32_t zmm4[0x4] = arg3[1]
uint128_t zmm2 = _mm_unpacklo_epi8(zx.o(*(arg3 - 1)), 0)
int32_t temp0_1[0x4] = _mm_unpackhi_epi8(zmm0, 0)
int32_t temp0_2[0x4] = _mm_unpackhi_epi8(zmm4, 0)
int32_t temp0_3[0x4] = _mm_unpacklo_epi8(zmm0, 0)
int32_t temp0_4[0x4] = _mm_unpacklo_epi8(zmm4, 0)
zmm2 = _mm_shufflelo_epi16(zmm2, 0)
int64_t i_1 = -0x10
zmm2 = _mm_unpacklo_epi64(zmm2, zmm2.q)
int32_t result[0x4] = _mm_sub_epi16(temp0_3, zmm2)
int32_t temp0_7[0x4] = _mm_sub_epi16(temp0_1, zmm2)
int32_t temp0_8[0x4] = _mm_sub_epi16(temp0_4, zmm2)
int32_t temp0_9[0x4] = _mm_sub_epi16(temp0_2, zmm2)
int64_t i

do
    zmm2 = _mm_unpacklo_epi8(zx.o(*(arg4 + 0x20 + (i_1 << 1))), 0)
    uint16_t temp0_11[0x8] = _mm_shufflelo_epi16(zmm2, 0x55)
    zmm2 = _mm_shufflelo_epi16(zmm2, 0)
    zmm2 = _mm_unpacklo_epi64(zmm2, zmm2.q)
    zmm7 = _mm_unpacklo_epi64(temp0_11, temp0_11[0].q)
    int16_t temp0_15[0x8] = _mm_add_epi16(zmm2, temp0_7)
    *arg1 = _mm_packus_epi16(_mm_add_epi16(zmm2, result), temp0_15)
    int16_t temp0_18[0x8] = _mm_add_epi16(zmm2, temp0_9)
    arg1[1] = _mm_packus_epi16(_mm_add_epi16(zmm2, temp0_8), temp0_18)
    int16_t temp0_21[0x8] = _mm_add_epi16(zmm7, temp0_7)
    *(arg1 + arg2) = _mm_packus_epi16(_mm_add_epi16(zmm7, result), temp0_21)
    int16_t temp0_24[0x8] = _mm_add_epi16(zmm7, temp0_9)
    *(arg1 + arg2 + 0x10) = _mm_packus_epi16(_mm_add_epi16(zmm7, temp0_8), temp0_24)
    arg1 = &(*arg1)[arg2]
    i = i_1
    i_1 += 1
while (i != -1)
return result
