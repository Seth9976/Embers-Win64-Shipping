// 函数: sub_142a13520
// 地址: 0x142a13520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm5[0x8] = *"A-A-A-"
uint16_t temp0_1[0x8] = _mm_shufflehi_epi16(__pshuflw_xmmdq_memdq_immb(*arg1, 0xd8), 0xd8)
uint16_t temp0_2[0x8] = __pshuflw_xmmdq_memdq_immb(arg1[1], 0xd8)
uint16_t result_1[0x8] = _mm_unpacklo_epi32(temp0_1, temp0_1[0].q)
uint16_t temp0_4[0x8] = _mm_shufflehi_epi16(temp0_2, 0xd8)
uint16_t zmm1[0x8] = _mm_madd_epi16(_mm_unpackhi_epi32(temp0_1, temp0_1[0].q), zmm5)
result_1 = _mm_madd_epi16(result_1, zmm5)
int64_t r9 = sx.q(arg3)
int32_t zmm6[0x4] = data_1435ffa40
zmm1 = _mm_srai_epi32(_mm_add_epi32(zmm1, zmm6), 0xe)
int64_t r8 = sx.q((r9 * 3).d)
result_1 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(result_1, zmm6), 0xe), zmm1)
int32_t* rcx = sx.q((r9 * 2).d)
zmm1 = _mm_unpacklo_epi32(temp0_4, temp0_4[0].q)
uint16_t zmm2[0x8] = _mm_unpackhi_epi32(temp0_4, temp0_4[0].q)
zmm1 = _mm_madd_epi16(zmm1, zmm5)
zmm2 = _mm_madd_epi16(zmm2, zmm5)
zmm1 = _mm_add_epi32(zmm1, zmm6)
zmm2 = _mm_add_epi32(zmm2, zmm6)
zmm1 = _mm_packs_epi32(_mm_srai_epi32(zmm1, 0xe), _mm_srai_epi32(zmm2, 0xe))
uint16_t result[0x8] = _mm_unpacklo_epi16(result_1, zmm1[0].q)
int16_t result_2[0x8] = result
result_1 = _mm_unpackhi_epi16(result_1, zmm1[0].q)
result = _mm_shuffle_epi32(_mm_unpackhi_epi32(result, result_1[0].q), 0x4e)
result_2 = _mm_unpacklo_epi32(result_2, result_1[0].q)
zmm1 = _mm_add_epi16(result, result_2)
result_2 = _mm_sub_epi16(result_2, result)
result = _mm_unpackhi_epi32(result_2, result_2[0].q)
zmm2 = _mm_unpacklo_epi32(zmm1, zmm1[0].q)
result = _mm_madd_epi16(result, zmm5)
int16_t temp0_33[0x8] = _mm_madd_epi16(_mm_unpacklo_epi32(result_2, result_2[0].q), zmm5)
zmm2 = _mm_madd_epi16(zmm2, zmm5)
zmm1 = _mm_unpackhi_epi32(zmm1, zmm1[0].q)
result = _mm_add_epi32(result, zmm6)
zmm1 = _mm_madd_epi16(zmm1, zmm5)
result = _mm_srai_epi32(result, 0xe)
result_2 = _mm_srai_epi32(_mm_add_epi32(temp0_33, zmm6), 0xe)
zmm2 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(zmm2, zmm6), 0xe), result)
zmm1 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(zmm1, zmm6), 0xe), result_2)
result_2 = zx.o(*arg2)
result = _mm_unpacklo_epi16(zmm2, zmm1[0].q)
result_1 = result
zmm2 = _mm_unpackhi_epi16(zmm2, zmm1[0].q)
zmm1 = zx.o(*(r8 + arg2))
result = _mm_unpackhi_epi32(result, zmm2[0].q)
result_1 = _mm_unpacklo_epi32(result_1, zmm2[0].q)
zmm2 = _mm_shuffle_epi32(result, 0x4e)
result_2 = _mm_unpacklo_epi32(result_2, zx.o(*(r9 + arg2))[0].q)
result = _mm_add_epi16(zmm2, result_1)
int16_t temp0_57[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(result_2, 0), 
    _mm_srai_epi16(__paddw_xmmdq_memdq(result, data_143600940), 4))
result = zx.o(*(rcx + arg2))
result_1 = __paddw_xmmdq_memdq(_mm_sub_epi16(result_1, zmm2), data_143600940)
int16_t temp0_64[0x8] = _mm_packus_epi16(temp0_57, 
    _mm_add_epi16(_mm_unpacklo_epi8(_mm_unpacklo_epi32(zmm1, result[0].q), 0), 
        _mm_srai_epi16(result_1, 4)))
*arg2 = temp0_64[0].d
result_2 = _mm_bsrli_si128(temp0_64, 4)
*(r9 + arg2) = result_2[0].d
result_2 = _mm_bsrli_si128(result_2, 4)
*(r8 + arg2) = result_2[0].d
*(rcx + arg2) = _mm_bsrli_si128(result_2, 4)[0].d
return result
