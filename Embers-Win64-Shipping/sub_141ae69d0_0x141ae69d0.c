// 函数: sub_141ae69d0
// 地址: 0x141ae69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2c060
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = __andps_xmmxud_memxud(data_143f2c060, data_143f2c070)
arg2[3].q = 0
*(arg2 + 0x38) = -1
return 0
