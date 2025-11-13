// 函数: sub_142b9c6e0
// 地址: 0x142b9c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rsi = arg1

if (arg1 != 0)
    int64_t* rcx = *arg1
    
    if (rcx != 0 && rcx[1] == &data_14367f4a0)
        int64_t** arg_8
        int32_t rax = sub_142b9bd30(rcx, &arg_8)
        
        if (rax == 0)
            int64_t** r15_1 = arg_8
            int32_t rdi_1 = 0
            int32_t rbp_1
            rbp_1.b = sub_142b94cd0(&r15_1[4]) != 0
            
            if (arg3 != 0)
                int32_t rax_2
                rax_2.b = rbp_1 == 0
                rbp_1 = rax_2
            
            int32_t rax_3 = sub_142b9d910(arg2, &r15_1[4], 0)
            int32_t rbx_1 = rax_3
            
            if (rax_3 == 0)
                int32_t rbx_2 = 0
                
                if (arg2 != 0)
                    int32_t rax_5 = 0
                    uint64_t r9_1 = zx.q(rbp_1) * 6
                    int32_t rcx_3 = arg2[r9_1 * 2 + 0x10]
                    char* rdx_2 = *(arg2 + (r9_1 << 3) + 0x50)
                    
                    if (rcx_3 != 0)
                        while (true)
                            char r8 = *rdx_2
                            
                            if ((r8 & 4) != 0)
                                if (rax_5 != 0)
                                    goto label_142b9c7e2
                                
                                rax_5 = 1
                            else if (rax_5 == 0)
                                goto label_142b9c7e2
                            
                            if ((r8 & 8) != 0)
                                rax_5 = 0
                                rdi_1 += 1
                            
                            rbx_2 += 1
                            rdx_2 = &rdx_2[1]
                            int32_t temp0_1 = rcx_3
                            rcx_3 -= 1
                            
                            if (temp0_1 == 1)
                                if (rax_5 == 0)
                                    break
                                
                            label_142b9c7e2:
                                rbx_2 = 0
                                rdi_1 = 0
                                goto label_142b9c7f7
                    
                    arg2[r9_1 * 2 + 0x1a].b = 1
                
            label_142b9c7f7:
                sub_142b946e0(*r15_1, &r15_1[4])
                int32_t rax_6 = sub_142b94e50(*r15_1, rbx_2, rdi_1, &r15_1[4])
                rbx_1 = rax_6
                
                if (rax_6 == 0)
                    r15_1[4].d = 0
                    sub_142b9d6d0(arg2, rbp_1, &r15_1[4])
                    
                    if (arg4 != 0)
                        sub_142b9bc20(*rsi)
                    
                    *rsi = r15_1
                    return rbx_1
            
            sub_142b9bc20(r15_1)
            rax = rbx_1
            
            if (arg4 == 0)
                *rsi = nullptr
        
        return rax

return 6
