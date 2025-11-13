// 函数: sub_141e90c00
// 地址: 0x141e90c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_143256fb0
arg1[5] = &data_1432574e8
float zmm1[0x4] = data_143f3a0a0
*(arg1 + 0x220) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x210) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x230) = __andps_xmmxud_memxud(data_143f3a0a0, data_143f3a0b0)
__builtin_memset(&arg1[0x49], 0, 0x20)
sub_1422d7fd0(&arg1[0x4e])
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x204) &= 0xf6
*(arg1 + 0x204) |= 6
arg1[0x3e].d = 0x42b40000
arg1[0x40].d = 0x3fe38e3b
*(arg1 + 0x1f4) = 0x44000000
*(arg1 + 0x1fc) = 0x4a000000
arg1[0x48].d = 0x3f800000
return arg1
