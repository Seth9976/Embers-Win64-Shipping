// 函数: sub_14255ae00
// 地址: 0x14255ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
float zmm1[0x4] = data_143f6ab80
*(arg2 + 0x20) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f6ab80, data_143f6ab90)
__builtin_memset(&arg2[8], 0, 0x28)
*(arg2 + 0x6c) &= 0xffffffe0
arg2[0xd].d = 0
return 0
