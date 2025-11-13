// 函数: sub_1424e2ea0
// 地址: 0x1424e2ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg1
arg2[1] = arg1[1]
arg2[2] = arg1[2]
*arg3 = arg1[4]
arg3[1] = arg1[5]
arg3[2] = arg1[6]
*arg4 = arg1[8]
arg4[1] = arg1[9]
int32_t result = arg1[0xa]
arg4[2] = result
float zmm6[0x4] = *arg2
float zmm7[0x4] = arg2[1]
zmm6[0] = zmm6[0] * zmm6[0]
int128_t zmm8 = arg2[2]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d
float zmm2[0x4]
float zmm3

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm3 = zmm6[0]
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    zmm2 = 0x3f000000
    zmm3 = zmm3 * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3 * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]
    *arg2 = zmm6[0]
    arg2[1] = zmm7[0]
    arg2[2] = zmm8.d

zmm7 = arg3[1]
zmm6 = *arg3
zmm8 = arg3[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm3 = zmm6[0]
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    zmm2 = 0x3f000000
    zmm3 = zmm3 * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm3 * temp0_2[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm3 * temp0_2[0] * temp0_2[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm7[0] = zmm7[0] * temp0_2[0]
    zmm8.d = zmm8.d f* temp0_2[0]
    *arg3 = zmm6[0]
    arg3[1] = zmm7[0]
    arg3[2] = zmm8.d

zmm7 = arg4[1]
zmm6 = *arg4
zmm8 = arg4[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm3 = zmm6[0]
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    zmm2 = 0x3f000000
    zmm3 = zmm3 * 0.5f
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm2[0] = 0.5f - zmm3 * temp0_3[0]
    temp0_3[0] = temp0_3[0] * zmm2[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] * (0.5f - zmm3 * temp0_3[0] * temp0_3[0])
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm6[0] = zmm6[0] * temp0_3[0]
    zmm7[0] = zmm7[0] * temp0_3[0]
    zmm8.d = zmm8.d f* temp0_3[0]
    *arg4 = zmm6[0]
    arg4[1] = zmm7[0]
    arg4[2] = zmm8.d

return result
