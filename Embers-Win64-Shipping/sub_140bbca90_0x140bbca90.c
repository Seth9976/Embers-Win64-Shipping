// 函数: sub_140bbca90
// 地址: 0x140bbca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_48 = zmm8
int32_t rsi = 2
bool z

if (0 == *(arg1 + 0x80))
    *(arg1 + 0x80) = 0
    z = true
else
    *(arg1 + 0x80)
    z = false

int128_t zmm6

if (not(z))
    int64_t performanceCount_3
    QueryPerformanceCounter(&performanceCount_3)
    zmm8 = 0x4170000000000000
    zmm6.q = float.d(performanceCount_3)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ zmm8.q
    double zmm6_3 = sub_140b9c4c0(arg1)
    bool rax_14
    
    if (arg2 != 0)
        int64_t performanceCount_4
        QueryPerformanceCounter(&performanceCount_4)
        double zmm1_2 = float.d(performanceCount_4) f* data_143d796f8 f+ zmm8.q
        double zmm2_2 = zmm1_2 - zmm6_3
        rax_14 = zmm2_2 f> fconvert.d(arg4.d)
        
        if (rax_14 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6_3)
                && not(zmm2_2 f<= _mm_cvtps_pd(data_1439a9644).q))
            int64_t zmm0_3
            zmm0_3.d = data_1439a9640.d f* arg4.d
            
            if (not(zmm2_2 f<= _mm_cvtps_pd(zmm0_3).q))
                data_1439a9888 = zmm6_3
        
        data_1439a9890 = zmm1_2
    
    if (arg2 == 0 || rax_14 == 0)
        void* rcx_18 = data_143e1adf0
        
        if (0 == *(rcx_18 + 8))
            *(rcx_18 + 8) = 0
        else
            *(rcx_18 + 8)
    
    *(arg1 + 0x80)
    *(arg1 + 0x80) = 0
else
    int32_t var_74 = 0
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    bool z_1
    
    if (0 == *(arg1 + 0x2c0))
        *(arg1 + 0x2c0) = 0
        z_1 = true
    else
        *(arg1 + 0x2c0)
        z_1 = false
    
    if (z_1)
        goto label_140bbcc2c
    
    if (data_14399fa4c != 0 && data_143de5452 != 0)
        int64_t* rcx_1 = *(arg1 + 0x10)
        (*(*rcx_1 + 0x18))(rcx_1, 0)
    
    void arg_8
    sub_140cad130(&arg_8)
    int64_t zmm6_1
    uint128_t zmm7_1
    zmm6_1, zmm7_1 = sub_140b9e5a0(arg1, arg2, zx.q(arg3), arg4, arg6)
    sub_140cad790()
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    void* rcx_5 = data_143e1adf0
    double zmm0_1[0x2] = zx.o(0)
    zmm0_1[0] = float.d(performanceCount_1)
    zmm0_1[0] = zmm0_1[0] f* data_143d796f8
    zmm0_1[0] = zmm0_1[0] + 16777216.0
    zmm0_1[0] = zmm0_1[0] f- zmm6_1
    zmm8.d = zmm7_1.d f- _mm_cvtpd_ps(zmm0_1)[0].d
    zmm8 = _mm_max_ss(zmm8.d, 0)
    bool z_2
    
    if (0 == *(rcx_5 + 8))
        *(rcx_5 + 8) = 0
        z_2 = true
    else
        *(rcx_5 + 8)
        z_2 = false
    
    if (not(z_2) || (not(zmm8.d f> 0f) && arg2 != 0 && data_143e1a340 == 0))
        rsi = 0
    label_140bbcc2c:
        
        if (data_143e1a340 != 0 && rsi == 2)
            int32_t r14_2 = rsi + 0x1c
            char rax_6
            int64_t r8_2
            float zmm7_2
            rax_6, r8_2, zmm7_2 = sub_140bac910()
            
            if (rax_6 != 0)
                int64_t* rcx_9 = *(arg1 + 0x10)
                char rax_8
                rax_8, r8_2 = (*(*rcx_9 + 0x20))(rcx_9)
                
                if (rax_8 != 0)
                    r14_2 = 1
                else
                    void* rcx_10 = data_143e1adf0
                    bool z_3
                    
                    if (0 == *(rcx_10 + 8))
                        *(rcx_10 + 8) = 0
                        z_3 = true
                    else
                        *(rcx_10 + 8)
                        z_3 = false
                    
                    if (not(z_3))
                        r14_2 = 1
                    else
                        bool z_4
                        
                        if (0 == data_143e1adfc)
                            data_143e1adfc = 0
                            z_4 = true
                        else
                            data_143e1adfc
                            z_4 = false
                        
                        if (not(z_4))
                            r14_2 = 1
                        else
                            double zmm6_2
                            r8_2, zmm6_2 = sub_140b9c9a0(arg1)
                            bool rax_11
                            
                            if (arg2 != 0)
                                int64_t performanceCount_2
                                QueryPerformanceCounter(&performanceCount_2)
                                int64_t zmm1_1 =
                                    float.d(performanceCount_2) f* data_143d796f8 f+ 16777216.0
                                int64_t zmm2_1 = zmm1_1 f- zmm6_2
                                rax_11 = zmm2_1 f> fconvert.d(zmm7_2)
                                
                                if (rax_11 != 0 && data_143e1a324 != 0
                                        && not(data_1439a9888 f== zmm6_2)
                                        && not(zmm2_1 f<= _mm_cvtps_pd(data_1439a9644).q))
                                    int64_t zmm0_2
                                    zmm0_2.d = data_1439a9640.d f* zmm7_2
                                    
                                    if (not(zmm2_1 f<= _mm_cvtps_pd(zmm0_2).q))
                                        data_1439a9888 = zmm6_2
                                
                                data_1439a9890 = zmm1_1
                            
                            if (arg2 == 0 || rax_11 == 0)
                                void* rcx_13 = data_143e1adf0
                                
                                if (0 == *(rcx_13 + 8))
                                    *(rcx_13 + 8) = 0
                                else
                                    *(rcx_13 + 8)
            
            int64_t* rcx_14 = *(arg1 + 0x28)
            r8_2.b = 1
            (*(*rcx_14 + 0x20))(rcx_14, zx.q(r14_2), r8_2)
    else
        void var_78
        sub_140cad130(&var_78)
        void* var_80_1 = arg6
        void* var_88_1
        var_88_1.d = zmm8.d
        rsi = sub_140bb14b0(arg1, &var_74, arg2, arg3, var_88_1)
        int32_t r14_1 = var_74
        int32_t rax_5
        
        if (*arg5 != 0 || r14_1 s> 0)
            rax_5.b = 1
        else
            rax_5.b = 0
        
        *arg5 = rax_5.b
        sub_140cad790()
        
        if (r14_1 == 0)
            goto label_140bbcc2c
return zx.q(rsi)
