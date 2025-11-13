// 函数: sub_140bbbde0
// 地址: 0x140bbbde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x84))
    *(arg1 + 0x84) = 0
    z = true
else
    *(arg1 + 0x84)
    z = false

char r9 = not(z)

if (r9 != 0)
    return zx.q((zx.d(r9) ^ 1) + 1)

char r15_1 = data_143e1a340
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm10 = 0x4170000000000000
int128_t zmm6
zmm6.q = float.d(performanceCount)
bool arg_8 = false
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ zmm10.q
int32_t rax_5
double zmm6_1
int32_t zmm8_1
rax_5, zmm6_1, zmm8_1 = sub_140bb2b90(arg1, arg2, zx.q(arg3), arg4.q, &arg_8, arg5)
int32_t r12_1 = rax_5
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int64_t zmm9_1 = float.d(performanceCount_1) f* data_143d796f8 f+ zmm10.q f- zmm6_1
float zmm0_1[0x2]
int128_t zmm1_1
int128_t zmm2_1
double zmm7_1[0x2]

if (r15_1 != 0)
label_140bbbfc0:
    
    if (r12_1 != 0)
        zmm7_1 = zx.o(0)
        zmm7_1[0] = fconvert.d(zmm8_1)
        bool rax_9
        
        if (arg2 != 0)
            int64_t performanceCount_3
            QueryPerformanceCounter(&performanceCount_3)
            zmm1_1.q = float.d(performanceCount_3)
            zmm1_1.q = zmm1_1.q f* data_143d796f8
            zmm1_1.q = zmm1_1.q f+ zmm10.q
            zmm2_1.q = zmm1_1.q f- zmm6_1
            rax_9 = zmm2_1.q f> zmm7_1[0]
            
            if (rax_9 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6_1)
                    && not(zmm2_1.q f<= _mm_cvtps_pd(data_1439a9644)))
                zmm0_1 = data_1439a9640
                zmm0_1[0] = zmm0_1[0] f* zmm8_1
                
                if (not(zmm2_1.q f<= _mm_cvtps_pd(zmm0_1)))
                    data_1439a9888 = zmm6_1
            
            data_1439a9890 = zmm1_1.q
        
        if (arg2 == 0 || rax_9 == 0)
            void* rcx_7 = data_143e1adf0
            bool z_2
            
            if (0 == *(rcx_7 + 8))
                *(rcx_7 + 8) = 0
                z_2 = true
            else
                *(rcx_7 + 8)
                z_2 = false
            
            rcx_7.b = not(z_2)
            
            if (rcx_7.b == 0)
                EnterCriticalSection(arg1 + 0x58)
                EnterCriticalSection(arg1 + 0xe8)
                bool z_3
                
                if (0 == *(arg1 + 0x2bc))
                    *(arg1 + 0x2bc) = 0
                    z_3 = true
                else
                    *(arg1 + 0x2bc)
                    z_3 = false
                
                if (z_3)
                    arg_8 = true
                    sub_140bc74b0()
                    bool rax_12
                    
                    if (arg2 != 0)
                        int64_t performanceCount_4
                        QueryPerformanceCounter(&performanceCount_4)
                        zmm1_1.q = float.d(performanceCount_4)
                        zmm1_1.q = zmm1_1.q f* data_143d796f8
                        zmm1_1.q = zmm1_1.q f+ zmm10.q
                        zmm2_1.q = zmm1_1.q f- zmm6_1
                        rax_12 = zmm2_1.q f> zmm7_1[0]
                        
                        if (rax_12 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6_1)
                                && not(zmm2_1.q f<= _mm_cvtps_pd(data_1439a9644)))
                            zmm0_1 = data_1439a9640
                            zmm0_1[0] = zmm0_1[0] f* zmm8_1
                            
                            if (not(zmm2_1.q f<= _mm_cvtps_pd(zmm0_1)))
                                data_1439a9888 = zmm6_1
                        
                        data_1439a9890 = zmm1_1.q
                    
                    if (arg2 == 0 || rax_12 == 0)
                        void* rcx_11 = data_143e1adf0
                        
                        if (0 == *(rcx_11 + 8))
                            *(rcx_11 + 8) = 0
                        else
                            *(rcx_11 + 8)
                
                if (arg1 != -0xe8)
                    LeaveCriticalSection(arg1 + 0xe8)
                
                if (arg1 != -0x58)
                    LeaveCriticalSection(arg1 + 0x58)
                
                if (arg_8 == 0 && data_143de5452 != 0)
                    if (r15_1 == 0)
                        if (data_14399fa4c == 0)
                            zmm6_1 = sub_140b9c9a0(arg1)
                        else
                            int64_t* rcx_16 = *(arg1 + 0x10)
                            bool rax_17 = (*(*rcx_16 + 0x18))(rcx_16, 0)
                            bool rbx_2 = rax_17
                            arg_8 = rax_17
                            rax_17 = false
                            
                            if (arg2 != 0)
                                int64_t performanceCount_6
                                QueryPerformanceCounter(&performanceCount_6)
                                zmm1_1.q = float.d(performanceCount_6)
                                zmm1_1.q = zmm1_1.q f* data_143d796f8
                                zmm1_1.q = zmm1_1.q f+ zmm10.q
                                zmm2_1.q = zmm1_1.q f- zmm6_1
                                rax_17 = zmm2_1.q f> zmm7_1[0]
                                
                                if (rax_17 != 0 && data_143e1a324 != 0
                                        && not(data_1439a9888 f== zmm6_1)
                                        && not(zmm2_1.q f<= _mm_cvtps_pd(data_1439a9644)))
                                    zmm0_1 = data_1439a9640
                                    zmm0_1[0] = zmm0_1[0] f* zmm8_1
                                    
                                    if (not(zmm2_1.q f<= _mm_cvtps_pd(zmm0_1)))
                                        data_1439a9888 = zmm6_1
                                
                                data_1439a9890 = zmm1_1.q
                            
                            if (rax_17 == 0)
                                void* rcx_18 = data_143e1adf0
                                
                                if (0 == *(rcx_18 + 8))
                                    *(rcx_18 + 8) = 0
                                else
                                    *(rcx_18 + 8)
                                
                                rbx_2 = arg_8
                            
                            if (rbx_2 == 0)
                                int64_t* rcx_19 = *(arg1 + 0x10)
                                bool rax_20 = (*(*rcx_19 + 0x10))(rcx_19)
                                arg_8 = rax_20
                                bool rbx_3 = rax_20
                                bool rax_21
                                
                                if (arg2 != 0)
                                    int64_t performanceCount_7
                                    QueryPerformanceCounter(&performanceCount_7)
                                    zmm1_1.q = float.d(performanceCount_7)
                                    zmm1_1.q = zmm1_1.q f* data_143d796f8
                                    zmm1_1.q = zmm1_1.q f+ zmm10.q
                                    zmm2_1.q = zmm1_1.q f- zmm6_1
                                    rax_21 = zmm2_1.q f> zmm7_1[0]
                                    
                                    if (rax_21 != 0 && data_143e1a324 != 0
                                            && not(data_1439a9888 f== zmm6_1)
                                            && not(zmm2_1.q f<= _mm_cvtps_pd(data_1439a9644)))
                                        zmm0_1 = data_1439a9640
                                        zmm0_1[0] = zmm0_1[0] f* zmm8_1
                                        
                                        if (not(zmm2_1.q f<= _mm_cvtps_pd(zmm0_1)))
                                            data_1439a9888 = zmm6_1
                                    
                                    data_1439a9890 = zmm1_1.q
                                
                                if (arg2 == 0 || rax_21 == 0)
                                    void* rcx_21 = data_143e1adf0
                                    
                                    if (0 == *(rcx_21 + 8))
                                        *(rcx_21 + 8) = 0
                                    else
                                        *(rcx_21 + 8)
                                    
                                    rbx_3 = arg_8
                                
                                if (rbx_3 == 0)
                                    zmm6_1 = sub_140b9c9a0(arg1)
                        
                        if (arg2 == 0)
                            goto label_140bbc3d1
                        
                        int64_t performanceCount_8[0x2]
                        QueryPerformanceCounter(&performanceCount_8)
                        zmm1_1.q = float.d(performanceCount_8[0])
                        goto label_140bbc360
                    
                    if (data_14399fa4c != 0)
                        int64_t* rcx_14 = *(arg1 + 0x10)
                        (*(*rcx_14 + 0x10))(rcx_14)
                        
                        if (arg2 == 0)
                        label_140bbc3d1:
                            void* rcx_24 = data_143e1adf0
                            
                            if (0 == *(rcx_24 + 8))
                                *(rcx_24 + 8) = 0
                            else
                                *(rcx_24 + 8)
                        else
                            int64_t performanceCount_5
                            QueryPerformanceCounter(&performanceCount_5)
                            zmm1_1.q = float.d(performanceCount_5)
                        label_140bbc360:
                            zmm1_1.q = zmm1_1.q f* data_143d796f8
                            zmm1_1.q = zmm1_1.q f+ zmm10.q
                            zmm2_1.q = zmm1_1.q f- zmm6_1
                            bool rax_15 = zmm2_1.q f> zmm7_1[0]
                            bool cond:0_1 = rax_15 != 0
                            
                            if (rax_15 != 0)
                                if (data_143e1a324 != 0 && not(data_1439a9888 f== zmm6_1)
                                        && not(zmm2_1.q f<= _mm_cvtps_pd(data_1439a9644)))
                                    zmm0_1 = data_1439a9640
                                    zmm0_1[0] = zmm0_1[0] f* zmm8_1
                                    
                                    if (not(zmm2_1.q f<= _mm_cvtps_pd(zmm0_1)))
                                        data_1439a9888 = zmm6_1
                                
                                cond:0_1 = rax_15 != 0
                            
                            data_1439a9890 = zmm1_1.q
                            
                            if (not(cond:0_1))
                                goto label_140bbc3d1
else if (r12_1 != 0)
    zmm7_1 = zx.o(0)
    zmm7_1[0] = fconvert.d(zmm8_1)
    bool rax_6
    
    if (arg2 != 0)
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        zmm2_1.q = float.d(performanceCount_2)
        zmm2_1.q = zmm2_1.q f* data_143d796f8
        zmm2_1.q = zmm2_1.q f+ zmm10.q
        zmm1_1.q = zmm2_1.q f- zmm6_1
        rax_6 = zmm1_1.q f> zmm7_1[0]
        
        if (rax_6 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6_1)
                && not(zmm1_1.q f<= _mm_cvtps_pd(data_1439a9644)))
            zmm0_1 = data_1439a9640
            zmm0_1[0] = zmm0_1[0] f* zmm8_1
            
            if (not(zmm1_1.q f<= _mm_cvtps_pd(zmm0_1)))
                data_1439a9888 = zmm6_1
        
        data_1439a9890 = zmm2_1.q
    
    if (arg2 == 0 || rax_6 == 0)
        void* rcx_4 = data_143e1adf0
        bool z_1
        
        if (0 == *(rcx_4 + 8))
            *(rcx_4 + 8) = 0
            z_1 = true
        else
            *(rcx_4 + 8)
            z_1 = false
        
        rcx_4.b = not(z_1)
        
        if (rcx_4.b == 0)
            zmm7_1[0] = zmm7_1[0] f- zmm9_1
            int32_t rax_8
            rax_8, zmm6_1, zmm8_1, zmm10 = sub_140bbca90(arg1, arg2, arg3, 
                _mm_cvtpd_ps(_mm_max_sd(zmm7_1[0], (zx.o(0)).q)), &arg_8, arg5)
            r12_1 = rax_8
    
    goto label_140bbbfc0
sub_140599090(&data_14399fad8)
return zx.q(r12_1)
