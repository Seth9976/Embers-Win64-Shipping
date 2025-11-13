// 函数: sub_1403bb570
// 地址: 0x1403bb570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(*arg3)
uint128_t zmm2 = _mm_unpacklo_epi8(zx.o(*(arg3 - 1)), 0)
result = _mm_unpacklo_epi8(result, 0)
zmm2 = _mm_shufflelo_epi16(zmm2, 0)
int64_t i_1 = -4
result = _mm_sub_epi16(result, _mm_unpacklo_epi64(zmm2, zmm2.q))
zmm2 = _mm_unpacklo_epi8(zx.o(*arg4), 0)
int64_t i

do
    int16_t zmm4[0x8] = _mm_shufflelo_epi16(zmm2, 0)
    int16_t zmm3[0x8] = _mm_shufflelo_epi16(zmm2, 0x55)
    zmm4 = _mm_unpacklo_epi64(zmm4, zmm4[0].q)
    zmm3 = _mm_unpacklo_epi64(zmm3, zmm3[0].q)
    int16_t temp0_12[0x8] =
        _mm_packus_epi16(_mm_add_epi16(zmm4, result), _mm_add_epi16(zmm3, result))
    *arg1 = temp0_12[0].q
    *(arg1 + arg2) = *(arg1 + arg2) | temp0_12[0].q << 0x40
    arg1 += arg2 << 1
    zmm2 = _mm_bsrli_si128(zmm2, 4)
    i = i_1
    i_1 += 1
while (i != -1)
return result
