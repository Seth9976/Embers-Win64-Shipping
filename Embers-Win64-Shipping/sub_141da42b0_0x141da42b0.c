// 函数: sub_141da42b0
// 地址: 0x141da42b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rsi = *(arg1 + 0x10)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    uint128_t zmm7 = 0x4170000000000000
    int64_t rdi_2 = sx.q(rsi_1) << 4
    int32_t temp1_1
    
    do
        int64_t* rbx_1 = *(rdi_2 + *(arg1 + 8))
        arg2 = sub_141dae360(rbx_1, arg2)
        
        if (*(rbx_1 + 0x25c) == 0)
            int32_t rax_1 = rbx_1[0x4b].d
            
            if (rax_1 != 1)
                if (rax_1 == 2)
                    for (int64_t* i = rbx_1[0x5d]; i != &i[sx.q(rbx_1[0x5e].d) * 2]; i = &i[2])
                        if (*(*i + 8) == 4)
                            goto label_141da44df
                    
                    void* rcx_3 = rbx_1[0x5f]
                    
                    if (rcx_3 == 0 || *(rcx_3 + 8) != 4)
                        int32_t rax_4 = rbx_1[0x53].d
                        
                        if (rax_4 != 0 && rbx_1[0x50].d u>= rax_4)
                            rbx_1[0x53].d = 0
                        
                        if (rbx_1[0x47].d s>= rbx_1[0x4e].d && *(rbx_1 + 0x25d) == 0)
                            *(rbx_1 + 0x154) = 1
                        
                        if (rcx_3 == 0 && rbx_1[0x5e].d s<= 0)
                            int64_t performanceCount_1
                            QueryPerformanceCounter(&performanceCount_1)
                            
                            if (not(float.d(performanceCount_1) f* data_143d796f8 f+ zmm7.q
                                    f- rbx_1[0x49] f<= 0x4024000000000000))
                                sub_141dae750(rbx_1, 0)
                        
                        arg2 = sub_141da71d0(rbx_1)
                        
                        if (rbx_1[0x5f] == 0 && rbx_1[0x5e].d s<= 0 && *(rbx_1 + 0x25d) != 0)
                            int64_t performanceCount_2
                            QueryPerformanceCounter(&performanceCount_2)
                            
                            if (not(float.d(performanceCount_2) f* data_143d796f8 f+ zmm7.q
                                    f- rbx_1[0x4a] f<= 0x403e000000000000))
                                arg2 = sub_141da7ed0(rbx_1)
            else if (rbx_1[0x5f] == 0 && rbx_1[0x5e].d s<= 0)
                float zmm6_1[0x2] = *data_143f38850
                int64_t performanceCount[0x2]
                QueryPerformanceCounter(&performanceCount)
                arg2.q = float.d(performanceCount[0])
                double zmm0_1 = _mm_cvtps_pd(zmm6_1).q
                arg2.q = arg2.q f* data_143d796f8
                arg2.q = arg2.q f+ zmm7.q
                arg2.q = arg2.q f- rbx_1[0x48]
                
                if (not(arg2.q f<= zmm0_1))
                    arg2 = sub_141da9880(rbx_1)
        
    label_141da44df:
        void*** rcx_9 = *(arg1 + 8)
        result = *(rcx_9 + rdi_2 + 8)
        
        if (result != 0 && result[1].d == 1)
            result = *(rcx_9 + rdi_2)
            
            if (result[0x5f] == 0 && result[0x5e].d s<= 0)
                result = sub_140dbae50(arg1 + 8, rsi_1, 1, 1)
        
        rdi_2 -= 0x10
        temp1_1 = rsi_1
        rsi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
