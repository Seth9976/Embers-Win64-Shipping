// 函数: sub_141a8dfb0
// 地址: 0x141a8dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_143042058
arg1[0x19] = 0
arg1[0x1a].d = 0x7fffffff
*(arg1 + 0xd4) = 0xffffffff
*(arg1 + 0xe4) = 0
*(arg1 + 0xec) = 0x7fffffff
arg1[0x1e].d = 0xffffffff
float zmm1[0x4] = data_143f2b810
*(arg1 + 0x110) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x100) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x120) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
arg1[0x26] = 0
arg1[0x27] = -1
arg1[0x1c].b = 0
*(arg1 + 0xe4) = 0
arg1[0x28] = 0x42c80000
arg1[0x29].d = 0
int64_t arg_8 = 0
sub_141a84c90(arg1 + 0x14c, &data_1439dbe50)
*(arg1 + 0x15c) = 0
sub_141a84c90(&arg1[0x2c], &data_1439dbe60)
__builtin_memset(&arg1[0x2e], 0, 0x40)
return arg1
