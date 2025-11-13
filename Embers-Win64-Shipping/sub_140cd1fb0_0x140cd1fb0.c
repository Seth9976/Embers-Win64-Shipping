// 函数: sub_140cd1fb0
// 地址: 0x140cd1fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143e1b740
zmm1[0].q = zx.o(0) u>> 0x40
float result[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*arg2 = result
arg2[1] = zx.o(0)
arg2[2] = __andps_xmmxud_memxud(data_143e1b740, data_143e1b750)
return result
