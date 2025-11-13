// 函数: sub_1423de060
// 地址: 0x1423de060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_14399fa0c
uint128_t zmm0_1 = tanf(*(arg1 + 8) * 0.00872664619f)
uint128_t zmm2 = zx.o(*(arg1 + 0xc))
float zmm1 = 1f f/ zmm0_1.d
*(arg2 + 4) = 0
*(arg2 + 0xc) = 0
__builtin_memset(&arg2[6], 0, 0x14)
arg2[0xd] = 0
arg2[0xf] = 0
*(arg2 + 0x2c) = 0x3f800000
zmm0_1 = zx.o(*(arg1 + 0x10))
zmm2 = _mm_cvtepi32_ps(zmm2)
zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
zmm2.d = zmm2.d f* zmm1
arg2[0xe] = zmm6.d
zmm2.d = zmm2.d f/ zmm0_1.d
*arg2 = zmm1
arg2[5] = zmm2.d
return arg2
