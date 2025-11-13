// 函数: sub_140ad7530
// 地址: 0x140ad7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg2 + 4)
uint128_t zmm7 = *arg2
uint128_t zmm8 = arg2[1].d
uint128_t zmm10 = data_143dbb200
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
uint128_t zmm12 = data_143dbb1fc
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
uint128_t zmm3

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm8 = arg2[1].d
    zmm7 = zmm0.d
    zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = temp0_2.d f* zmm2.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm3.d = zmm3.d f* temp0_2[0] * temp0_2[0]
    zmm0.d = temp0_2.d f* (0.5f f- zmm3.d)
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm7.d = zmm7.d f* temp0_2[0]
    zmm6.d = zmm6.d f* temp0_2[0]
    zmm8.d = zmm8.d f* temp0_2[0]
else
    zmm7 = data_143dbb1f8
    zmm6 = zmm12
    zmm8 = zmm10

zmm2 = *arg5
zmm3 = *(arg5 + 4)
float zmm4 = *(arg5 + 8)
zmm0.d = zmm2.d f* zmm7.d
uint128_t zmm9
zmm9.d = zmm3.d f* zmm6.d
zmm9.d = zmm9.d f+ zmm0.d
zmm9.d = zmm9.d f+ zmm4 f* zmm8.d
zmm2.d = zmm2.d f* zmm9.d
zmm3.d = zmm3.d f* zmm9.d
zmm7.d = zmm7.d f- zmm2.d
zmm6.d = zmm6.d f- zmm3.d
zmm8.d = zmm8.d f- zmm4 f* zmm9.d
zmm0.d = zmm7.d f* zmm7.d
zmm2.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm3.d = zmm2.d
        float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = temp0_3.d f* temp0_3[0]
        zmm2.d = 0.5f - zmm3.d f* zmm0.d
        zmm0.d = temp0_3.d f* zmm2.d
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        zmm3.d = zmm3.d f* temp0_3[0] * temp0_3[0]
        zmm0.d = temp0_3.d f* (0.5f f- zmm3.d)
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        zmm7.d = zmm7.d f* temp0_3[0]
        zmm6.d = zmm6.d f* temp0_3[0]
        zmm8.d = zmm8.d f* temp0_3[0]
    else
        zmm7 = data_143dbb1f8
        zmm6 = zmm12
        zmm8 = zmm10

zmm10 = 0xbf800000
zmm0.d = zmm7.d f* *arg4
zmm2.d = zmm6.d f* arg4[1]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* arg4[2]

zmm12 = zmm2.d f>= 0f ? 0x3f800000 : 0xbf800000

zmm6.d = zmm6.d f* arg3[1]
zmm7.d = zmm7.d f* *arg3
zmm8.d = zmm8.d f* arg3[2]
zmm6.d = zmm6.d f+ zmm7.d
zmm6.d = zmm6.d f+ zmm8.d

if (zmm9.d f>= -1f)
    zmm9 = _mm_min_ss(zmm9.d, 0x3f800000)
else
    zmm9 = 0xbf800000

zmm7 = asinf(zmm9.d)

if (not(zmm6.d f< -1f))
    zmm10 = _mm_min_ss(zmm6.d, 0x3f800000)

float zmm0_2 = acosf(zmm10.d) f* zmm12.d
arg1[1] = zmm7.d
*arg1 = zmm0_2
return arg1
