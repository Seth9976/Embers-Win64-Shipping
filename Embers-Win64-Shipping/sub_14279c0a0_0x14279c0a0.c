// 函数: sub_14279c0a0
// 地址: 0x14279c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434b5a68
float zmm1[0x4] = data_143f889a0
*(arg1 + 0x20) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x30) = __andps_xmmxud_memxud(data_143f889a0, data_143f889b0)
zmm1 = data_143f889a0
*(arg1 + 0x50) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x60) = __andps_xmmxud_memxud(data_143f889a0, data_143f889b0)
arg1[0xe] = 0
arg1[0x10] = 0
*(arg1 + 0x10) = *arg2
*(arg1 + 0x20) = arg2[1]
*(arg1 + 0x30) = arg2[2]
*(arg1 + 0x40) = *arg3
*(arg1 + 0x50) = arg3[1]
*(arg1 + 0x60) = arg3[2]
return arg1
