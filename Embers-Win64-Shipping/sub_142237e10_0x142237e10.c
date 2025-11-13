// 函数: sub_142237e10
// 地址: 0x142237e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rdi_1 = 0
    
    do
        float (* r9_1)[0x4] = *(arg1 + 0x10)
        void* rbp_2 = *arg2 + rdi_1
        int64_t var_b8 = 0
        void** var_88
        int32_t zmm6_1
        result, zmm6_1 = sub_1422313b0(rbp_2, &var_88, arg1, r9_1)
        int32_t var_4c
        float temp0_1[0x4] = _mm_max_ss(var_4c[0], 0x38d1b717)
        var_b8:4.d = temp0_1[0]
        
        if (var_b8.d == 0)
            result = _fpclass(_mm_cvtps_pd(temp0_1[0].q)[0].q)
            
            if ((result & 0x207) == 0)
                float zmm2_1 = var_b8:4.d
                
                if (not(zmm2_1 f<= zmm6_1))
                    zmm2_1 = zmm2_1 f* arg1[0xe]
                    float var_b0[0x4] = data_142d3f660
                    int32_t var_58
                    float var_a0_1 = var_58[0]
                    int32_t var_50
                    float var_98_1 = var_50[0]
                    float zmm0_1[0x4] = arg1[0xf]
                    int32_t var_54
                    int32_t var_9c_1 = var_54
                    int32_t zmm1_1 = *(rbp_2 + 8)
                    
                    if (not(zmm2_1 < zmm0_1[0]))
                        zmm0_1 = _mm_min_ss(arg1[0x10][0], zmm2_1)
                    
                    int64_t rcx_1 = *(arg3 + 8)
                    zmm0_1[0] = zmm0_1[0] f+ zmm1_1
                    int32_t arg_10 = zmm1_1
                    float arg_20 = zmm0_1[0]
                    result = (*arg3)(rcx_1, rbp_2, &var_b8, &var_b0, &arg_20, &arg_10)
        
        i += 1
        rdi_1 += 0x40
    while (i s< arg2[1].d)

return result
