// 函数: sub_142a24bc0
// 地址: 0x142a24bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg3

if (arg1 != 0)
    return sub_142a2fed0(arg2, rdx, arg4, arg1) __tailcall

if (arg5 != 1)
    if (arg5 s<= 0xa)
        return sub_142a0aea0(arg2, rdx, arg4) __tailcall
    
    return sub_142a0ba20(arg2, rdx, arg4) __tailcall

uint128_t zmm1 = zx.o(sx.d(((((((sx.d(*arg2) * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe)
    + 0x20) s>> 6).w))
int64_t result = 0x10
zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
int64_t i

do
    int16_t temp0_3[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*rdx), 0), zmm1)
    *rdx = _mm_packus_epi16(temp0_3, temp0_3)[0].q
    int16_t temp0_6[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx + 8)), 0), zmm1)
    *(rdx + 8) = _mm_packus_epi16(temp0_6, temp0_6)[0].q
    rdx += sx.q(arg4)
    i = result
    result -= 1
while (i != 1)
return result
