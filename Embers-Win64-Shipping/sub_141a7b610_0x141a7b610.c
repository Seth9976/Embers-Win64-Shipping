// 函数: sub_141a7b610
// 地址: 0x141a7b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2b0b0
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = __andps_xmmxud_memxud(data_143f2b0b0, data_143f2b0c0)
arg2[3][0].q = 0.0
*(arg2 + 0x38) = 0.0
arg2[4][0].b = 1
*(arg2 + 0x44) = 0.0
*(arg2 + 0x4c) = 0.0
__builtin_memset(&(*arg2)[0x16], 0, 0x29)
*(arg2 + 0x84) = 0.0
return 0
