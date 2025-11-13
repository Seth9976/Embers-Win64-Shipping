// 函数: sub_141a85310
// 地址: 0x141a85310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2b620
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = __andps_xmmxud_memxud(data_143f2b620, data_143f2b630)
float zmm2[0x4] = data_143f2b620
arg2[4] = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
arg2[3] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
arg2[5] = __andps_xmmxud_memxud(data_143f2b620, data_143f2b630)
arg2[6][0] = -nanf
__builtin_memset(&(*arg2)[0x1a], 0, 0x14)
return 0
