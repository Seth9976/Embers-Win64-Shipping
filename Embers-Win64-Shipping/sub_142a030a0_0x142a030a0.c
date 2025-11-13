// 函数: sub_142a030a0
// 地址: 0x142a030a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm4[0x8] = zx.o(0)
int32_t zmm5[0x4] = zx.o(0)
int64_t i_1 = 4
uint128_t zmm0
uint128_t zmm1
int64_t i

do
    uint128_t zmm2 = zx.o(*arg1)
    zmm1 = zx.o(*(sx.q(arg2) + arg1))
    arg1 += sx.q(arg2 * 2)
    zmm0 = _mm_unpacklo_epi8(zx.o(*arg3), 0)
    zmm2 = _mm_sub_epi16(_mm_unpacklo_epi8(zmm2, 0), zmm0)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = zx.o(*(sx.q(arg4) + arg3))
    arg3 += sx.q(arg4 * 2)
    zmm1 = _mm_sub_epi16(zmm1, _mm_unpacklo_epi8(zmm0, 0))
    zmm0 = zmm2
    zmm2 = _mm_madd_epi16(zmm2, zmm2)
    zmm4 = _mm_add_epi16(_mm_add_epi16(zmm0, zmm4), zmm1)
    zmm1 = _mm_madd_epi16(zmm1, zmm1)
    zmm5 = _mm_add_epi32(_mm_add_epi32(zmm2, zmm5), zmm1)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm0 = _mm_add_epi16(_mm_bsrli_si128(zmm4, 8), zmm4)
zmm1 = _mm_add_epi16(_mm_bsrli_si128(zmm0, 4), zmm0)
int16_t temp0_19 = _mm_extract_epi16(_mm_add_epi16(_mm_bsrli_si128(zmm1, 2), zmm1), 0)
zmm1 = _mm_add_epi32(_mm_bsrli_si128(zmm5, 8), zmm5)
zmm0 = _mm_add_epi32(_mm_bsrli_si128(zmm1, 4), zmm1)
*arg6 = sx.d(temp0_19)
*arg5 = zmm0.d
return arg5
