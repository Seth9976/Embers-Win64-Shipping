// 函数: sub_1417d6a50
// 地址: 0x1417d6a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_142fcd308
arg1[5] = 0
arg1[6] = 0
float zmm1[0x4] = data_143ef8a30
*(arg1 + 0x50) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x60) = __andps_xmmxud_memxud(data_143ef8a30, data_143ef8a40)
float zmm2[0x4] = data_143ef8a30
*(arg1 + 0x80) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x70) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x90) = __andps_xmmxud_memxud(data_143ef8a30, data_143ef8a40)
arg1[0x14].b = 1
arg1[0x15] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1c] = 0
return arg1
