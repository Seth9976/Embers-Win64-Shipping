// 函数: sub_14174a1d0
// 地址: 0x14174a1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *(arg1 + 0x38)
uint128_t zmm1
zmm1.d = zmm4.d f* arg2[1]
uint128_t zmm6 = *(arg1 + 0x34)
zmm4.d = zmm4.d f* arg3[1]
uint128_t zmm0
zmm0.d = zmm6.d f* *arg2
uint128_t zmm5
zmm5.d = zmm6.d f* *arg3
int32_t var_88 = zmm0.d
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8 = arg4
arg4 = *(arg1 + 0x3c)
uint128_t zmm2
zmm2.d = zmm4.d f* zmm4.d
zmm0.d = arg4.d f* arg2[2]
arg4.d = arg4.d f* arg3[2]
int32_t var_80 = zmm0.d
int32_t var_84 = zmm1.d
zmm0.d = zmm5.d f* zmm5.d
zmm1.d = arg4.d f* arg4.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
float temp0[0x4] = _mm_sqrt_ss(0, zmm2.d)
void* const* result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    void* rcx = *(arg1 + 0x10)
    zmm2 = *(rcx + 0x28)
    zmm0.d = zmm2.d f* *(rcx + 0x1c)
    int64_t var_a8_1 = arg8
    zmm1.d = zmm2.d f* *(rcx + 0x20)
    zmm0.d = zmm0.d f+ *(rcx + 0x10)
    int64_t arg_28
    zmm6.d = zmm6.d f* arg_28.d
    zmm1.d = zmm1.d f+ *(rcx + 0x14)
    zmm2.d = zmm2.d f* *(rcx + 0x24)
    zmm6.d = zmm6.d f+ *(arg1 + 0x40)
    zmm2.d = zmm2.d f+ *(rcx + 0x18)
    zmm7.d = 1f / temp0[0]
    zmm5.d = zmm5.d f* zmm7.d
    zmm4.d = zmm4.d f* zmm7.d
    arg4.d = arg4.d f* zmm7.d
    int32_t var_78 = zmm0.d
    zmm0 = *(rcx + 0x2c)
    int32_t var_74_1 = zmm1.d
    zmm1 = *(rcx + 0x28)
    temp0[0] = temp0[0] f* zmm8.d
    int32_t var_98 = zmm5.d
    int32_t var_94_1 = zmm4.d
    int32_t var_90_1 = arg4.d
    int32_t var_70_1 = zmm2.d
    int32_t var_68
    int32_t var_58
    uint128_t zmm8_1
    result, zmm7, zmm8_1 = sub_14174bd50(zmm0, zmm1, rcx + 0x1c, rcx + 0x10, &var_78, &var_88, 
        &var_98, temp0[0], zmm6.d, &arg_28, &var_68, &var_58)
    
    if (result.b == 0)
        result.b = 0
    else
        float zmm6_1 = arg_28.d f* zmm7.d
        
        if (zmm6_1 f>= zmm8_1.d || zmm6_1 == 0f)
            result.b = 0
        else
            float zmm1_1[0x4] = var_68
            zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
            int32_t var_60
            uint128_t zmm0_1
            zmm0_1.d = var_60.d f* *(arg1 + 0x30)
            int32_t var_64
            uint128_t zmm2_1
            zmm2_1.d = var_64.d f* *(arg1 + 0x2c)
            zmm7 = var_58
            int32_t var_50
            float zmm9_1[0x4] = var_50
            *arg6 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
            arg6[1].d = zmm0_1.d
            zmm7.d = zmm7.d f* *(arg1 + 0x34)
            int32_t var_54
            zmm8_1.d = var_54.d f* *(arg1 + 0x38)
            zmm9_1[0] = zmm9_1[0] f* *(arg1 + 0x3c)
            zmm0_1.d = zmm7.d f* zmm7.d
            zmm2_1.d = zmm8_1.d f* zmm8_1.d
            zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm9_1[0]
            
            if (zmm2_1.d f== 1f)
                goto label_14174a495
            
            float var_90_2
            
            if (zmm2_1.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                uint128_t zmm3
                zmm3.d = zmm2_1.d f* 0.5f
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                zmm1_1 = zmm3
                zmm1_1[0] = zmm1_1[0] f* zmm0_1.d
                zmm2_1.d = 0.5f - zmm1_1[0]
                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm1_1 = zmm5_1
                zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1_1[0]
                zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm8_1.d = zmm8_1.d f* zmm5_1.d
                zmm9_1[0] = zmm9_1[0] f* zmm5_1.d
            label_14174a495:
                var_90_2 = zmm9_1[0]
                int32_t var_94_3 = zmm8_1.d
                var_98 = zmm7.d
            else
                zmm1_1 = data_143dbb1fc
                var_98 = data_143dbb1f8.d
                var_90_2 = data_143dbb200.d
                float var_94_2 = zmm1_1[0]
            
            *arg7 = var_98.q
            arg7[1].d = var_90_2
            *arg5 = zmm6_1
            result.b = 1

return result
