// 函数: sub_141b384a0
// 地址: 0x141b384a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].b = 0
*(arg2 + 0x14) = 0xffffffff
arg2[3].d = 0
arg2[2].b = 0
*arg2 = &data_1430533e8
int32_t result = data_143f2c8c4
arg2[4].d = result
*(arg2 + 0x24) = 1
arg2[5] = 0
arg2[6] = 0
float zmm1[0x4] = data_143f2c8a0
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x50) = zx.o(0)
*(arg2 + 0x60) = __andps_xmmxud_memxud(data_143f2c8a0, data_143f2c8b0)
arg2[0xe].w = 0
return result
