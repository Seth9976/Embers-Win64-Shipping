// 函数: sub_140ad7440
// 地址: 0x140ad7440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(&data_14399edc0 + (zx.q(arg2[2]) << 2))
arg1[1] = *(&data_14399edc0 + (zx.q(arg2[1]) << 2))
arg1[2] = *(&data_14399edc0 + (zx.q(*arg2) << 2))
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg2[3])).d f* 0.00392156886f
arg1[3] = zmm0.d
return arg1
