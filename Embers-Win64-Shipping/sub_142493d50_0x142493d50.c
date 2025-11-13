// 函数: sub_142493d50
// 地址: 0x142493d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0xc) = 0
__builtin_memset(&arg2[5], 0, 0x2c)
*arg2 = 0xffffffff
*(arg2 + 4) = 0
arg2[3] = 0
float zmm1[0x4] = data_143f62360
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x20) = zx.o(0)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f62360, data_143f62370)
return 0
