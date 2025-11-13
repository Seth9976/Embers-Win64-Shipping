// 函数: sub_141759530
// 地址: 0x141759530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0xc)
float zmm1[0x4] = 0xbf800000

if (not(zmm0[0] < -1f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

float zmm0_1[0x4] = acosf(zmm1[0])
zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
*arg3 = zmm0_1[0]
float zmm7[0x4] = *(arg1 + 4)
float zmm6[0x4] = *arg1
float zmm8[0x4] = *(arg1 + 8)
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8[0]
float result

if (zmm6[0] f<= arg5)
    *arg2 = *arg4
    arg2[1].d = arg4[1].d
    result.b = 0
else
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
    float zmm2[0x4] = 0x3f000000
    zmm6[0] = zmm6[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm6[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm6[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm7[0] = zmm7[0] * temp0_2[0]
    zmm8[0] = zmm8[0] * temp0_2[0]
    *arg2 = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
    arg2[1].d = zmm8[0]
    result.b = 1

return result
