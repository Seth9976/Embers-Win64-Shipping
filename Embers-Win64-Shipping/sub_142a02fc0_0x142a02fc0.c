// 函数: sub_142a02fc0
// 地址: 0x142a02fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm5[0x8] = zx.o(0)
int32_t zmm6[0x4] = zx.o(0)
int64_t i_1 = 0x10
int32_t zmm1[0x4]
int64_t i

do
    int32_t zmm3[0x4] = *arg1
    arg1 += sx.q(arg2)
    zmm1 = *arg3
    arg3 += sx.q(arg4)
    int32_t temp0_1[0x4] = _mm_unpackhi_epi8(zmm3, 0)
    int32_t temp0_2[0x4] = _mm_unpacklo_epi8(zmm3, 0)
    int32_t temp0_3[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_4[0x4] = _mm_unpackhi_epi8(zmm1, 0)
    int32_t temp0_5[0x4] = _mm_sub_epi16(temp0_2, temp0_3)
    int32_t temp0_6[0x4] = _mm_sub_epi16(temp0_1, temp0_4)
    int32_t zmm2[0x4] = _mm_madd_epi16(temp0_5, temp0_5)
    zmm5 = _mm_add_epi16(_mm_add_epi16(temp0_5, zmm5), temp0_6)
    zmm3 = _mm_madd_epi16(temp0_6, temp0_6)
    zmm6 = _mm_add_epi32(_mm_add_epi32(zmm2, zmm6), zmm3)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm1 = _mm_add_epi16(_mm_bsrli_si128(zmm5, 8), zmm5)
int32_t zmm0[0x4] = _mm_add_epi16(_mm_bsrli_si128(zmm1, 4), zmm1)
int16_t temp0_17 = _mm_extract_epi16(zmm0, 1)
int32_t temp0_19[0x4] = _mm_add_epi32(_mm_bsrli_si128(zmm6, 8), zmm6)
int16_t temp0_20 = _mm_extract_epi16(zmm0, 0)
int32_t temp0_22[0x4] = _mm_add_epi32(_mm_bsrli_si128(temp0_19, 4), temp0_19)
*arg6 = sx.d(temp0_17) + sx.d(temp0_20)
*arg5 = temp0_22[0]
return arg5
