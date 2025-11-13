// 函数: sub_142237fa0
// 地址: 0x142237fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t r14_1 = 0
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    
    do
        float (* r9_1)[0x4] = *(arg1 + 0x10)
        void* rdi_2 = *arg2 + r14_1
        int64_t var_148 = 2
        int32_t var_140_1 = 0
        void** var_118
        result = sub_142231560(rdi_2, &var_118, arg1, r9_1)
        int32_t var_cc
        float zmm0_1[0x2] = var_cc
        zmm0_1[0] = zmm0_1[0] * 0.5f
        float var_140_2
        
        if (zmm0_1[0] < 9.99999975e-05f)
            var_140_2 = 9.99999975e-05f
        else
            var_140_2 = zmm0_1[0]
        
        bool cond:0_1 = var_148.d != 2
        int32_t var_d0
        float temp0_1[0x2] = _mm_max_ss(var_d0[0], 0x38d1b717)
        var_148:4.d = temp0_1[0]
        
        if (not(cond:0_1))
            result = _fpclass(_mm_cvtps_pd(temp0_1))
            
            if ((result & 0x207) == 0)
                result = _fpclass(_mm_cvtps_pd(var_140_2))
                
                if ((result & 0x207) == 0 && not(var_148:4.d[0] <= 0f) && not(var_140_2[0] <= 0f))
                    void var_dc
                    float var_c8[0x4]
                    float (* rax)[0x4] = sub_140ade170(&var_dc, &var_c8)
                    float zmm6_1 = data_143a2f130
                    float zmm5_1 = data_143a2f13c
                    float zmm7_1 = data_143a2f138
                    double zmm8_1 = *rax
                    zmm10 = (*rax)[3]
                    double zmm9_1 = (*rax)[1]
                    float zmm2_1[0x2] = zmm10.q
                    zmm11 = (*rax)[2]
                    float zmm4_1 = data_143a2f134
                    double zmm0_2
                    zmm0_2.d = zmm8_1.d f* zmm5_1
                    zmm2_1[0] = zmm2_1[0] * zmm6_1
                    zmm2_1[0] = zmm2_1[0] f+ zmm0_2.d
                    float zmm3_1 = zmm11.d * zmm5_1
                    zmm0_2.d = zmm11.q.d f* zmm4_1
                    zmm2_1[0] = zmm2_1[0] + zmm9_1.d * zmm7_1
                    float zmm1_1 = zmm11.d * zmm6_1
                    zmm11.d = zmm11.d f* zmm7_1
                    zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm9_1.d f* zmm5_1
                    float var_138 = zmm2_1[0]
                    zmm2_1 = zmm10.q
                    zmm2_1[0] = zmm2_1[0] * zmm4_1
                    zmm2_1[0] = zmm2_1[0] f+ zmm0_2.d
                    zmm0_2.d = zmm8_1.d f* zmm7_1
                    zmm2_1[0] = zmm2_1[0] + zmm1_1
                    zmm1_1 = zmm8_1.d * zmm4_1
                    zmm8_1.d = zmm8_1.d f* zmm6_1
                    zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm10.q.d f* zmm7_1
                    zmm10.d = zmm10.d f* zmm5_1
                    zmm3_1 = zmm3_1 f+ zmm0_2.d
                    float var_134_1 = zmm2_1[0]
                    int32_t var_e8
                    zmm2_1 = var_e8
                    zmm0_2.d = zmm9_1.d f* zmm6_1
                    zmm10.d = zmm10.d f- zmm8_1.d
                    zmm9_1.d = zmm9_1.d f* zmm4_1
                    float var_128_1 = zmm2_1[0]
                    zmm10.d = zmm10.d f- zmm9_1.d
                    int32_t var_e4
                    int32_t var_124_1 = var_e4.d
                    zmm10.d = zmm10.d f- zmm11.d
                    float var_130_1 = zmm3_1 + zmm1_1 f- zmm0_2.d
                    int32_t var_12c_1 = zmm10.d
                    result = _fpclass(_mm_cvtps_pd(zmm2_1))
                    
                    if ((result & 0x207) == 0)
                        result = _fpclass(_mm_cvtps_pd(var_124_1))
                        
                        if ((result & 0x207) == 0)
                            float var_e0
                            result = _fpclass(_mm_cvtps_pd(var_e0))
                            
                            if ((result & 0x207) == 0)
                                result = sub_1419f11b0(&var_138)
                                
                                if (result.b != 0)
                                    result = sub_142227e30(&var_138)
                                    
                                    if (result.b != 0)
                                        float zmm1_2 = var_148:4.d f* arg1[0xe]
                                        float zmm0_3 = arg1[0xf]
                                        float zmm2_2 = *(rdi_2 + 8)
                                        
                                        if (not(zmm1_2 < zmm0_3))
                                            zmm0_3 = _mm_min_ss(arg1[0x10], zmm1_2)
                                        
                                        int64_t rcx_4 = *(arg3 + 8)
                                        float arg_10 = zmm2_2
                                        float arg_20 = zmm0_3 + zmm2_2
                                        result = (*arg3)(rcx_4, rdi_2, &var_148, &var_138, &arg_20, 
                                            &arg_10)
        
        i += 1
        r14_1 += 0x50
    while (i s< arg2[1].d)

return result
