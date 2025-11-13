// 函数: sub_141ff4390
// 地址: 0x141ff4390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329d370
arg1[2].d = 0
*(arg1 + 0x14) = 0
arg1[3] = 0
arg1[4].d = 0xff7fc99e
*(arg1 + 0x24) = 0
*(arg1 + 0x2c) = 0xbf800000
arg1[6].d = 0
arg1[8].b = 0
*(arg1 + 0x44) = 0
float zmm1[0x4] = data_143f3f2a0
*(arg1 + 0x60) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x50) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x70) = __andps_xmmxud_memxud(data_143f3f2a0, data_143f3f2b0)
arg1[0x10].b = 0
*(arg1 + 0x84) = data_143dbb1f8.q
*(arg1 + 0x8c) = data_143dbb200
arg1[0x12].d = 0
*arg1 = &data_14329d5a0
arg1[0x13] = 0
arg1[0x14].d = 0
*(arg1 + 0xa4) = 0xbf800000
arg1[0x15].d = 0xbf800000
*(arg1 + 0xac) = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = data_143dbb1f8.q
arg1[0x19].d = data_143dbb200
*(arg1 + 0x31) |= 2
return arg1
