// 函数: sub_141749f10
// 地址: 0x141749f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 0x38)
float zmm1 = zmm4 f* arg2[1]
float zmm6[0x4] = *(arg1 + 0x34)
zmm4 = zmm4 f* arg3[1]
zmm6[0] = zmm6[0] f* *arg2
zmm6[0] = zmm6[0] f* *arg3
float var_78 = zmm6[0]
float var_74 = zmm1
uint128_t zmm7
uint128_t var_28 = zmm7
float zmm8[0x4] = arg4
arg4 = *(arg1 + 0x3c)
arg4[0] = arg4[0] f* arg3[2]
arg4[0] = arg4[0] f* arg2[2]
zmm1 = arg4[0] * arg4[0]
float var_70 = arg4[0]
zmm6[0] = zmm6[0] * zmm6[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm4 * zmm4 + zmm6[0] + zmm1)
void* const* result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    int64_t arg_28
    zmm6[0] = zmm6[0] f* arg_28.d
    int128_t* rcx_1 = *(arg1 + 0x10) + 0x10
    zmm7.d = 1f / temp0[0]
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x40)
    arg4[0] = arg4[0] f* zmm7.d
    temp0[0] = temp0[0] * zmm8[0]
    zmm6[0] = zmm6[0] f* zmm7.d
    float var_80_1 = arg4[0]
    float var_88 = zmm6[0]
    float var_84_1 = zmm4 f* zmm7.d
    int32_t var_68
    int32_t var_58
    uint128_t zmm8_1
    uint128_t zmm9_1
    result, zmm7, zmm8_1, zmm9_1 =
        sub_141749200(rcx_1, &var_78, &var_88, temp0, zmm6[0], &arg_28, &var_68, &var_58, arg8)
    
    if (result.b == 0)
        result.b = 0
    else
        float zmm6_1 = arg_28.d f* zmm7.d
        
        if (zmm6_1 f>= zmm8_1.d || zmm6_1 == 0f)
            result.b = 0
        else
            uint128_t zmm1_1
            zmm1_1.d = var_68.d f* *(arg1 + 0x28)
            int32_t var_60
            uint128_t zmm0_1
            zmm0_1.d = var_60.d f* *(arg1 + 0x30)
            int32_t var_64
            uint128_t zmm2_1
            zmm2_1.d = var_64.d f* *(arg1 + 0x2c)
            zmm7 = var_58
            *arg6 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
            arg6[1].d = zmm0_1.d
            zmm7.d = zmm7.d f* *(arg1 + 0x34)
            int32_t var_54
            zmm8_1.d = var_54.d f* *(arg1 + 0x38)
            uint128_t var_48_1 = zmm9_1
            int32_t var_50
            zmm9_1.d = var_50.d f* *(arg1 + 0x3c)
            zmm2_1.d = zmm8_1.d f* zmm8_1.d
            zmm0_1.d = zmm7.d f* zmm7.d
            zmm1_1.d = zmm9_1.d f* zmm9_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            
            if (zmm2_1.d f== 1f)
                goto label_14174a173
            
            int32_t var_80_2
            
            if (zmm2_1.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                uint128_t zmm3
                zmm3.d = zmm2_1.d f* 0.5f
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                zmm1_1.d = zmm3.d f* zmm0_1.d
                zmm2_1.d = 0.5f f- zmm1_1.d
                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm1_1.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1_1.d
                zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm8_1.d = zmm8_1.d f* zmm5_1.d
                zmm9_1.d = zmm9_1.d f* zmm5_1.d
            label_14174a173:
                var_80_2 = zmm9_1.d
                int32_t var_84_3 = zmm8_1.d
                var_88 = zmm7.d
            else
                zmm1_1 = data_143dbb1fc
                var_88 = data_143dbb1f8.d
                var_80_2 = data_143dbb200.d
                int32_t var_84_2 = zmm1_1.d
            
            *arg7 = var_88.q
            arg7[1].d = var_80_2
            *arg5 = zmm6_1
            result.b = 1

return result
