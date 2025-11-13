// 函数: sub_140ae00d0
// 地址: 0x140ae00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg3
float zmm8[0x4] = *(arg3 + 4)
float zmm10[0x4] = *arg4
zmm10[0] = zmm10[0] - zmm6[0]
float zmm11[0x4] = *(arg4 + 4)
zmm11[0] = zmm11[0] - zmm8[0]
float zmm12[0x4] = *(arg4 + 8)
zmm12[0] = zmm12[0] f- *(arg3 + 8)
zmm10[0] = zmm10[0] * zmm10[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm12[0] = zmm12[0] * zmm12[0]
zmm11[0] = zmm11[0] + zmm10[0]
zmm11[0] = zmm11[0] + zmm12[0]
float zmm2[0x4]

if (not(zmm11[0] <= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm11[0], zmm11[0])
    zmm2 = 0x3f000000
    zmm11[0] = zmm11[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm11[0] = zmm11[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm11[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm11[0] = zmm11[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm11[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm10[0] = zmm10[0] * temp0_1[0]
    zmm11[0] = zmm11[0] * temp0_1[0]
    zmm12[0] = zmm12[0] * temp0_1[0]

float zmm7[0x4] = *arg5
float zmm9[0x4] = *(arg5 + 4)
zmm7[0] = zmm7[0] - zmm6[0]
zmm6 = *(arg5 + 8)
zmm9[0] = zmm9[0] - zmm8[0]
zmm6[0] = zmm6[0] f- *(arg3 + 8)
zmm7[0] = zmm7[0] * zmm7[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm9[0] = zmm9[0] + zmm7[0]
zmm9[0] = zmm9[0] + zmm6[0]

if (not(zmm9[0] <= 9.99999994e-09f))
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
    zmm2 = 0x3f000000
    zmm9[0] = zmm9[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9[0] = zmm9[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm9[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9[0] = zmm9[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm9[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * zmm7[0]
    temp0_2[0] = temp0_2[0] * zmm9[0]
    temp0_2[0] = temp0_2[0] * zmm6[0]
    zmm7 = temp0_2
    zmm9 = temp0_2
    zmm6 = temp0_2

zmm8 = zmm9
zmm6[0] = zmm6[0] * zmm11[0]
zmm8[0] = zmm8[0] * zmm12[0]
zmm6[0] = zmm6[0] * zmm10[0]
zmm8[0] = zmm8[0] - zmm6[0]
zmm9[0] = zmm9[0] * zmm10[0]
zmm7[0] = zmm7[0] * zmm11[0]
zmm7[0] = zmm7[0] * zmm12[0]
zmm7[0] = zmm7[0] - zmm9[0]
float var_98 = zmm8[0]
zmm6[0] = zmm6[0] - zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
float var_90 = zmm7[0]
zmm7[0] = zmm7[0] * zmm7[0]
float var_94 = zmm6[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]

if (not(zmm6[0] <= 9.99999994e-09f))
    float zmm3[0x4] = zx.o(0)
    zmm2 = 0x3f000000
    zmm3[0] = zmm6[0]
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm3[0] = zmm3[0] * temp0_3[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_3[0] = temp0_3[0] * zmm2[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm3[0] = zmm3[0] * temp0_3[0]
    temp0_3[0] = temp0_3[0] * (0.5f - zmm3[0])
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm8[0] = zmm8[0] * temp0_3[0]
    zmm6[0] = zmm6[0] * temp0_3[0]
    zmm7[0] = zmm7[0] * temp0_3[0]
    var_98 = zmm8[0]
    float var_94_1 = zmm6[0]
    var_90 = zmm7[0]

float result_1[0x4] = zx.o(*arg3)
zmm10 = *arg1
zmm11 = *(arg1 + 4)
zmm12 = *(arg1 + 8)
float result = *(arg3 + 8)
float zmm5[0x4] = arg2[1]
float zmm4 = *arg2 - zmm10[0]
zmm9 = arg2[2]
zmm5[0] = zmm5[0] - zmm11[0]
float temp0_4[0x4] = _mm_shuffle_ps(result_1, result_1, 0x55)
zmm9[0] = zmm9[0] - zmm12[0]
temp0_4[0] = temp0_4[0] * zmm6[0]
int64_t result_2 = result_1.q
result_1[0] = result_1[0] * zmm8[0]
zmm11[0] = zmm11[0] * zmm6[0]
temp0_4[0] = temp0_4[0] + result_1[0]
zmm12[0] = zmm12[0] * zmm7[0]
result_1 = result
result_1[0] = result_1[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm5[0]
temp0_4[0] = temp0_4[0] + result_1[0]
zmm7[0] = zmm7[0] * zmm9[0]
zmm10[0] = zmm10[0] * zmm8[0]
zmm8[0] = zmm8[0] * zmm4
zmm11[0] = zmm11[0] + zmm10[0]
zmm6[0] = zmm6[0] + zmm8[0]
zmm11[0] = zmm11[0] + zmm12[0]
zmm6[0] = zmm6[0] + zmm7[0]
temp0_4[0] = temp0_4[0] - zmm11[0]
temp0_4[0] = temp0_4[0] / zmm6[0]

if (temp0_4[0] <= -9.99999975e-05f || temp0_4[0] >= 1.00010002f)
    result.b = 0
else
    temp0_4[0] = temp0_4[0] * zmm4
    temp0_4[0] = temp0_4[0] * zmm5[0]
    temp0_4[0] = temp0_4[0] * zmm9[0]
    temp0_4[0] = temp0_4[0] + zmm10[0]
    temp0_4[0] = temp0_4[0] + zmm11[0]
    temp0_4[0] = temp0_4[0] + zmm12[0]
    *arg6 = (_mm_unpacklo_ps(temp0_4, temp0_4[0].q)).q
    float var_80_1 = temp0_4[0]
    *(arg6 + 8) = var_80_1
    sub_140acfad0(&result_2, arg6, arg3, arg4, arg5)
    
    if (result_2.d.d f<= 0f || result_2:4.d.d f<= 0f || var_80_1.d f<= 0f)
        result.b = 0
    else
        *arg7 = var_98.q
        arg7[1].d = var_90
        result.b = 1

return result
