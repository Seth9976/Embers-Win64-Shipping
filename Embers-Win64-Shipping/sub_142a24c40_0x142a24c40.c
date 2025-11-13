// 函数: sub_142a24c40
// 地址: 0x142a24c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg4)

if (arg1 != 0)
    return sub_142a30930(arg2, arg3, r8.d, arg1) __tailcall

if (arg5 != 1)
    if (arg5 s> 0xc)
        jump(data_144020e50)
    
    jump(data_144020e70)

int32_t rax_2 = sx.d(*arg2)
uint128_t zmm0 = _mm_unpacklo_epi8(zx.o(*arg3), 0)
uint128_t zmm1 =
    zx.o(sx.d(((((((rax_2 * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe) + 0x10) s>> 5).w))
int64_t rax_9 = sx.q(r8.d)
zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
zmm0 = _mm_add_epi16(zmm0, zmm1)
*arg3 = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_9 + arg3)), 0), zmm1)
*(rax_9 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_8 = sx.q((r8 * 2).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_8 + arg3)), 0), zmm1)
*(rcx_8 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_9 = sx.q((r8 * 3).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_9 + arg3)), 0), zmm1)
*(rcx_9 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_10 = sx.q((r8 << 2).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_10 + arg3)), 0), zmm1)
*(rcx_10 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_11 = sx.q((r8 * 5).d)
int64_t* rax_16 = sx.q((r8 * 3).d * 2)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_11 + arg3)), 0), zmm1)
*(rcx_11 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_16 + arg3)), 0), zmm1)
*(rax_16 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
int32_t result = r8.d * 7
int64_t result_1 = sx.q(result)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(result_1 + arg3)), 0), zmm1)
*(result_1 + arg3) = _mm_packus_epi16(zmm0, zmm0).q
return result
