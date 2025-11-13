// 函数: sub_1403bb500
// 地址: 0x1403bb500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = _mm_unpacklo_epi8(zx.o(*(arg3 - 1)), 0)
uint16_t temp0_1[0x8] = _mm_shufflelo_epi16(result, 0)
result = _mm_sub_epi16(_mm_bsrli_si128(result, 2), temp0_1)
uint16_t zmm2[0x8] = _mm_unpacklo_epi8(zx.o(*arg4), 0)
uint16_t temp0_5[0x8] = _mm_shufflelo_epi16(zmm2, 0)
uint16_t temp0_6[0x8] = _mm_shufflelo_epi16(zmm2, 0x55)
uint16_t zmm4[0x8] = _mm_add_epi16(temp0_5, result)
uint16_t zmm3[0x8] = _mm_add_epi16(temp0_6, result)
zmm4 = _mm_packus_epi16(zmm4, zmm4)
zmm3 = _mm_packus_epi16(zmm3, zmm3)
*arg1 = zmm4[0].d
*(arg1 + arg2) = zmm3[0].d
int32_t* rcx = arg1 + (arg2 << 1)
uint16_t temp0_11[0x8] = _mm_shufflelo_epi16(zmm2, 0xaa)
uint16_t temp0_12[0x8] = _mm_shufflelo_epi16(zmm2, 0xff)
zmm4 = _mm_add_epi16(temp0_11, result)
zmm3 = _mm_add_epi16(temp0_12, result)
zmm4 = _mm_packus_epi16(zmm4, zmm4)
zmm3 = _mm_packus_epi16(zmm3, zmm3)
*rcx = zmm4[0].d
*(rcx + arg2) = zmm3[0].d
return result
