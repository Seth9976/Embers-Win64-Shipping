// 函数: sub_141c30d50
// 地址: 0x141c30d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
*arg1 = &data_1432050e8
arg1[4] = 0x3f800000
arg1[3].d = 0
arg1[1].d = arg2
*(arg1 + 0xc) = arg3.d
uint128_t zmm6
zmm6.d = arg3.d f* 6.28318548f
zmm6.d = zmm6.d f/ zmm0.d
float zmm0_1 = cosf(zmm6.d) * -2f
*(arg1 + 0x14) = 0x3f800000
arg1[2].d = zmm0_1
*(arg1 + 0x1c) = sinf(zmm6.d)
return arg1
