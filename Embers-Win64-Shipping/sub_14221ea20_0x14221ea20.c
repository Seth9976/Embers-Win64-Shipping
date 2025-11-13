// 函数: sub_14221ea20
// 地址: 0x14221ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float var_58
float result
float zmm9[0x4]
float zmm0[0x4]
float zmm1
float zmm4[0x4]

if (arg2 == 0)
    float zmm3[0x4] = *(arg4 + 0x10)
    zmm4 = *(arg4 + 0x14)
    float zmm5[0x4] = *(arg4 + 0x18)
    zmm3[0] = zmm3[0] f- *(arg6 + 0x10)
    zmm4[0] = zmm4[0] f- *(arg6 + 0x14)
    zmm5[0] = zmm5[0] f- *(arg6 + 0x18)
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm1 = zmm5[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm1
    zmm9 = _mm_sqrt_ss(0, zmm4[0])
    
    if (zmm9[0] <= 9.99999994e-09f)
        var_58 = data_143dbb1f8[0]
        result = data_143dbb200[0]
        float var_54_5 = data_143dbb1fc
    else
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm9[0]
        zmm3[0] = zmm3[0] * zmm0[0]
        zmm4[0] = zmm4[0] * zmm0[0]
        zmm5[0] = zmm5[0] * zmm0[0]
        var_58 = zmm3[0]
        float var_54_4 = zmm4[0]
        result = zmm5[0]
else
    zmm8 = *(arg2 + 0x10)
    zmm6 = *(arg2 + 0x14)
    zmm8[0] = zmm8[0] f- *(arg4 + 0x10)
    zmm7 = *(arg2 + 0x18)
    zmm6[0] = zmm6[0] f- *(arg4 + 0x14)
    zmm7[0] = zmm7[0] f- *(arg4 + 0x18)
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm1 = zmm7[0] * zmm7[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    zmm6[0] = zmm6[0] + zmm1
    zmm9 = _mm_sqrt_ss(0, zmm6[0])
    
    if (zmm9[0] <= 9.99999994e-09f)
        var_58 = data_143dbb1f8[0]
        result = data_143dbb200[0]
        float var_54_1 = data_143dbb1fc
    else
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm9[0]
        zmm8[0] = zmm8[0] * zmm0[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        var_58 = zmm8[0]
        float var_54 = zmm6[0]
        result = zmm7[0]
    
    if (arg6 != 0)
        zmm8[0] = zmm8[0] f- *(arg6 + 0x10)
        zmm6[0] = zmm6[0] f- *(arg6 + 0x14)
        zmm7[0] = zmm7[0] f- *(arg6 + 0x18)
        var_58 = zmm8[0]
        zmm0 = _mm_and_ps(zmm8, 0x7fffffff)
        float var_54_2 = zmm6[0]
        result = zmm7[0]
        
        if (zmm0[0] > 9.99999975e-05f)
        label_14221eb64:
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm1 = zmm7[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm1 = zmm1 * zmm7[0]
            zmm6[0] = zmm6[0] + zmm8[0]
            zmm6[0] = zmm6[0] + zmm1
            
            if (not(zmm6[0] <= 9.99999994e-09f))
                zmm4 = 0x3f000000
                float temp0_4[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                float zmm2[0x4] = 0x3f000000
                zmm6[0] = zmm6[0] * 0.5f
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm2[0] = 0.5f - zmm6[0] * temp0_4[0]
                temp0_4[0] = temp0_4[0] * zmm2[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm6[0] = zmm6[0] * temp0_4[0] * temp0_4[0]
                zmm4[0] = 0.5f - zmm6[0]
                temp0_4[0] = temp0_4[0] * zmm4[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm8[0] = zmm8[0] * temp0_4[0]
                zmm6[0] = zmm6[0] * temp0_4[0]
                zmm7[0] = zmm7[0] * temp0_4[0]
                var_58 = zmm8[0]
                float var_54_3 = zmm6[0]
                result = zmm7[0]
        else
            if (_mm_and_ps(zmm6, 0x7fffffff)[0] > 9.99999975e-05f)
                goto label_14221eb64
            
            if (not(_mm_and_ps(zmm7, 0x7fffffff)[0] <= 9.99999975e-05f))
                goto label_14221eb64
*(arg5 + 0x44) = _mm_sqrt_ss(0, zmm9[0])[0]
*(arg5 + 0x34) = var_58.q
*(arg5 + 0x3c) = result
return result
