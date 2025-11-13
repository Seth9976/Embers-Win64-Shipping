// 函数: sub_142582b80
// 地址: 0x142582b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
float zmm1[0x4] = data_143f6cb10
*(arg2 + 0x20) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f6cb10, data_143f6cb20)
__builtin_memset(&arg2[8], 0, 0x11)
return 0
