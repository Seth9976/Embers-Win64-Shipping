// 函数: sub_142a06330
// 地址: 0x142a06330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t zmm6[0x20]
zmm6[0].o = zx.o(0)
int64_t i_1 = 0x10
int16_t zmm5[0x10] = zmm6
int32_t zmm7[0x8] = zmm6
uint8_t zmm1[0x20]
uint8_t zmm2[0x20]
uint8_t zmm3[0x20]
uint32_t zmm4[0x8]
int64_t i

do
    zmm3 = *arg1
    zmm2 = *arg3
    uint8_t temp0_1[0x20] = _mm256_unpacklo_epi8(zmm2, zmm6)
    zmm4 = _mm256_sub_epi16(_mm256_unpacklo_epi8(zmm3, zmm6), temp0_1)
    zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(zmm3, zmm6), _mm256_unpackhi_epi8(zmm2, zmm6))
    zmm1 = _mm256_add_epi16(zmm3, zmm4)
    zmm2 = _mm256_madd_epi16(zmm4, zmm4)
    int32_t temp0_9[0x8] = _mm256_madd_epi16(zmm3, zmm3)
    zmm5 = _mm256_add_epi16(zmm1, zmm5)
    arg1 += sx.q(arg2)
    arg3 += sx.q(arg4)
    zmm7 = _mm256_add_epi32(_mm256_add_epi32(temp0_9, zmm2), zmm7)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm3 = _mm256_srai_epi32(_mm256_unpacklo_epi16(zmm6, zmm5), 0x10)
zmm4 = _mm256_add_epi32(_mm256_srai_epi32(_mm256_unpackhi_epi16(zmm6, zmm5), 0x10), zmm3)
zmm2 = _mm256_unpacklo_epi32(zmm4, zmm6)
zmm1 = _mm256_unpacklo_epi32(zmm7, zmm6)
zmm5 = _mm256_add_epi32(_mm256_unpackhi_epi32(zmm7, zmm6), zmm1)
zmm3 = _mm256_add_epi32(_mm256_unpackhi_epi32(zmm4, zmm6), zmm2)
zmm1 = _mm256_srli_si256(zmm5, 8)
zmm2 = _mm256_add_epi32(zmm1, zmm5)
int32_t zmm0[0x8] = _mm256_srli_si256(zmm3, 8)
zmm4 = _mm256_add_epi32(zmm0, zmm3)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
int32_t rax = zmm2[0].d
zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
*arg5 = zmm1[0].d + rax
*arg6 = zmm0[0] + zmm4[0]
_mm256_zeroupper()
return arg6
