// 函数: sub_1403b03f5
// 地址: 0x1403b03f5
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t (* rsi)[0x4] = arg1
int64_t* rdi = arg3
uint16_t zmm7[0x8] = *arg6
uint16_t temp0[0x8] = _mm_shufflelo_epi16(zmm7, 0xff)
uint16_t temp0_1[0x8] = _mm_shufflehi_epi16(zmm7, 0)
uint16_t zmm6[0x8] = _mm_unpacklo_epi16(temp0, temp0[0].q)
zmm7 = _mm_unpackhi_epi16(temp0_1, temp0_1[0].q)
uint128_t zmm4 = _mm_shuffle_epi32(0x400040, 0)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    int32_t zmm0[0x4] = *rsi
    int32_t zmm1[0x4] = _mm_bsrli_si128(zmm0, 1)
    int32_t temp0_6[0x4] = _mm_unpacklo_epi8(zmm0, 0)
    int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = _mm_srai_epi16(
        _mm_adds_epi16(
            _mm_adds_epi16(_mm_mullo_epi16(temp0_6, zmm6), _mm_mullo_epi16(temp0_7, zmm7)), zmm4), 
        7)
    *rdi = _mm_avg_epu8(_mm_packus_epi16(zmm0, zmm0), zx.o(*rdi))[0].q
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
