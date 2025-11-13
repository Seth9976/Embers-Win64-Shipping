// 函数: sub_1426cd990
// 地址: 0x1426cd990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0xb8)
int32_t var_78

if (sub_1426cd560(arg1, rdi, arg1 + 0x70, arg1 + 0xc0, &var_78) != 0)
    int32_t var_68
    char rax
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    rax, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
        sub_1426cd560(arg1, rdi, arg1 + 0x70, arg1 + 0x98, &var_68)
    
    if (rax != 0)
        float var_18_1[0x4] = zmm6_1
        zmm6_1 = var_78
        float var_28_1[0x4] = zmm7_1
        int32_t var_74
        zmm7_1 = var_74
        float var_38_1[0x4] = zmm8_1
        zmm8_1 = var_68
        float var_48_1[0x4] = zmm9_1
        int32_t var_64
        zmm9_1 = var_64
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
        
        if (not(zmm9_1[0] <= 9.99999994e-09f))
            float zmm4_1[0x4] = 0x3f000000
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm9_1[0], zmm9_1[0])
            zmm9_1[0] = zmm9_1[0] * 0.5f
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm9_1[0] = zmm9_1[0] * temp0_1[0]
            temp0_1[0] = temp0_1[0] * (0.5f - zmm9_1[0])
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm9_1[0] = zmm9_1[0] * temp0_1[0]
            zmm4_1[0] = 0.5f - zmm9_1[0]
            temp0_1[0] = temp0_1[0] * zmm4_1[0]
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            zmm8_1[0] = zmm8_1[0] * temp0_1[0]
            zmm9_1[0] = zmm9_1[0] * temp0_1[0]
        
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        float zmm12[0x4] = zmm7_1
        zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        
        if (not(zmm6_1[0] <= 9.99999994e-09f))
            float zmm5_1[0x4] = 0x3f000000
            float temp0_2[0x4] = _mm_rsqrt_ss(zmm6_1[0], zmm6_1[0])
            zmm6_1[0] = zmm6_1[0] * 0.5f
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm6_1[0] = zmm6_1[0] * temp0_2[0]
            temp0_2[0] = temp0_2[0] * (0.5f - zmm6_1[0])
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            zmm7_1 = temp0_2
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm6_1[0] = zmm6_1[0] * temp0_2[0]
            zmm5_1[0] = 0.5f - zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
            zmm7_1[0] = zmm7_1[0] + temp0_2[0]
            zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm12[0]
        
        zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        
        if (not(zmm6_1[0] f<= *(arg1 + 0xe8)))
            return 1

return 0
