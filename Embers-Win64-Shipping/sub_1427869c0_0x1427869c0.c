// 函数: sub_1427869c0
// 地址: 0x1427869c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg3
*(arg1 + 0xc) = -1
*(arg1 + 0x14) = 2
__builtin_memset(&arg1[3], 0, 0xa0)
float zmm1[0x4] = data_143f880a0
*(arg1 + 0xd0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xc0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xe0) = __andps_xmmxud_memxud(data_143f880a0, data_143f880b0)
__builtin_memset(&arg1[0x1e], 0, 0x18)
return arg1
