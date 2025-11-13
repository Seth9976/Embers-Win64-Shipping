// 函数: sub_142a05da0
// 地址: 0x142a05da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = _mm_sub_epi16(
    _mm_unpacklo_epi8(_mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(sx.q(arg2.d) + arg1))), 0), 
    _mm_unpacklo_epi8(_mm_unpacklo_epi8(zx.o(*arg3), zx.q(*(sx.q(arg4.d) + arg3))), 0))
uint128_t zmm3 = _mm_sub_epi16(
    _mm_unpacklo_epi8(
        _mm_unpacklo_epi8(zx.o(*(sx.q((arg2 * 2).d) + arg1)), zx.q(*(sx.q((arg2 * 3).d) + arg1))), 
        0), 
    _mm_unpacklo_epi8(
    _mm_unpacklo_epi8(zx.o(*(sx.q((arg4 * 2).d) + arg3)), zx.q(*(sx.q((arg4 * 3).d) + arg3))), 0))
uint128_t zmm0 = zmm3
zmm3 = _mm_madd_epi16(zmm3, zmm3)
zmm0 = _mm_add_epi16(zmm0, zmm4)
zmm4 = _mm_madd_epi16(zmm4, zmm4)
uint128_t zmm1 = _mm_add_epi16(_mm_bsrli_si128(zmm0, 8), zmm0)
zmm3 = _mm_add_epi32(zmm3, zmm4)
uint128_t zmm2 = _mm_add_epi16(_mm_bsrli_si128(zmm1, 4), zmm1)
uint128_t temp0_18 = _mm_bsrli_si128(zmm3, 8)
uint128_t temp0_19 = _mm_bsrli_si128(zmm2, 2)
zmm1 = _mm_add_epi32(temp0_18, zmm3)
int32_t rdx = sx.d(_mm_extract_epi16(_mm_add_epi16(temp0_19, zmm2), 0))
int32_t rax_7 = _mm_add_epi32(_mm_bsrli_si128(zmm1, 4), zmm1).d
*arg5 = rax_7
return zx.q(rax_7 - ((rdx * rdx) s>> 4))
