// 函数: sub_1427711b0
// 地址: 0x1427711b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x20))()
sub_142774410(arg1[0x14])
arg1[0x16].d = 1
uint64_t result

if (arg3 - 0x1f40 u> 0x9c40 || arg4 u> 2)
    result.b = 0
else
    void* rbx_1 = data_143f879f0
    
    if (rbx_1 == 0)
        result.b = 0
    else
        int64_t* performanceCount
        int32_t result_1
        void* rbx_2
        
        if (arg2[1].d s<= 1)
            performanceCount = nullptr
            int32_t var_50_1 = 0
            sub_1405947f0(&performanceCount, 0xf)
            int32_t rax_1 = var_50_1 + 0xf
            var_50_1 = rax_1
            
            if (rax_1 s> 0)
                sub_140594770(&performanceCount)
            
            int64_t* performanceCount_3 = performanceCount
            UnDecorator::getReferenceType(performanceCount_3, u"Default Device", 0x1e)
            sub_142772340(rbx_1 + 0x50, &result_1, &performanceCount)
            int64_t result_2 = sx.q(result_1)
            
            if (result_2.d == 0xffffffff)
                result = 0
            else
                result = result_2 * 0x38 + *(rbx_1 + 0x50)
            
            rbx_2 = result + 0x10
            
            if (result == 0)
                rbx_2 = nullptr
            
            if (performanceCount_3 != 0)
                sub_140a74f90(performanceCount_3)
            
            goto label_1427712e8
        
        sub_142772340(rbx_1 + 0x50, &result_1, arg2)
        result = sx.q(result_1)
        
        if (result.d == 0xffffffff)
            result.b = 0
        else
            int64_t rbx_3 = result * 0x38
            
            if (rbx_3 == neg.q(*(rbx_1 + 0x50)))
                result.b = 0
            else
                rbx_2 = rbx_3 + *(rbx_1 + 0x50) + 0x10
            label_1427712e8:
                
                if (rbx_2 == 0)
                    result.b = 0
                else
                    *arg1[0x14] = *(rbx_2 + 0x10)
                    
                    if (Ordinal_DSOUND_12(rbx_2 + 0x10, arg1[0x14] + 0x10, 0).d s< 0)
                        result.b = 0
                    else
                        *(arg1[0x14] + 0x18) = 0x10
                        void* rdx_5 = arg1[0x14]
                        int64_t* rcx_8 = *(rdx_5 + 0x10)
                        
                        if ((*(*rcx_8 + 0x20))(rcx_8, rdx_5 + 0x18).d s< 0)
                            result.b = 0
                        else
                            *(arg1[0x14] + 0x30) = 1
                            *(arg1[0x14] + 0x32) = arg4.w
                            *(arg1[0x14] + 0x3e) = 0x10
                            *(arg1[0x14] + 0x34) = arg3
                            void* r8_2 = arg1[0x14]
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(zx.d(*(r8_2 + 0x3e)) * zx.d(*(r8_2 + 0x32)))
                            *(r8_2 + 0x3c) = ((temp3_1 + (temp2_1 & 7)) s>> 3).w
                            void* rcx_10 = arg1[0x14]
                            *(rcx_10 + 0x38) = zx.d(*(rcx_10 + 0x3c)) * *(rcx_10 + 0x34)
                            *(arg1[0x14] + 0x40) = 0
                            *(arg1[0x14] + 0x48) = 0x28
                            *(arg1[0x14] + 0x4c) = 0
                            void* rcx_11 = arg1[0x14]
                            *(rcx_11 + 0x50) = *(rcx_11 + 0x38) u>> 1
                            *(arg1[0x14] + 0x54) = 0
                            void* rcx_12 = arg1[0x14]
                            *(rcx_12 + 0x58) = rcx_12 + 0x30
                            *(arg1[0x14] + 0x60) = 0
                            *(arg1[0x14] + 0x68) = 0
                            void* rdx_9 = arg1[0x14]
                            int64_t* arg_8 = nullptr
                            int64_t* rcx_13 = *(rdx_9 + 0x10)
                            
                            if ((*(*rcx_13 + 0x18))(rcx_13, rdx_9 + 0x48, &arg_8, 0).d s< 0)
                                result.b = 0
                            else
                                int64_t* rcx_14 = arg_8
                                int32_t rax_28 =
                                    (**rcx_14)(rcx_14, &data_1435fc2e0, arg1[0x14] + 0x28)
                                int64_t* rcx_15 = arg_8
                                int64_t rdx_11 = *rcx_15
                                (*(rdx_11 + 0x10))(rcx_15, rdx_11)
                                arg_8 = nullptr
                                
                                if (rax_28 s< 0)
                                    result.b = 0
                                else
                                    *(arg1[0x14] + 0x70) = 0x10
                                    void* rdx_12 = arg1[0x14]
                                    int64_t* rcx_16 = *(rdx_12 + 0x28)
                                    
                                    if ((*(*rcx_16 + 0x18))(rcx_16, rdx_12 + 0x70).d s< 0)
                                        result.b = 0
                                    else
                                        void* rax_31 = arg1[0x14]
                                        performanceCount = nullptr
                                        int32_t rbx_5
                                        rbx_5.b = 0
                                        int64_t* rcx_17 = *(rax_31 + 0x28)
                                        
                                        if ((**rcx_17)(rcx_17, &data_1435fc2f0, &performanceCount).d
                                                s< 0)
                                            result.b = 0
                                        else
                                            *(arg1[0x14] + 0x80) =
                                                CreateEventW(nullptr, 1, 0, nullptr)
                                            int64_t rcx_19 = *(arg1[0x14] + 0x80)
                                            
                                            if (rcx_19 - 1 u<= -3)
                                                int64_t var_40_1 = rcx_19
                                                int64_t* performanceCount_1 = performanceCount
                                                int32_t var_48 = 0xffffffff
                                                
                                                if ((*(*performanceCount_1 + 0x18))(
                                                        performanceCount_1, 1, &var_48) s< 0)
                                                    CloseHandle(*(arg1[0x14] + 0x80))
                                                    *(arg1[0x14] + 0x80) = -1
                                                else
                                                    rbx_5.b = 1
                                            
                                            int64_t* performanceCount_2 = performanceCount
                                            (*(*performanceCount_2 + 0x10))(performanceCount_2)
                                            
                                            if (rbx_5.b == 0)
                                                result.b = 0
                                            else
                                                QueryPerformanceCounter(&performanceCount)
                                                void* rax_40 = arg1[0x14]
                                                arg1[0x15] =
                                                    float.d(performanceCount) f* data_143d796f8
                                                    + 16777216.0
                                                uint64_t i_2 = zx.q(*(rax_40 + 0x50))
                                                arg1[0x18].d = 0
                                                
                                                if (*(arg1 + 0xc4) != i_2.d)
                                                    sub_1405c5510(&arg1[0x17], i_2.d)
                                                
                                                if (i_2.d s> 0)
                                                    uint64_t i_1 = i_2
                                                    uint64_t i
                                                    
                                                    do
                                                        int64_t rsi_1 = sx.q(arg1[0x18].d)
                                                        int32_t rax_41 = (rsi_1 + 1).d
                                                        arg1[0x18].d = rax_41
                                                        
                                                        if (rax_41 s> *(arg1 + 0xc4))
                                                            sub_1405daba0(&arg1[0x17])
                                                        
                                                        if (rsi_1 != neg.q(arg1[0x17]))
                                                            *(rsi_1 + arg1[0x17]) = 0
                                                        
                                                        i = i_1
                                                        i_1 -= 1
                                                    while (i != 1)
                                                
                                                void* rdx_16 = arg1[0x14]
                                                *(arg1 + 0xe4) = zx.d(*(rdx_16 + 0x32))
                                                sub_142772a90(&arg1[0x25], *(rdx_16 + 0x78))
                                                int32_t rcx_26 = arg1[0x27].d
                                                int32_t rcx_27 = rcx_26 - 1
                                                
                                                if (rcx_26 - 1 s< 0)
                                                    rcx_27 += arg1[0x26].d
                                                
                                                *(arg1 + 0x13c) = rcx_27
                                                result.b = 1

return result
