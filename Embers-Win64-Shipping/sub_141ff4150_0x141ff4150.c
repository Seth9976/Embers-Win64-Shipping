// 函数: sub_141ff4150
// 地址: 0x141ff4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329d370
arg1[2].w = *(arg2 + 0x10)
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3] = *(arg2 + 0x18)
arg1[4].d = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6].b = *(arg2 + 0x30)
*(arg1 + 0x31) = *(arg2 + 0x31)
*(arg1 + 0x32) = *(arg2 + 0x32)
*(arg1 + 0x33) = *(arg2 + 0x33)
arg1[8].b = *(arg2 + 0x40)
*(arg1 + 0x44) = *(arg2 + 0x44)
float zmm1[0x4] = data_143f3f2a0
*(arg1 + 0x60) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x50) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x70) = __andps_xmmxud_memxud(data_143f3f2a0, data_143f3f2b0)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
arg1[0x12].d = *(arg2 + 0x90)
return arg1
