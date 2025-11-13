// 函数: sub_142746300
// 地址: 0x142746300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_141f20c10(arg1, arg2 | 1, arg3)

if (*(arg1 + 0x430) != 0 && (*(arg1 + 0x88) & 4) != 0 && (not.b(arg2.b) & 1) != 0)
    int64_t* rcx = *(arg1 + 0x680)
    
    if (rcx != 0)
        float var_18_1[0x4] = zmm6
        float var_28_1[0x4] = zmm7
        float var_38_1[0x4] = zmm8
        float var_48_1[0x4] = zmm9
        float var_58_1[0x4] = zmm10
        float var_68_1[0x4] = zmm11
        float var_78_1[0x4] = zmm12
        int64_t* rax_1 = (*(*rcx + 0xd0))(rcx, 0)
        zmm8 = *(arg1 + 0x1c0)
        zmm12 = *(arg1 + 0x1d0)
        zmm8[0] = zmm8[0] + zmm8[0]
        float var_98_1 = zmm12[0]
        int32_t var_bc_1 = 0
        float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        float zmm1_1 = temp0_1[0] + temp0_1[0]
        int32_t var_ac_1 = 0
        int32_t var_9c_1 = 0
        temp0_2[0] = temp0_2[0] * zmm8[0]
        int32_t var_8c_1 = 0x3f800000
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        temp0_1[0] = temp0_1[0] * zmm1_1
        temp0_1[0] = temp0_1[0] * zmm8[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
        temp0_2[0] = temp0_2[0] * zmm1_1
        float zmm5_1 = temp0_3[0] * zmm8[0]
        float zmm4_1 = temp0_3[0]
        temp0_3[0] = temp0_3[0] * temp0_2[0]
        float zmm0_1[0x4] = 0x3f800000
        zmm4_1 = zmm4_1 * zmm1_1
        zmm1_1 = temp0_2[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        float zmm2_1[0x4] = 0x3f800000
        zmm0_1[0] = 1f - temp0_1[0]
        zmm1_1 = zmm1_1 - zmm4_1
        zmm2_1[0] = 1f - zmm8[0]
        zmm4_1 = zmm4_1 + temp0_2[0]
        zmm0_1[0] = zmm0_1[0] - temp0_2[0]
        float var_c0_1 = zmm1_1
        zmm1_1 = temp0_2[0]
        temp0_2[0] = temp0_2[0] - zmm5_1
        float var_c8 = zmm0_1[0]
        temp0_3[0] = temp0_3[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] - temp0_3[0]
        float var_a4_1 = temp0_2[0]
        float var_b0_1 = zmm1_1 + zmm5_1
        float var_c4_1 = temp0_3[0]
        zmm2_1[0] = zmm2_1[0] - temp0_2[0]
        float var_b8_1 = temp0_1[0]
        zmm2_1[0] = zmm2_1[0] - temp0_1[0]
        float var_b4_1 = zmm2_1[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        float var_90_1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)[0]
        float var_a0_1 = zmm2_1[0]
        float var_94_1 = temp0_4[0]
        
        if (rax_1 != 0)
            int64_t rax_3
            int64_t r8
            rax_3, r8 = (*(*rax_1 + 0x30))(rax_1)
            
            if (rax_3 == 0)
                float var_f8 = var_c8[0]
                float var_f0_1 = var_c0_1[0]
                float var_f4_1 = var_c4_1
                float var_e8_1 = var_b4_1[0]
                float var_ec_1 = var_b8_1
                float var_e0_1 = zmm4_1[0]
                float var_e4_1 = var_b0_1
                float var_d8_1 = var_a0_1[0]
                float var_dc_1 = var_a4_1
                int32_t var_88[0x4]
                int32_t* rax_4 = sub_142742ed0(&var_88, &var_f8)
                r8.b = 1
                var_f8 = *rax_4
                float var_f4_2 = rax_4[1]
                float var_f0_2 = rax_4[2]
                float var_ec_2 = rax_4[3]
                float var_e8_2 = var_98_1
                float var_e4_2 = var_94_1
                float var_e0_2 = var_90_1
                return (*(*rax_1 + 0xa8))(rax_1, &var_f8, r8)
        
        int64_t* rcx_4 = *(arg1 + 0x680)
        return (*(*rcx_4 + 0x118))(rcx_4, &var_c8)

return result
