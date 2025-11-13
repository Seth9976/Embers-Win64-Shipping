// 函数: sub_1403b0f90
// 地址: 0x1403b0f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int32_t zmm10[0x4] = *u"@@@@@@@@"
uint16_t temp0_2[0x8] = _mm_shufflehi_epi16(_mm_shufflelo_epi16(temp0, 0), 0xaa)
uint16_t temp0_4[0x8] = _mm_shufflehi_epi16(_mm_shufflelo_epi16(temp0, 0x55), 0xff)
int32_t i_1 = arg5 - 1
uint8_t result[0x10]
char zmm1[0x10]
int32_t zmm2[0x4]
int32_t zmm3[0x4]
int32_t i

do
    zmm4 = *(arg1 - 3)
    int32_t zmm5[0x4] = *(arg1 + arg2 - 3)
    zmm1 = _mm_unpackhi_epi8(zmm4, zmm4[0].q)
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm4[0].q)
    int32_t temp0_7[0x4] = _mm_unpackhi_epi8(zmm5, zmm5[0].q)
    int32_t temp0_8[0x4] = _mm_unpacklo_epi8(zmm5, zmm5[0].q)
    result = _mm_maddubs_epi16(zmm4 u>> 8 | zmm1 << 0x78, temp0_2)
    char temp0_10[0x10] = _mm_maddubs_epi16(zmm4 u>> 0x28 | zmm1 << 0x58, temp0_4)
    zmm2 = _mm_maddubs_epi16(temp0_8 u>> 8 | temp0_7 << 0x78, temp0_2)
    zmm3 = _mm_maddubs_epi16(temp0_8 u>> 0x28 | temp0_7 << 0x58, temp0_4)
    zmm4 = _mm_unpackhi_epi64(result, zmm2[0].q)
    result = _mm_unpacklo_epi64(result, zmm2[0].q)
    int32_t temp0_15[0x4] = _mm_unpackhi_epi64(temp0_10, zmm3[0].q)
    zmm1 = _mm_unpacklo_epi64(temp0_10, zmm3[0].q)
    result = _mm_adds_epi16(result, zmm4)
    zmm1 = _mm_adds_epi16(zmm1, temp0_15)
    zmm4 = zx.o(*arg3)
    zmm5 = zx.o(*(arg3 + arg4))
    result = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(result, zmm1), zmm10), 7)
    result = _mm_packus_epi16(result, result)
    zmm1 = _mm_bsrli_si128(result, 4)
    result = _mm_avg_epu8(result, zmm4)
    zmm1 = _mm_avg_epu8(zmm1, zmm5)
    *arg3 = result[0].d
    *(arg3 + arg4) = zmm1[0].d
    arg1 += arg2 * 2
    arg3 += arg4 << 1
    i = i_1
    i_1 -= 2
while (i s> 2)

if (i == 2)
    zmm4 = *(arg1 - 3)
    zmm1 = _mm_unpackhi_epi8(zmm4, zmm4[0].q)
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm4[0].q)
    result = _mm_maddubs_epi16(zmm4 u>> 8 | zmm1 << 0x78, temp0_2)
    char temp0_29[0x10] = _mm_maddubs_epi16(zmm4 u>> 0x28 | zmm1 << 0x58, temp0_4)
    zmm2 = _mm_bsrli_si128(result, 8)
    zmm3 = _mm_bsrli_si128(temp0_29, 8)
    result = _mm_srai_epi16(
        _mm_adds_epi16(
            _mm_adds_epi16(_mm_adds_epi16(result, zmm2), _mm_adds_epi16(temp0_29, zmm3)), zmm10), 
        7)
    result = _mm_avg_epu8(_mm_packus_epi16(result, result), zx.o(*arg3))
    *arg3 = result[0].d

return result
