// 函数: sub_1403afdda
// 地址: 0x1403afdda
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg1
int32_t (* rdi)[0x4] = arg3
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
    int32_t zmm1[0x4] = *(rsi + result)
    int32_t temp0_5[0x4] = _mm_unpacklo_epi8(zmm0, 0)
    int32_t temp0_6[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_7[0x4] = _mm_unpackhi_epi8(zmm0, 0)
    int32_t temp0_8[0x4] = _mm_unpackhi_epi8(zmm1, 0)
    int32_t temp0_9[0x4] = _mm_mullo_epi16(temp0_5, zmm6)
    int32_t temp0_10[0x4] = _mm_mullo_epi16(temp0_6, zmm7)
    int32_t temp0_11[0x4] = _mm_mullo_epi16(temp0_7, zmm6)
    int32_t temp0_12[0x4] = _mm_mullo_epi16(temp0_8, zmm7)
    int32_t temp0_13[0x4] = _mm_adds_epi16(temp0_9, temp0_10)
    int32_t temp0_14[0x4] = _mm_adds_epi16(temp0_11, temp0_12)
    int32_t temp0_15[0x4] = _mm_adds_epi16(temp0_13, zmm4)
    int32_t temp0_16[0x4] = _mm_adds_epi16(temp0_14, zmm4)
    *rdi = _mm_packus_epi16(_mm_srai_epi16(temp0_15, 7), _mm_srai_epi16(temp0_16, 7))
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
