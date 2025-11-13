// 函数: sub_142b628c0
// 地址: 0x142b628c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rdx = arg1

if (*arg9 s<= 0)
    int64_t r14_1 = sx.q(arg8)
    
    if (r14_1.d s> 0)
        __builtin_memset(arg7, 0xffffffff, r14_1 << 2)
    
    int32_t rbp_1 = 1
    
    if (arg2 s> 1)
        while (true)
            int64_t rax_1 = sx.q(rbp_1)
            rbp_1 += 1
            uint64_t rdi_2 = zx.q(*(rdx + (rax_1 << 1)))
            
            if (rdi_2.d u>= 0x100)
                sub_142a48d70(arg4, rdx + (sx.q(rbp_1) << 1), 0, rdi_2.d - 0x100)
                rbp_1 += rdi_2.d - 0x100
            label_142b62a3c:
                rdx = arg1
                arg3 = arg_18
            label_142b62a49:
                
                if (rbp_1 s>= arg2)
                    break
                
                continue
            else
                void* rbx_1 = *(arg3 + (rdi_2 << 3))
                
                if (rbx_1 != 0)
                    if (rbx_1 != arg4)
                        if (rdi_2.d s< r14_1.d)
                            *(arg7 + (rdi_2 << 2)) = sub_142a4a1f0(arg4)
                        
                        int16_t rax_6 = *(rbx_1 + 8)
                        
                        if (rax_6 s< 0)
                            sub_142a48d00(arg4, rbx_1, 0, *(rbx_1 + 0xc))
                        else
                            sub_142a48d00(arg4, rbx_1, 0, sx.d(rax_6) s>> 5)
                        
                        goto label_142b62a3c
                    
                    if (arg6 == 0)
                        if (rbp_1 == 2)
                            if (rdi_2.d s< r14_1.d)
                                *(arg7 + (rdi_2 << 2)) = 0
                            
                            goto label_142b62a49
                        
                        if (rdi_2.d s< r14_1.d)
                            *(arg7 + (rdi_2 << 2)) = sub_142a4a1f0(arg4)
                        
                        int16_t rax_4 = *(arg5 + 8)
                        
                        if (rax_4 s< 0)
                            sub_142a48d00(arg4, arg5, 0, *(arg5 + 0xc))
                        else
                            sub_142a48d00(arg4, arg5, 0, sx.d(rax_4) s>> 5)
                        
                        goto label_142b62a3c
            
            *arg9 = 1
            break

return arg4
