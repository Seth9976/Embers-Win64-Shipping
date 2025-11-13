// 函数: sub_141a85380
// 地址: 0x141a85380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 2
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0x3f800000
arg2[0x14] = 1
*(arg2 + 0x20) = data_143dbb0c0
*(arg2 + 0x30) = data_143dbb0d0
*(arg2 + 0x40) = data_143dbb0e0
float zmm1[0x4] = data_143f2b620
zmm1[0].q = zx.o(0) u>> 0x40
float result[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x50) = result
*(arg2 + 0x60) = zx.o(0)
*(arg2 + 0x70) = __andps_xmmxud_memxud(data_143f2b620, data_143f2b630)
return result
