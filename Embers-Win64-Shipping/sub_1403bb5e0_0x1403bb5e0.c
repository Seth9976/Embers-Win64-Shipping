// 函数: sub_1403bb5e0
// 地址: 0x1403bb5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t zmm6[0x8]
uint16_t arg_8[0x8] = zmm6
int16_t zmm7[0x8]
int16_t arg_18[0x8] = zmm7
int32_t zmm0[0x4] = *arg3
int32_t temp0[0x4] = _mm_unpackhi_epi8(arg3[-1], 0)
int32_t temp0_1[0x4] = _mm_unpackhi_epi8(zmm0, 0)
int32_t temp0_2[0x4] = _mm_unpacklo_epi8(zmm0, 0)
int64_t i_1 = -8
int32_t zmm2[0x4] = _mm_shufflehi_epi16(temp0, 0xff)
int32_t zmm3[0x4] = *arg4
int32_t temp0_4[0x4] = _mm_unpackhi_epi64(zmm2, zmm2[0].q)
int32_t result[0x4] = _mm_sub_epi16(temp0_2, temp0_4)
int32_t temp0_5[0x4] = _mm_sub_epi16(temp0_1, temp0_4)
int32_t zmm5[0x4] = _mm_unpackhi_epi8(zmm3, 0)
zmm3 = _mm_unpacklo_epi8(zmm3, 0)
int64_t i

do
    uint16_t temp0_8[0x8] = _mm_shufflelo_epi16(zmm3, 0)
    zmm7 = _mm_shufflelo_epi16(zmm5, 0)
    zmm6 = _mm_unpacklo_epi64(temp0_8, temp0_8[0].q)
    zmm7 = _mm_unpacklo_epi64(zmm7, zmm7[0].q)
    int16_t temp0_12[0x8] = _mm_add_epi16(zmm6, result)
    zmm6 = _mm_add_epi16(zmm6, temp0_5)
    zmm5 = _mm_bsrli_si128(zmm5, 2)
    *arg1 = _mm_packus_epi16(temp0_12, zmm6)
    int16_t temp0_16[0x8] = _mm_add_epi16(zmm7, result)
    int16_t temp0_17[0x8] = _mm_add_epi16(zmm7, temp0_5)
    zmm3 = _mm_bsrli_si128(zmm3, 2)
    *(arg1 + (arg2 << 3)) = _mm_packus_epi16(temp0_16, temp0_17)
    i = i_1
    i_1 += 1
    arg1 += arg2
while (i != -1)
return result
