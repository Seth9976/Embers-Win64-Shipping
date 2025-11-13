// 函数: sub_1420bf2c0
// 地址: 0x1420bf2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg4 + 4)
int128_t zmm7 = arg4[1].d
uint128_t zmm8 = *arg4
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm7.d f* zmm7.d

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg4)
    zmm7 = arg4[1].d
    zmm8 = zmm0.d
    zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    float zmm3 = zmm2.d
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
    zmm3 = zmm3 * 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    zmm2.d = 0.5f - zmm3 f* zmm0.d
    zmm0.d = temp0_2.d f* zmm2.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm0.d = temp0_2.d f* (0.5f - zmm3 * temp0_2[0] * temp0_2[0])
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm8.d = zmm8.d f* temp0_2[0]
    zmm6.d = zmm6.d f* temp0_2[0]
    zmm7.d = zmm7.d f* temp0_2[0]
else
    zmm8 = data_143dbb1f8
    zmm6 = data_143dbb1fc
    zmm7 = data_143dbb200

zmm0.d = (*arg2).d f- *arg3
zmm0.d = zmm0.d f* zmm8.d
float zmm4 = (*(arg2 + 4) f- arg3[1]) f* zmm6.d f+ zmm0.d + (*(arg2 + 8) f- arg3[2]) f* zmm7.d
zmm8.d = zmm8.d f* zmm4
zmm6.d = zmm6.d f* zmm4
zmm8.d = zmm8.d f+ *arg3
zmm7.d = zmm7.d f* zmm4
zmm6.d = zmm6.d f+ arg3[1]
zmm7.d = zmm7.d f+ arg3[2]
*arg1 = zmm8.d
arg1[1] = zmm6.d
arg1[2] = zmm7.d
return arg1
