// 函数: sub_142a24ba0
// 地址: 0x142a24ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    if (arg4 s> 0xc)
        jump(data_144020e50)
    
    jump(data_144020e70)

int32_t rax = sx.d(*arg1)
uint128_t zmm0 = _mm_unpacklo_epi8(zx.o(*arg2), 0)
uint128_t zmm1 =
    zx.o(sx.d(((((((rax * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe) + 0x10) s>> 5).w))
int64_t rax_7 = sx.q(arg3.d)
zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
zmm0 = _mm_add_epi16(zmm0, zmm1)
*arg2 = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_7 + arg2)), 0), zmm1)
*(rax_7 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_3 = sx.q((arg3 * 2).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_3 + arg2)), 0), zmm1)
*(rcx_3 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_4 = sx.q((arg3 * 3).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_4 + arg2)), 0), zmm1)
*(rcx_4 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_5 = sx.q((arg3 << 2).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_5 + arg2)), 0), zmm1)
*(rcx_5 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_6 = sx.q((arg3 * 5).d)
int64_t rax_14 = sx.q((arg3 * 3).d * 2)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_6 + arg2)), 0), zmm1)
*(rcx_6 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_14 + arg2)), 0), zmm1)
*(rax_14 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int32_t result = arg3.d * 7
int64_t* result_1 = sx.q(result)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(result_1 + arg2)), 0), zmm1)
*(result_1 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
return result
