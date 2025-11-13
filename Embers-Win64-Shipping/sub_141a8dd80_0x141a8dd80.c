// 函数: sub_141a8dd80
// 地址: 0x141a8dd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_143041ce8
*(arg1 + 0xd0) = data_143dbb0c0
int64_t arg_8 = 0
*(arg1 + 0xe0) = data_143dbb0d0
*(arg1 + 0xf0) = data_143dbb0e0
*(arg1 + 0x104) = 0
*(arg1 + 0x10c) = 0x7fffffff
arg1[0x22].d = 0xffffffff
float zmm1[0x4] = data_143f2b810
*(arg1 + 0x130) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x120) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x140) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
arg1[0x2a] = 0
arg1[0x2b] = -1
arg1[0x20].b = 0
*(arg1 + 0x104) = 0
arg1[0x2c] = 0
arg1[0x2d].d = 0x7fffffff
*(arg1 + 0x16c) = 0xffffffff
arg1[0x2e] = 0
arg1[0x2f].d = 0x7fffffff
*(arg1 + 0x17c) = 0xffffffff
arg1[0x30].d = 0x3f800000
*(arg1 + 0x184) = 0xa
arg1[0x31].w = 0x101
return arg1
