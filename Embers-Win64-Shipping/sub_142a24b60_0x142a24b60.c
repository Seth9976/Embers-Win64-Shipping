// 函数: sub_142a24b60
// 地址: 0x142a24b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    if (arg4 s> 0x22)
        if (arg4 s> 0x87)
            jump(data_144020ed8)
        
        jump(data_144020ec8)
    
    jump(data_144020e98)

void* rdx = arg2 + 0x10
uint128_t zmm2 = zx.o(sx.d(((((((sx.d(*arg1) * 0x2d41 + 0x2000) s>> 0xe) * 0x2d41 + 0x2000) s>> 0xe)
    + 0x20) s>> 6).w))
int64_t result = 0x20
zmm2 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm2, zmm2.q), 0)
int64_t i

do
    int16_t temp0_3[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx - 0x10)), 0), zmm2)
    *(rdx - 0x10) = _mm_packus_epi16(temp0_3, temp0_3)[0].q
    int16_t temp0_6[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx - 8)), 0), zmm2)
    *(rdx - 8) = _mm_packus_epi16(temp0_6, temp0_6)[0].q
    uint128_t zmm1 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*rdx), 0), zmm2)
    *rdx = _mm_packus_epi16(zmm1, zmm1).q
    int16_t temp0_12[0x8] = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx + 8)), 0), zmm2)
    *(rdx + 8) = _mm_packus_epi16(temp0_12, temp0_12)[0].q
    rdx += sx.q(arg3)
    i = result
    result -= 1
while (i != 1)
return result
