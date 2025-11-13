// 函数: sub_1403b05a0
// 地址: 0x1403b05a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char zmm6[0x10]
char arg_8[0x10] = zmm6
char zmm7[0x10]
char arg_18[0x10] = zmm7
int32_t i_1 = arg5
int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int32_t zmm0[0x4] = _mm_shufflelo_epi16(temp0, 0)
uint16_t temp0_2[0x8] = _mm_shufflelo_epi16(temp0, 0x55)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(temp0, 0xaa)
uint16_t temp0_4[0x8] = _mm_shufflelo_epi16(temp0, 0xff)
int32_t temp0_5[0x4] = _mm_unpacklo_epi64(zmm0, zmm0[0].q)
uint16_t var_d8[0x8] = _mm_unpacklo_epi64(temp0_2, temp0_2[0].q)
uint16_t var_c8[0x8] = _mm_unpacklo_epi64(temp0_3, temp0_3[0].q)
uint16_t var_b8[0x8] = _mm_unpacklo_epi64(temp0_4, temp0_4[0].q)
int32_t zmm12[0x4] = *u"@@@@@@@@"
int32_t result[0x4]
int32_t i

do
    zmm4 = *(arg1 - 2)
    zmm0 = __pmaddubsw_xmmdq_memdq(*(arg1 - 3), temp0_5)
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, temp0_5)
    char zmm5[0x10] = *arg1
    uint16_t zmm1[0x8] = __pmaddubsw_xmmdq_memdq(*(arg1 - 1), var_d8)
    char temp0_12[0x10] = __pmaddubsw_xmmdq_memdq(zmm5, var_d8)
    zmm6 = *(arg1 + 2)
    uint16_t zmm2[0x8] = __pmaddubsw_xmmdq_memdq(*(arg1 + 1), var_c8)
    char temp0_14[0x10] = __pmaddubsw_xmmdq_memdq(zmm6, var_c8)
    zmm7 = *(arg1 + 4)
    uint16_t zmm3[0x8] = __pmaddubsw_xmmdq_memdq(*(arg1 + 3), var_b8)
    char temp0_16[0x10] = __pmaddubsw_xmmdq_memdq(zmm7, var_b8)
    int32_t temp0_19[0x4] = _mm_adds_epi16(_mm_adds_epi16(zmm0, zmm2), _mm_adds_epi16(zmm1, zmm3))
    zmm4 = _mm_adds_epi16(_mm_adds_epi16(zmm4, temp0_14), _mm_adds_epi16(temp0_12, temp0_16))
    int32_t temp0_23[0x4] = _mm_adds_epi16(temp0_19, zmm12)
    zmm4 = _mm_adds_epi16(zmm4, zmm12)
    zmm0 = _mm_srai_epi16(temp0_23, 7)
    int16_t temp0_26[0x8] = _mm_srai_epi16(zmm4, 7)
    result =
        _mm_unpacklo_epi8(_mm_packus_epi16(zmm0, zmm0), _mm_packus_epi16(temp0_26, temp0_26)[0].q)
    arg1 += arg2
    *arg3 = result
    arg3 += arg4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
