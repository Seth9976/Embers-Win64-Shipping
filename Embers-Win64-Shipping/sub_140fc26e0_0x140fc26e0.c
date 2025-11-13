// 函数: sub_140fc26e0
// 地址: 0x140fc26e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140b16090(&data_143de57d0)

if (result != 0)
    result = sub_140aeeff0(data_143ddb400, u"ColorThemes", &data_143de57d0)
    int32_t i = 0
    
    if (data_143e2b7c8 s> 0)
        int64_t* r12_1 = nullptr
        
        do
            int64_t r14_1 = data_143e2b7c0
            int64_t* rax = *(r12_1 + r14_1)
            int16_t* rbx_1
            
            if (rax[1].d == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *rax
            
            int16_t* var_68
            sub_140a2e390(&var_68, u"Theme%i", zx.q(i))
            int16_t* const r8_2 = &data_142d40450
            int32_t var_60
            
            if (var_60 != 0)
                r8_2 = var_68
            
            result = sub_140b00d80(data_143ddb400, u"ColorThemes", r8_2, rbx_1, &data_143de57d0)
            int16_t* rcx_4 = var_68
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            void* r14_2 = *(r12_1 + r14_1)
            int32_t j = 0
            
            if (*(r14_2 + 0x18) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    int64_t* rcx_5 = *(rsi_1 + *(r14_2 + 0x10))
                    int64_t* rax_2 = *rcx_5
                    float zmm3_1[0x2] = *(rax_2 + 4)
                    float zmm2_1[0x2] = *rax_2
                    float zmm1_1[0x2] = rax_2[1].d
                    float zmm0_1[0x2] = _mm_cvtps_pd(*(rax_2 + 0xc))
                    _mm_cvtps_pd(zmm3_1)
                    zmm2_1 = _mm_cvtps_pd(zmm2_1)
                    float var_70_1[0x2] = zmm0_1
                    float var_78_1[0x2] = _mm_cvtps_pd(zmm1_1)
                    int16_t* var_48
                    sub_140a2e390(&var_48, u"(R=%f,G=%f,B=%f,A=%f)", zmm2_1)
                    int16_t* const rbx_2 = &data_142d40450
                    int32_t var_40
                    
                    if (var_40 != 0)
                        rbx_2 = var_48
                    
                    int16_t* var_58
                    sub_140a2e390(&var_58, u"Theme%iColor%i", zx.q(i))
                    int16_t* r8_5 = &data_142d40450
                    int32_t var_50
                    
                    if (var_50 != 0)
                        r8_5 = var_58
                    
                    sub_140b00d80(data_143ddb400, u"ColorThemes", r8_5, rbx_2, &data_143de57d0)
                    int16_t* rcx_9 = var_58
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    int16_t* rcx_10 = var_48
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    int16_t** rax_3 = sub_140ac6680(&rcx_5[2])
                    int16_t* rbx_3
                    
                    if (rax_3[1].d == 0)
                        rbx_3 = &data_142d40450
                    else
                        rbx_3 = *rax_3
                    
                    int16_t* var_38
                    sub_140a2e390(&var_38, u"Theme%iLabel%i", zx.q(i))
                    int16_t* r8_7 = &data_142d40450
                    int32_t var_30
                    
                    if (var_30 != 0)
                        r8_7 = var_38
                    
                    result =
                        sub_140b00d80(data_143ddb400, ColorThemes", r8_7, rbx_3, &data_143de57d0)
                    int16_t* rcx_14 = var_38
                    
                    if (rcx_14 != 0)
                        result = sub_140a74f90(rcx_14)
                    
                    j += 1
                    rsi_1 = &rsi_1[2]
                while (j s< *(r14_2 + 0x18))
            
            i += 1
            r12_1 = &r12_1[2]
        while (i s< data_143e2b7c8)

return result
