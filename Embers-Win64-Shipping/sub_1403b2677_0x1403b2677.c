// 函数: sub_1403b2677
// 地址: 0x1403b2677
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t (* rsi)[0x8] = arg1
int128_t* rdi = arg3
uint128_t temp0 = _mm_bsrli_si128(*arg6, 6)
uint128_t zmm7 = _mm_shufflelo_epi16(_mm_packs_epi16(temp0, temp0), 0)
zmm7 = _mm_unpacklo_epi16(zmm7, zmm7.q)
uint128_t zmm6 = _mm_shuffle_epi32(0x1000100, 0)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    int16_t zmm0[0x8] = *rsi
    uint8_t zmm1[0x10] = *(rsi + 1)
    char zmm2[0x10] = zmm0
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm1[0].q)
    zmm2 = _mm_unpackhi_epi8(zmm2, zmm1[0].q)
    zmm0 = _mm_maddubs_epi16(zmm0, zmm7)
    char temp0_8[0x10] = _mm_maddubs_epi16(zmm2, zmm7)
    *rdi = _mm_avg_epu8(
        _mm_packus_epi16(_mm_mulhrs_epi16(zmm0, zmm6), _mm_mulhrs_epi16(temp0_8, zmm6)), *rdi)
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
