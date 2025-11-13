// 函数: sub_142a136e0
// 地址: 0x142a136e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_7 = sx.d(*arg1)
uint128_t zmm0 = _mm_unpacklo_epi8(zx.o(*arg2), 0)
int64_t rcx_3 = sx.q(arg3.d)
uint128_t zmm1 =
    zx.o(sx.d(((((((rax_7 * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe) + 8) s>> 4).w))
zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
zmm0 = _mm_add_epi16(zmm0, zmm1)
*arg2 = _mm_packus_epi16(zmm0, zmm0).d
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_3 + arg2)), 0), zmm1)
*(rcx_3 + arg2) = _mm_packus_epi16(zmm0, zmm0).d
int64_t rcx_4 = sx.q((arg3 * 2).d)
int32_t result = (arg3 * 3).d
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_4 + arg2)), 0), zmm1)
*(rcx_4 + arg2) = _mm_packus_epi16(zmm0, zmm0).d
int32_t* result_1 = sx.q(result)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(result_1 + arg2)), 0), zmm1)
*(result_1 + arg2) = _mm_packus_epi16(zmm0, zmm0).d
return result
