// 函数: sub_140bbdae0
// 地址: 0x140bbdae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
double zmm7[0x2] = arg2
int128_t zmm8
int128_t var_38 = zmm8
int64_t result

if (*(arg1 + 0x98) != 0 || data_143de5452 != 0 || *(arg1 + 0xa8) != 0 || *(arg1 + 0xb0) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t* rdi_1 = *(arg1 + 0x98)
    zmm8.q = float.d(performanceCount)
    zmm8.q = zmm8.q f* data_143d796f8
    
    if (rdi_1 == 0)
    label_140bbdb93:
        
        if (data_143de5452 != 0)
            result.b = 1
        else
            zmm6 = zx.o(0)
            int64_t zmm0
            
            if (*(arg1 + 0xa8) == 0)
            label_140bbdc38:
                
                if (*(arg1 + 0xb0) == 0)
                    result.b = 1
                else
                    if (not(zmm7[0].d f<= 0f))
                        QueryPerformanceCounter(&performanceCount)
                        arg2 = zx.o(0)
                        zmm0 = float.d(performanceCount)
                        arg2[0] = fconvert.d(zmm7[0].d)
                        arg2[0] = arg2[0] f- (zmm0 f* data_143d796f8 f- zmm8.q)
                        zmm6 = _mm_cvtpd_ps(arg2)
                    
                    if (not(zmm7[0].d f<= 0f) && zmm6[0] < 0.00101000001f)
                        result.b = 0
                    else
                        int64_t* rdi_3 = *(arg1 + 0xb0)
                        
                        if (*(rdi_3 + 0x61) == 0)
                            (*(*rdi_3 + 8))(rdi_3, zmm6)
                        
                        if (*(rdi_3 + 0x61) != 0 || *(rdi_3 + 0x61) != 0)
                            int64_t* rcx_8 = *(arg1 + 0xb0)
                            
                            if (rcx_8 != 0)
                                (**rcx_8)(rcx_8, 1)
                            
                            *(arg1 + 0xb0) = 0
                            result.b = 1
                        else
                            result.b = 0
            else
                arg2 = zx.o(0)
                
                if (not(zmm7[0].d f<= 0f))
                    QueryPerformanceCounter(&performanceCount)
                    arg2 = zx.o(0)
                    zmm0 = float.d(performanceCount)
                    arg2[0] = fconvert.d(zmm7[0].d)
                    arg2[0] = arg2[0] f- (zmm0 f* data_143d796f8 f- zmm8.q)
                    arg2 = _mm_cvtpd_ps(arg2)
                
                if (not(zmm7[0].d f<= 0f) && arg2[0].d f< 0.00101000001f)
                    result.b = 0
                else
                    int64_t* rdi_2 = *(arg1 + 0xa8)
                    
                    if (*(rdi_2 + 0x61) == 0)
                        (*(*rdi_2 + 8))(rdi_2, arg2)
                    
                    if (*(rdi_2 + 0x61) != 0 || *(rdi_2 + 0x61) != 0)
                        int64_t* rcx_5 = *(arg1 + 0xa8)
                        
                        if (rcx_5 != 0)
                            (**rcx_5)(rcx_5, 1)
                        
                        *(arg1 + 0xa8) = 0
                        goto label_140bbdc38
                    
                    result.b = 0
    else
        if (*(rdi_1 + 0x61) == 0)
            (*(*rdi_1 + 8))(rdi_1, zmm7)
        
        if (*(rdi_1 + 0x61) != 0 || *(rdi_1 + 0x61) != 0)
            int64_t* rcx_2 = *(arg1 + 0x98)
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            *(arg1 + 0x98) = 0
            goto label_140bbdb93
        
        result.b = 0
else
    result.b = 1

return result
