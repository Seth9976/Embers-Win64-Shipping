// 函数: sub_141a8f710
// 地址: 0x141a8f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_143042f58
arg1[0x19] = 0
arg1[0x1a].d = 0x7fffffff
*(arg1 + 0xd4) = 0xffffffff
arg1[0x1b].d = 0x3f800000
*(arg1 + 0xdc) = 0x3f99999a
arg1[0x1c] = data_143dbb1f8.q
arg1[0x1d].d = data_143dbb200
*(arg1 + 0xec) = 0xffffffff
*(arg1 + 0xf4) = 0
*(arg1 + 0xfc) = 0x7fffffff
arg1[0x20].d = 0xffffffff
float zmm1[0x4] = data_143f2b810
*(arg1 + 0x120) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x110) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x130) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
arg1[0x28] = 0
arg1[0x29] = -1
arg1[0x1e].b = 0
*(arg1 + 0xf4) = 0
arg1[0x2a] = data_143dbb1f8.q
arg1[0x2b].d = data_143dbb200
*(arg1 + 0x15c) = 0xffffffff
*(arg1 + 0x164) = 0
*(arg1 + 0x16c) = 0x7fffffff
arg1[0x2e].d = 0xffffffff
zmm1 = data_143f2b810
*(arg1 + 0x190) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x180) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x1a0) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
arg1[0x36] = 0
arg1[0x37] = -1
int64_t arg_8 = 0
arg1[0x2c].b = 0
*(arg1 + 0x164) = 0
arg_8 = 0
sub_141a84c90(&arg1[0x38], &data_14399f698)
arg1[0x3a].w = 0x101
*(arg1 + 0x1d2) &= 0xf8
*(arg1 + 0x1d2) |= 8
return arg1
