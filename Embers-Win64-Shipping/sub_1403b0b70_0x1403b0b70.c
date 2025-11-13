// 函数: sub_1403b0b70
// 地址: 0x1403b0b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char zmm6[0x10]
char arg_8[0x10] = zmm6
char zmm7[0x10]
char arg_18[0x10] = zmm7
int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
uint16_t temp0_1[0x8] = _mm_shufflelo_epi16(temp0, 0)
int32_t zmm1[0x4] = _mm_shufflelo_epi16(temp0, 0x55)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(temp0, 0xaa)
uint16_t temp0_4[0x8] = _mm_shufflelo_epi16(temp0, 0xff)
uint16_t result[0x8] = _mm_unpacklo_epi64(temp0_1, temp0_1[0].q)
int32_t temp0_6[0x4] = _mm_unpacklo_epi64(zmm1, zmm1[0].q)
uint16_t result_1[0x8] = result
uint16_t var_c8[0x8] = _mm_unpacklo_epi64(temp0_3, temp0_3[0].q)
uint16_t var_b8[0x8] = _mm_unpacklo_epi64(temp0_4, temp0_4[0].q)
int32_t zmm12[0x4] = *u"@@@@@@@@"
int32_t i_1 = arg5 - 1
uint16_t zmm2[0x8]
uint16_t zmm3[0x8]
int32_t i

do
    result = *(arg1 - 3)
    zmm4 = *(arg1 + arg2 - 3)
    int32_t temp0_9[0x4] = _mm_unpackhi_epi8(result, result[0].q)
    result = _mm_unpacklo_epi8(result, result[0].q)
    int32_t zmm5[0x4] = __pmaddubsw_xmmdq_memdq(result u>> 0x68 | temp0_9 << 0x18, var_b8)
    zmm1 = __pmaddubsw_xmmdq_memdq(result u>> 8 | temp0_9 << 0x78, result_1)
    zmm6 = _mm_unpackhi_epi8(zmm4, zmm4[0].q)
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm4[0].q)
    zmm2 = __pmaddubsw_xmmdq_memdq(result u>> 0x28 | temp0_9 << 0x58, temp0_6)
    zmm3 = __pmaddubsw_xmmdq_memdq(result u>> 0x48 | temp0_9 << 0x38, var_c8)
    char temp0_17[0x10] = __pmaddubsw_xmmdq_memdq(zmm4 u>> 0x68 | zmm6 << 0x18, var_b8)
    int32_t temp0_20[0x4] = _mm_adds_epi16(_mm_adds_epi16(zmm1, zmm3), _mm_adds_epi16(zmm2, zmm5))
    zmm2 = zx.o(*arg3)[0].q | *(arg3 + arg4) << 0x40
    result = __pmaddubsw_xmmdq_memdq(zmm4 u>> 0x28 | zmm6 << 0x58, temp0_6)
    char temp0_22[0x10] = __pmaddubsw_xmmdq_memdq(zmm4 u>> 8 | zmm6 << 0x78, result_1)
    int32_t temp0_23[0x4] = _mm_adds_epi16(temp0_20, zmm12)
    zmm5 = __pmaddubsw_xmmdq_memdq(zmm4 u>> 0x48 | zmm6 << 0x38, var_c8)
    zmm1 = _mm_srai_epi16(temp0_23, 7)
    result = _mm_adds_epi16(result, temp0_17)
    zmm1 = _mm_avg_epu8(
        _mm_packus_epi16(zmm1, 
            _mm_srai_epi16(
                _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_22, zmm5), result), zmm12), 7)), 
        zmm2)
    *arg3 = zmm1[0].q
    *(arg3 + arg4) = *(arg3 + arg4) | zmm1[0].q << 0x40
    arg1 += arg2 * 2
    arg3 += arg4 << 1
    i = i_1
    i_1 -= 2
while (i s> 2)

if (i == 2)
    result = *(arg1 - 3)
    zmm3 = _mm_unpackhi_epi8(result, result[0].q)
    result = _mm_unpacklo_epi8(result, result[0].q)
    zmm4 = result u>> 0x68 | zmm3 << 0x18
    zmm1 = __pmaddubsw_xmmdq_memdq(result u>> 8 | zmm3 << 0x78, result_1)
    zmm2 = __pmaddubsw_xmmdq_memdq(result u>> 0x28 | zmm3 << 0x58, temp0_6)
    zmm3 = __pmaddubsw_xmmdq_memdq(result u>> 0x48 | zmm3 << 0x38, var_c8)
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, var_b8)
    zmm1 = _mm_srai_epi16(
        _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm1, zmm3), _mm_adds_epi16(zmm4, zmm2)), 
            zmm12), 
        7)
    zmm1 = _mm_packus_epi16(zmm1, zmm1)
    result = zx.o(*arg3)
    *arg3 = _mm_avg_epu8(zmm1, result)[0].q

return result
