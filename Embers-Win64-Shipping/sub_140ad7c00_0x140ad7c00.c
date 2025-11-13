// 函数: sub_140ad7c00
// 地址: 0x140ad7c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg3 + 4)
int128_t zmm7 = arg3[1].d
uint128_t zmm8 = *arg3
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm7.d f* zmm7.d
float zmm3

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg3)
    zmm7 = arg3[1].d
    zmm8 = zmm0.d
    zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    zmm3 = zmm2.d
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

float zmm4 = *(arg2 + 4)
zmm2 = *arg2
float zmm5[0x4] = *(arg2 + 8)
zmm0.d = zmm2.d f* zmm8.d
zmm3 = zmm4 f* zmm6.d f+ zmm0.d + zmm5[0] f* zmm7.d
zmm3 = zmm3 + zmm3
zmm8.d = zmm8.d f* zmm3
zmm6.d = zmm6.d f* zmm3
zmm7.d = zmm7.d f* zmm3
zmm2.d = zmm2.d f- zmm8.d
zmm5[0] = zmm5[0] f- zmm7.d
*arg1 = zmm2.d
arg1[1] = zmm4 f- zmm6.d
arg1[2] = zmm5[0]
return arg1
