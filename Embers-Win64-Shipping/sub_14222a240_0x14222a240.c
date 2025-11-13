// 函数: sub_14222a240
// 地址: 0x14222a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2].d = 0
arg1[3].b |= 1
*(arg1 + 0x14) = 5
arg1[4].d = 6
arg1[5] = arg1
*arg1 = &data_143306af0
__builtin_memset(&arg1[6], 0, 0x20)
float zmm1[0x4] = data_143f51330
*(arg1 + 0x80) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x70) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x90) = __andps_xmmxud_memxud(data_143f51330, data_143f51340)
arg1[0x14] = 0
arg1[0x15] = 0
sub_14222c950(arg1, arg2)
return arg1
