// 函数: sub_141a8fdf0
// 地址: 0x141a8fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 4) = 0
*(arg1 + 0xc) = 0x7fffffff
*(arg1 + 0x10) = 0xffffffff
float zmm1[0x4] = data_143f2b810
*(arg1 + 0x30) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x40) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = -1
*arg1 = arg3

if (arg3 == 0)
    *(arg1 + 4) = arg2
    return arg1

*(arg1 + 0x50) = arg2
return arg1
