// 函数: sub_1422277b0
// 地址: 0x1422277b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = *(arg1 + 0x248)
*(arg1 + 0x1e0)
int64_t r15

if (result == 0 || result[3].b != 1)
    r15.b = 0
else
    r15.b = 1

int32_t i = 0

if (*(arg1 + 0x1dc) s> 0)
    int64_t rbp_1 = 0
    int64_t* rdi_1 = nullptr
    int32_t* rsi_1 = nullptr
    
    do
        int32_t r12_1 = *(rsi_1 + *(arg1 + 0x320))
        int64_t var_b8
        int64_t var_a8
        int64_t var_98
        float var_68[0x4]
        float arg_8
        int64_t zmm6_1
        float zmm7_1[0x4]
        int64_t zmm8_1
        result, zmm6_1, zmm7_1, zmm8_1 =
            sub_14221fdd0(arg1, i, &var_b8, &var_68, &var_a8, &var_98, &arg_8)
        
        if (result.b == 1)
            int32_t var_b0
            int32_t var_a0
            int64_t zmm1_1
            float zmm2_1
            float zmm3_1[0x4]
            int64_t zmm4_1
            int64_t zmm5_1
            
            if (*(rsi_1 + *(arg1 + 0x320)) != 0xffffffff || r15.b == 0)
                zmm1_1 = var_b8
                zmm4_1 = var_a8
                zmm5_1 = arg_8
                
                if (arg3 == 1)
                label_1422279b8:
                    int64_t* rax_12 = *(arg1 + 0x2a8)
                    *(rax_12 + rdi_1) = zmm1_1
                    *(rax_12 + rdi_1 + 8) = var_b0
                    int64_t* rcx_2 = *(arg1 + 0x2d8)
                    *(rcx_2 + rdi_1) = data_143dbb1f8.q
                    *(rcx_2 + rdi_1 + 8) = data_143dbb200
                    *(rsi_1 + *(arg1 + 0x2e8)) = zmm5_1.d
                    int64_t* rax_15 = *(arg1 + 0x2c8)
                    *(rax_15 + rdi_1) = zmm4_1
                    *(rax_15 + rdi_1 + 8) = var_a0
                    *(rsi_1 + *(arg1 + 0x1f0)) = *(arg1 + 0x1e0)
                else if (r12_1 == 0xffffffff && r15.b != 0)
                    goto label_1422279b8
                
                int64_t rax_17 = *(arg1 + 0x258)
                float zmm0_1[0x4] = var_68
                *(rdi_1 + rax_17) = zmm1_1
                *(rdi_1 + rax_17 + 8) = var_b0
                *(*(arg1 + 0x268) + rbp_1) = zmm0_1
                zmm1_1.d = zmm8_1.d f- *(*(arg1 + 0x1f0) + rsi_1)
                float rax_21
                
                if (zmm1_1.d f== zmm6_1.d)
                    int32_t var_74_1 = 0
                    rax_21 = 0f
                    zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1)
                else
                    int64_t rax_20 = *(arg1 + 0x258)
                    int64_t rcx_4 = *(arg1 + 0x2a8)
                    zmm2_1 = zmm7_1[0] f/ zmm1_1.d
                    zmm0_1 = *(rdi_1 + rax_20 + 8)
                    zmm3_1 = *(rdi_1 + rax_20)
                    zmm0_1[0] = zmm0_1[0] f- *(rdi_1 + rcx_4 + 8)
                    zmm3_1[0] = zmm3_1[0] f- *(rdi_1 + rcx_4)
                    zmm1_1.d = (*(rdi_1 + rax_20 + 4)).d f- *(rdi_1 + rcx_4 + 4)
                    zmm0_1[0] = zmm0_1[0] * zmm2_1
                    zmm3_1[0] = zmm3_1[0] * zmm2_1
                    rax_21 = zmm0_1[0]
                    zmm1_1.d = zmm1_1.d f* zmm2_1
                    zmm0_1 = _mm_unpacklo_ps(zmm3_1, zmm1_1)
                
                int64_t* rcx_5 = *(arg1 + 0x288)
                *(rcx_5 + rdi_1) = zmm0_1.q
                *(rcx_5 + rdi_1 + 8) = rax_21
                *(rsi_1 + *(arg1 + 0x298)) = zmm5_1.d
                result = *(arg1 + 0x278)
                *(result + rdi_1) = zmm4_1
                *(result + rdi_1 + 8) = var_a0
                
                if (arg3 == 1)
                    result = *(arg1 + 0x268)
                    *(*(arg1 + 0x2b8) + rbp_1) = *(result + rbp_1)
            else
                int64_t* rax_2 = *(arg1 + 0x2a8)
                zmm5_1 = var_b8
                zmm4_1 = var_98
                zmm2_1 = arg_8
                zmm3_1 = var_68
                zmm1_1 = var_a8
                *(rax_2 + rdi_1) = zmm5_1
                *(rax_2 + rdi_1 + 8) = var_b0
                int64_t* rax_3 = *(arg1 + 0x2d8)
                *(rax_3 + rdi_1) = zmm4_1
                int32_t var_90
                *(rax_3 + rdi_1 + 8) = var_90
                *(rsi_1 + *(arg1 + 0x2e8)) = zmm2_1
                *(*(arg1 + 0x2b8) + rbp_1) = zmm3_1
                int64_t* rax_6 = *(arg1 + 0x2c8)
                *(rax_6 + rdi_1) = zmm1_1
                *(rax_6 + rdi_1 + 8) = var_a0
                int64_t* rax_7 = *(arg1 + 0x258)
                *(rax_7 + rdi_1) = zmm5_1
                *(rax_7 + rdi_1 + 8) = var_b0
                int64_t* rax_8 = *(arg1 + 0x288)
                *(rax_8 + rdi_1) = zmm4_1
                *(rax_8 + rdi_1 + 8) = var_90
                *(rsi_1 + *(arg1 + 0x298)) = zmm2_1
                *(*(arg1 + 0x268) + rbp_1) = zmm3_1
                int64_t* rax_11 = *(arg1 + 0x278)
                *(rax_11 + rdi_1) = zmm1_1
                *(rax_11 + rdi_1 + 8) = var_a0
                result = *(arg1 + 0x1f0)
                *(rsi_1 + result) = 0
        
        i += 1
        rsi_1 = &rsi_1[1]
        rdi_1 += 0xc
        rbp_1 += 0x10
    while (i s< *(arg1 + 0x1dc))

return result
