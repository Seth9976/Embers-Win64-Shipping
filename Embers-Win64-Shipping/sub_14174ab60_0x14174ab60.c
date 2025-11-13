// 函数: sub_14174ab60
// 地址: 0x14174ab60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0x38)
zmm4[0] = zmm4[0] f* arg2[1]
float zmm6[0x4] = *(arg1 + 0x34)
zmm4[0] = zmm4[0] f* arg3[1]
zmm6[0] = zmm6[0] f* *arg2
zmm6[0] = zmm6[0] f* *arg3
float var_78 = zmm6[0]
zmm4[0] = zmm4[0] * zmm4[0]
float var_74 = zmm4[0]
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4] = arg4
arg4 = *(arg1 + 0x3c)
arg4[0] = arg4[0] f* arg3[2]
arg4[0] = arg4[0] f* arg2[2]
arg4[0] = arg4[0] * arg4[0]
float var_70 = arg4[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm4[0] = zmm4[0] + zmm6[0]
zmm4[0] = zmm4[0] + arg4[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm4[0])
void* const* result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    zmm7 = 0x3f800000
    int32_t arg_28
    zmm6[0] = zmm6[0] f* arg_28
    int64_t* rcx = *(arg1 + 0x10)
    zmm7[0] = 1f / temp0[0]
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x40)
    arg4[0] = arg4[0] * zmm7[0]
    zmm6[0] = zmm6[0] * zmm7[0]
    float var_80_1 = arg4[0]
    zmm4[0] = zmm4[0] * zmm7[0]
    float var_88 = zmm6[0]
    float var_84_1 = zmm4[0]
    int64_t r9_1 = *rcx
    int32_t var_68
    int32_t var_58
    
    if ((*(r9_1 + 0x40))(rcx, &var_78, &var_88, r9_1, zmm6[0], &arg_28, &var_68, &var_58, arg8).b
            == 0)
        result.b = 0
    else
        zmm6 = arg_28
        zmm6[0] = zmm6[0] * zmm7[0]
        
        if (zmm6[0] >= zmm8[0] || zmm6[0] == 0f)
            result.b = 0
        else
            float zmm1[0x4] = var_68
            zmm1[0] = zmm1[0] f* *(arg1 + 0x28)
            int32_t var_60
            float zmm0[0x4] = var_60
            zmm0[0] = zmm0[0] f* *(arg1 + 0x30)
            int32_t var_64
            float zmm2[0x4] = var_64
            zmm2[0] = zmm2[0] f* *(arg1 + 0x2c)
            zmm7 = var_58
            int32_t var_54
            zmm8 = var_54
            *arg6 = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
            arg6[1].d = zmm0[0]
            zmm7[0] = zmm7[0] f* *(arg1 + 0x34)
            zmm8[0] = zmm8[0] f* *(arg1 + 0x38)
            int32_t var_50
            float zmm9[0x4] = var_50
            zmm9[0] = zmm9[0] f* *(arg1 + 0x3c)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm8[0] = zmm8[0] + zmm7[0]
            zmm8[0] = zmm8[0] + zmm9[0]
            
            if (zmm8[0] == 1f)
                goto label_14174adc1
            
            float var_80_2
            
            if (zmm8[0] >= 9.99999994e-09f)
                float temp0_2[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                zmm2 = 0x3f000000
                zmm8[0] = zmm8[0] * 0.5f
                temp0_2[0] = temp0_2[0] * temp0_2[0]
                zmm8[0] = zmm8[0] * temp0_2[0]
                zmm2[0] = 0.5f - zmm8[0]
                temp0_2[0] = temp0_2[0] * zmm2[0]
                temp0_2[0] = temp0_2[0] + temp0_2[0]
                temp0_2[0] = temp0_2[0] * temp0_2[0]
                zmm8[0] = zmm8[0] * temp0_2[0]
                temp0_2[0] = temp0_2[0] * (0.5f - zmm8[0])
                temp0_2[0] = temp0_2[0] + temp0_2[0]
                zmm7[0] = zmm7[0] * temp0_2[0]
                zmm8[0] = zmm8[0] * temp0_2[0]
                zmm9[0] = zmm9[0] * temp0_2[0]
            label_14174adc1:
                var_80_2 = zmm9[0]
                float var_84_3 = zmm8[0]
                var_88 = zmm7[0]
            else
                zmm1 = data_143dbb1fc
                var_88 = data_143dbb1f8[0]
                var_80_2 = data_143dbb200[0]
                float var_84_2 = zmm1[0]
            
            *arg7 = var_88.q
            arg7[1].d = var_80_2
            *arg5 = zmm6[0]
            result.b = 1

return result
