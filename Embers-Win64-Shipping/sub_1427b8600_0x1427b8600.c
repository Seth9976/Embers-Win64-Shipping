// 函数: sub_1427b8600
// 地址: 0x1427b8600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0xc0)
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float zmm7[0x4] = temp0
float zmm6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
zmm7[0] = zmm7[0] * zmm0[0]
zmm7[0] = zmm7[0] * zmm6[0]
zmm7[0] - 0f
float zmm1[0x4]

if (not(zmm7[0] <= 0f))
    zmm1 = 0x3f800000
else if (zmm7[0] >= 0f)
    zmm1 = zx.o(0)
else
    zmm1 = 0xbf800000

float zmm8[0x4] = zmm6
zmm7[0] = zmm7[0] * zmm1[0]
zmm8[0] = zmm8[0] * temp0[0]
zmm7[0] = zmm7[0] f* arg3[2]
zmm6[0] = zmm6[0] * zmm0[0]
zmm8[0] = zmm8[0] * zmm1[0]
zmm6[0] = zmm6[0] * zmm1[0]
zmm8[0] = zmm8[0] f* *arg3
zmm6[0] = zmm6[0] f* arg3[1]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]

if (not(zmm6[0] == 1f))
    if (zmm6[0] >= 9.99999994e-09f)
        float zmm4[0x4] = 0x3f000000
        float zmm3[0x4] = zx.o(0)
        float zmm2[0x4] = 0x3f000000
        zmm3[0] = zmm6[0]
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm3[0] = zmm3[0] * temp0_2[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm3[0] = zmm3[0] * temp0_2[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_2[0] = temp0_2[0] * zmm4[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm6[0] = zmm6[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
    else
        zmm8 = data_143dbb1f8
        zmm6 = data_143dbb1fc
        zmm7 = data_143dbb200

float zmm5[0x4] = *(arg1 + 0xa0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm6, 0)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm7[0].q), temp0_4[0].q)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_5)
float temp0_13[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_3), temp0_10)
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_15[0x4] = _mm_mul_ps(temp0_8, temp0_14)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_5)
float temp0_19[0x4] = _mm_mul_ps(temp0_17, temp0_3)
float temp0_20[0x4] = _mm_add_ps(temp0_15, temp0_7)
float temp0_22[0x4] = _mm_add_ps(_mm_sub_ps(temp0_19, temp0_18), temp0_20)
*arg2 = temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
arg2[1] = temp0_23[0]
return arg2
