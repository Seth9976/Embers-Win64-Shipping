// 函数: sub_140ae12b0
// 地址: 0x140ae12b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg1
float zmm4[0x4] = *(arg1 + 4)
zmm4[0] = zmm4[0] f- arg3[1]
zmm3[0] = zmm3[0] f- *arg3
float zmm2[0x4] = *(arg1 + 8)
zmm2[0] = zmm2[0] f- arg3[2]
float zmm6[0x4] = *(arg4 + 8)
float zmm7[0x4] = *arg4
zmm3[0] = zmm3[0] * zmm7[0]
zmm2[0] = zmm2[0] * zmm6[0]
zmm3[0] = zmm3[0] + zmm3[0]
float zmm8[0x4] = *(arg4 + 4)
zmm2[0] = zmm2[0] * -2f
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm8[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] + zmm4[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm4[0]
zmm4[0] = zmm4[0] + zmm2[0]
zmm2[0] = zmm2[0] - zmm3[0]
arg2[0] = arg2[0] * arg2[0]
zmm4[0] = zmm4[0] - arg2[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm4[0] = zmm4[0] * 4f
zmm2[0] = zmm2[0] - zmm4[0]

if (zmm2[0] > 9.99999975e-05f)
    float zmm5[0x4] = zmm2 ^ data_142d3f780
    float temp0_2[0x4] = _mm_sqrt_ss(zmm2[0], zmm2[0])
    zmm2[0] = zmm2[0] * 0.5f
    zmm5[0] = zmm5[0] - temp0_2[0]
    temp0_2[0] = temp0_2[0] * 0.5f
    zmm5[0] = zmm5[0] * 0.5f
    temp0_2[0] = temp0_2[0] - zmm2[0]
    zmm2 = __andps_xmmxud_memxud(zmm5, data_142d3f770)
    arg2 = __andps_xmmxud_memxud(temp0_2, data_142d3f770)
    
    if (not(arg2[0] == zmm2[0]))
        if (arg2[0] >= zmm2[0])
            arg2 = zmm5
        else
            arg2 = temp0_2
    
    zmm7[0] = zmm7[0] * arg2[0]
    zmm8[0] = zmm8[0] * arg2[0]
    zmm7[0] = zmm7[0] f+ *arg3
    zmm6[0] = zmm6[0] * arg2[0]
    zmm8[0] = zmm8[0] f+ arg3[1]
    zmm6[0] = zmm6[0] f+ arg3[2]
else
    zmm7[0] = zmm7[0] * zmm2[0]
    zmm8[0] = zmm8[0] * zmm2[0]
    zmm7[0] = zmm7[0] * -0.5f
    zmm8[0] = zmm8[0] * -0.5f
    zmm7[0] = zmm7[0] f+ *arg3
    zmm6[0] = zmm6[0] * zmm2[0]
    zmm8[0] = zmm8[0] f+ arg3[1]
    zmm7[0] = zmm7[0] f- *arg1
    zmm6[0] = zmm6[0] * -0.5f
    zmm8[0] = zmm8[0] f- *(arg1 + 4)
    zmm6[0] = zmm6[0] f+ arg3[2]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm6[0] = zmm6[0] f- *(arg1 + 8)
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] + zmm6[0]
    
    if (not(zmm8[0] == 1f))
        if (zmm8[0] >= 9.99999994e-09f)
            zmm4 = 0x3f000000
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
            zmm2 = 0x3f000000
            zmm8[0] = zmm8[0] * 0.5f
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm8[0] = zmm8[0] * temp0_1[0]
            zmm2[0] = 0.5f - zmm8[0]
            temp0_1[0] = temp0_1[0] * zmm2[0]
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm8[0] = zmm8[0] * temp0_1[0]
            zmm4[0] = 0.5f - zmm8[0]
            temp0_1[0] = temp0_1[0] * zmm4[0]
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            zmm7[0] = zmm7[0] * temp0_1[0]
            zmm8[0] = zmm8[0] * temp0_1[0]
            zmm6[0] = zmm6[0] * temp0_1[0]
        else
            zmm7 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm6 = data_143dbb200
    
    zmm7[0] = zmm7[0] * arg2[0]
    zmm8[0] = zmm8[0] * arg2[0]
    zmm7[0] = zmm7[0] f+ *arg1
    zmm6[0] = zmm6[0] * arg2[0]
    zmm8[0] = zmm8[0] f+ *(arg1 + 4)
    zmm6[0] = zmm6[0] f+ *(arg1 + 8)

float temp0_5[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
float result = zmm6[0]
*arg5 = temp0_5.q
arg5[1].d = result
return result
