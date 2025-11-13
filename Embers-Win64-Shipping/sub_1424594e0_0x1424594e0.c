// 函数: sub_1424594e0
// 地址: 0x1424594e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x40)
float zmm1[0x4] = data_143f5f400
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[1] = zx.o(0)
arg2[2] = __andps_xmmxud_memxud(data_143f5f400, data_143f5f420)
(*arg2)[0xd] = 0f
return 0
