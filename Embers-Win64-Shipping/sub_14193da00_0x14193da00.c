// 函数: sub_14193da00
// 地址: 0x14193da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7

if (data_143f0f161 != 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0xc))
    int64_t rdi_1 = *(*(arg1 + 0x28) + (rsi_1 << 3))
    
    if (*(rdi_1 + 0x3d) == 0 && sub_141955bc0(*(rdi_1 + 0x20)) == 0)
        sub_141958330(*(rdi_1 + 0x18), *(rdi_1 + 0x20))
        *(rdi_1 + 0x3d) = 1
    
    void* r14_1 = *(*(arg1 + 0x18) + (rsi_1 << 3))
    
    if (*(r14_1 + 0x3d) == 0)
        if (sub_141955bc0(*(r14_1 + 0x20)) == 0)
            sub_141958330(*(r14_1 + 0x18), *(r14_1 + 0x20))
            *(r14_1 + 0x3d) = 1
        
        if (*(r14_1 + 0x3d) == 0 && *(rdi_1 + 0x3d) == 0)
            int64_t performanceCount
            int64_t performanceCount_1
            int32_t arg_18
            int64_t performanceCount_2
            int64_t performanceCount_3
            int64_t performanceCount_4
            
            if (arg2 == 0)
                int32_t i = 1
                
                if (*(arg1 + 0x10) s> 1)
                    do
                        int64_t rax_5 = *(arg1 + 0x28)
                        arg_18 = 0
                        rdi_1 = sx.q(rsi_1.d)
                        data_143effcd0(zx.q(*(*(rax_5 + (rdi_1 << 3)) + 0x18)), 0x8867, &arg_18)
                        
                        if (arg_18 == 1)
                            performanceCount_2.d = 0
                            data_143effcd0(zx.q(*(*(*(arg1 + 0x18) + (rdi_1 << 3)) + 0x18)), 
                                0x8867, &performanceCount_2)
                            
                            if (performanceCount_2.d == 1)
                                int64_t rax_7 = *(arg1 + 0x28)
                                performanceCount = 0
                                data_143f001e8(zx.q(*(*(rax_7 + (rdi_1 << 3)) + 0x18)), 0x8866, 
                                    &performanceCount)
                                int64_t rax_8 = *(arg1 + 0x18)
                                performanceCount_1 = 0
                                data_143f001e8(zx.q(*(*(rax_8 + (rdi_1 << 3)) + 0x18)), 0x8866, 
                                    &performanceCount_1)
                                performanceCount_3 = performanceCount
                                performanceCount_4 = performanceCount_1
                                
                                if (performanceCount_3 u> performanceCount_4)
                                    return performanceCount_3 - performanceCount_4
                        
                        int32_t rcx_12 = *(arg1 + 8)
                        i += 1
                        rsi_1 = zx.q(mods.dp.d(sx.q(rcx_12 - 1 + rsi_1.d), rcx_12))
                    while (i s< *(arg1 + 0x10))
            
            int32_t rax_13 = *(arg1 + 0x10)
            
            if (rax_13 s> 0 || arg2 != 0)
                if (rax_13 == *(arg1 + 8) || arg2 != 0)
                    rdi_1.b = 1
                else
                    rdi_1.b = 0
                
                QueryPerformanceCounter(&performanceCount_1)
                QueryPerformanceCounter(&performanceCount_2)
                zmm7 = 0x3fe0000000000000
                zmm6.q = float.d(performanceCount_2)
                arg_18 = 0
                int64_t rsi_2 = sx.q(rsi_1.d)
                zmm6.q = zmm6.q f* data_143d796f8
                
                do
                    data_143effcd0(zx.q(*(*(*(arg1 + 0x28) + (rsi_2 << 3)) + 0x18)), 0x8867, 
                        &arg_18)
                    QueryPerformanceCounter(&performanceCount_2)
                    
                    if (float.d(performanceCount_2) f* data_143d796f8 f- zmm6.q f> zmm7.q)
                        return 0
                    
                    if (arg_18 != 0)
                        break
                while (rdi_1.b != 0)
                
                QueryPerformanceCounter(&performanceCount_2)
                data_143f138cc += performanceCount_2.d - performanceCount_1.d
                data_143f138d8:4.d += 1
                
                if (arg_18 == 1)
                    QueryPerformanceCounter(&performanceCount)
                    QueryPerformanceCounter(&performanceCount_1)
                    performanceCount_2.d = 0
                    zmm6.q = float.d(performanceCount_1)
                    zmm6.q = zmm6.q f* data_143d796f8
                    
                    do
                        data_143effcd0(zx.q(*(*(*(arg1 + 0x18) + (rsi_2 << 3)) + 0x18)), 0x8867, 
                            &performanceCount_2)
                        QueryPerformanceCounter(&performanceCount_1)
                        
                        if (float.d(performanceCount_1) f* data_143d796f8 f- zmm6.q f> zmm7.q)
                            return 0
                        
                        if (performanceCount_2.d != 0)
                            break
                    while (rdi_1.b != 0)
                    
                    QueryPerformanceCounter(&performanceCount_1)
                    data_143f138cc += performanceCount_1.d - performanceCount.d
                    
                    if (performanceCount_2.d == 1)
                        int64_t rax_20 = *(arg1 + 0x28)
                        performanceCount_1 = 0
                        data_143f001e8(zx.q(*(*(rax_20 + (rsi_2 << 3)) + 0x18)), 0x8866, 
                            &performanceCount_1)
                        int64_t rax_21 = *(arg1 + 0x18)
                        performanceCount = 0
                        data_143f001e8(zx.q(*(*(rax_21 + (rsi_2 << 3)) + 0x18)), 0x8866, 
                            &performanceCount)
                        performanceCount_3 = performanceCount_1
                        performanceCount_4 = performanceCount
                        
                        if (performanceCount_3 u> performanceCount_4)
                            return performanceCount_3 - performanceCount_4

return 0
