// 函数: sub_1403b0df0
// 地址: 0x1403b0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int32_t zmm10[0x4] = *u"@@@@@@@@"
uint16_t temp0_2[0x8] = _mm_shufflehi_epi16(_mm_shufflelo_epi16(temp0, 0), 0xaa)
uint16_t temp0_4[0x8] = _mm_shufflehi_epi16(_mm_shufflelo_epi16(temp0, 0x55), 0xff)
int32_t i_1 = arg5 - 1
int32_t result[0x4]
int128_t zmm1
char zmm3[0x10]
int32_t i

do
    zmm4 = *(arg1 - 3)
    char zmm5[0x10] = *(arg1 + arg2 - 3)
    zmm1 = _mm_unpackhi_epi8(zmm4, zmm4[0].q)
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm4[0].q)
    zmm3 = _mm_unpackhi_epi8(zmm5, zmm5[0].q)
    zmm5 = _mm_unpacklo_epi8(zmm5, zmm5[0].q)
    result = _mm_maddubs_epi16(zmm4 u>> 8 | zmm1 << 0x78, temp0_2)
    zmm1 = _mm_maddubs_epi16(zmm4 u>> 0x28 | zmm1 << 0x58, temp0_4)
    char temp0_11[0x10] = _mm_maddubs_epi16(zmm5 u>> 8 | zmm3 << 0x78, temp0_2)
    char temp0_12[0x10] = _mm_maddubs_epi16(zmm5 u>> 0x28 | zmm3 << 0x58, temp0_4)
    zmm4 = _mm_unpackhi_epi64(result, temp0_11[0].q)
    int32_t temp0_14[0x4] = _mm_unpacklo_epi64(result, temp0_11[0].q)
    zmm5 = _mm_unpackhi_epi64(zmm1, temp0_12[0].q)
    zmm1 = _mm_unpacklo_epi64(zmm1, temp0_12[0].q)
    result = _mm_srai_epi16(
        _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_14, zmm4), _mm_adds_epi16(zmm1, zmm5)), 
            zmm10), 
        7)
    result = _mm_packus_epi16(result, result)
    uint128_t temp0_23 = _mm_bsrli_si128(result, 4)
    *arg3 = result[0]
    *(arg3 + arg4) = temp0_23.d
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
    zmm1 = _mm_maddubs_epi16(zmm4 u>> 0x28 | zmm1 << 0x58, temp0_4)
    char zmm2[0x10] = _mm_bsrli_si128(result, 8)
    zmm3 = _mm_bsrli_si128(zmm1, 8)
    result = _mm_srai_epi16(
        _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(result, zmm2), _mm_adds_epi16(zmm1, zmm3)), 
            zmm10), 
        7)
    result = _mm_packus_epi16(result, result)
    *arg3 = result[0]

return result
