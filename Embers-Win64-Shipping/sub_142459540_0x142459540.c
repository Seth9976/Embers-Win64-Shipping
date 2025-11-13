// 函数: sub_142459540
// 地址: 0x142459540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 4) = 0
float zmm1[0x4] = data_143f5f400
zmm1[0].q = zx.o(0) u>> 0x40
float result[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x10) = result
*(arg2 + 0x20) = zx.o(0)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f5f400, data_143f5f420)
return result
