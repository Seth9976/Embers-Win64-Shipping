// 函数: sub_1403b0348
// 地址: 0x1403b0348
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t (* rsi)[0x4] = arg1
int32_t* rdi = arg3
uint16_t zmm3[0x8] = *arg6
uint16_t zmm4[0x8] = _mm_unpacklo_epi64(_mm_shufflelo_epi16(zmm3, 0xff), 
    _mm_shufflelo_epi16(_mm_bsrli_si128(zmm3, 8), 0)[0].q)
zmm3 = _mm_shuffle_epi32(0x400040, 0)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    int32_t zmm0[0x4] = *rsi
    int32_t temp0_8[0x4] = _mm_mullo_epi16(
        _mm_unpacklo_epi8(_mm_unpacklo_epi32(zmm0, _mm_bsrli_si128(zmm0, 1)[0].q), 0), zmm4)
    zmm0 = _mm_srai_epi16(
        _mm_adds_epi16(_mm_adds_epi16(temp0_8, _mm_bsrli_si128(temp0_8, 8)), zmm3), 7)
    *rdi = _mm_avg_epu8(_mm_packus_epi16(zmm0, zmm0), zx.o(*rdi))[0]
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
