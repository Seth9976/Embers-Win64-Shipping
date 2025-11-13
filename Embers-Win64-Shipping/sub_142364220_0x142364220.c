// 函数: sub_142364220
// 地址: 0x142364220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = *(arg4 + 0x10)
float zmm6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float zmm8[0x4] = zmm7
zmm6[0] = zmm6[0] f- arg5[1]
zmm8[0] = zmm8[0] f- *arg5
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm7[0] = zmm7[0] f- arg5[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]

if (not(zmm6[0] == 1f))
    if (zmm6[0] >= 9.99999994e-09f)
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
        temp0_2[0] = temp0_2[0] * (0.5f - zmm3[0])
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm6[0] = zmm6[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
    else
        zmm8 = data_143dbb1f8
        zmm6 = data_143dbb1fc
        zmm7 = data_143dbb200

zmm6[0] = zmm6[0] f* *(arg4 + 0x34)
zmm8[0] = zmm8[0] f* *(arg4 + 0x30)
zmm7[0] = zmm7[0] f* arg6[2]
zmm6[0] = zmm6[0] f* arg6[1]
zmm6[0] = zmm6[0] + zmm8[0]
zmm8[0] = zmm8[0] f* *arg6
zmm7[0] = zmm7[0] f* *(arg4 + 0x38)
zmm6[0] = zmm6[0] + zmm8[0]
float zmm0[0x4] = 0x3f800000
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
float zmm1[0x4] = 0x3f800000
zmm6[0] = zmm6[0] - zmm6[0]
zmm6[0] = zmm6[0] * 3.03030301e-05f
zmm0[0] = 1f - zmm6[0]
zmm1[0] = 1f / zmm0[0]
zmm1[0] = zmm1[0] - 1f
zmm1[0] = zmm1[0] f* *(arg1 + 0x48)
zmm1[0] = zmm1[0] + 1f

if (arg3 != 0)
    *arg2 = sub_140ad6340(*arg2, zmm1, arg7, (*(arg1 + 0x50))[0])

return arg6
