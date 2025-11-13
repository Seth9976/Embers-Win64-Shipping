// 函数: sub_142a24b40
// 地址: 0x142a24b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    if (arg4 s<= 0xa)
        return sub_142a0aea0(arg1, arg2, arg3) __tailcall
    
    return sub_142a0ba20(arg1, arg2, arg3) __tailcall

uint128_t zmm1 = zx.o(sx.d(((((((sx.d(*arg1) * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe)
    + 0x20) s>> 6).w))
int64_t result = 0x10
zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
int64_t i

do
    int16_t temp0_3[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*arg2), 0), zmm1)
    *arg2 = _mm_packus_epi16(temp0_3, temp0_3)[0].q
    int16_t temp0_6[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(arg2[1]), 0), zmm1)
    arg2[1] = _mm_packus_epi16(temp0_6, temp0_6)[0].q
    arg2 += sx.q(arg3)
    i = result
    result -= 1
while (i != 1)
return result
