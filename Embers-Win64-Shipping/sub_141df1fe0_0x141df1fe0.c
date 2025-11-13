// 函数: sub_141df1fe0
// 地址: 0x141df1fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2
int32_t zmm0 = (zx.o(0)).d
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o((r8 u>> 0x15) - 0x3ff))
float zmm5 = zmm3.d * 0.000977517106f
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o((r8 u>> 0xa & 0x7ff) - 0x3ff))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o((r8 & 0x3ff) - 0x1ff))
zmm3.d = zmm3.d f* zmm3.d
uint128_t zmm6
zmm6.d = zmm2.d f* 0.000977517106f
zmm3.d = zmm3.d f* 9.5553969e-07f
uint128_t zmm7
zmm7.d = zmm1.d f* 0.00195694715f
zmm2.d = zmm2.d f* zmm2.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f* 9.5553969e-07f
zmm1.d = zmm1.d f* 3.82964208e-06f
float zmm4 = 1f f- zmm3.d f- zmm2.d f- zmm1.d

if (not(zmm4 <= 0f))
    zmm0 = _mm_sqrt_ss(0, zmm4)

arg1[1] = zmm6.d
arg1[2] = zmm7.d
*arg1 = zmm5
arg1[3] = zmm0
return arg1
