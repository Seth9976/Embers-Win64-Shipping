// 函数: sub_142a78da0
// 地址: 0x142a78da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s<= 0)
        int32_t* rax_3 = sub_142aea860(arg3)
        
        if (*(arg1 + 0x82) != 0)
            if (arg2 s>= 0)
                void* rdx = *(*(arg1 + 8) + 0x88)
                
                if (arg2 s<= *(rdx + 8))
                    int64_t rbp_1
                    int64_t r14
                    
                    if (arg2 != 0)
                        int32_t rax_5
                        
                        if (arg2 - 1 s>= 0)
                            rax_5 = *(rdx + 8)
                        
                        int32_t r9
                        
                        if (arg2 - 1 s< 0 || rax_5 s<= 0 || rax_5 - (arg2 - 1) s<= 0)
                            r9 = 0
                        else
                            r9 = *(*(rdx + 0x18) + (sx.q(arg2 - 1) << 2))
                        
                        int64_t rdx_1 = *(arg1 + 0xb8)
                        rbp_1 = *(rdx_1 + (sx.q(r9) << 3) + 0x10)
                        r14 = *(rdx_1 + (sx.q(r9 + 1) << 3) + 0x10)
                    else
                        rbp_1 = *(arg1 + 0x88)
                        r14 = *(arg1 + 0x90)
                    
                    if (rbp_1 s< 0)
                        return sx.q(sub_142aeaca0(arg3, rax_3, rax_3, 0, 0, arg4))
                    
                    void* rcx_4 = *(arg1 + 0x20)
                    
                    if (*(rcx_4 + 0x20) == 0)
                        int64_t rdx_3 = *(arg1 + 0x30)
                        
                        if (rdx_3 == *(rcx_4 + 0x10) && rdx_3 == sx.q(*(rcx_4 + 0x1c)))
                            return sx.q(sub_142aeaca0(arg3, rax_3, rax_3, 
                                *(rcx_4 + 0x30) + (rbp_1 << 1), r14.d - rbp_1.d, arg4))
                    
                    int32_t r15_2
                    
                    if (*(*(rcx_4 + 0x38) + 0x48) != 0)
                        int32_t arg_20 = 0
                        r15_2 = sub_142aea690(rcx_4, rbp_1, r14, 0, 0, &arg_20)
                    else
                        r15_2 = r14.d - rbp_1.d
                    
                    int64_t rax_11 = sub_142a7dd00(sx.q(r15_2 + 1) * 2)
                    
                    if (rax_11 == 0)
                        *arg4 = 7
                        return rax_11
                    
                    sub_142aea690(*(arg1 + 0x20), rbp_1, r14, rax_11, r15_2 + 1, arg4)
                    int64_t rbx_2 = sx.q(sub_142aeaca0(arg3, rax_3, rax_3, rax_11, r15_2, arg4))
                    sub_142a7dcd0(rax_11)
                    return rbx_2
            
            *arg4 = 8
        else
            *arg4 = 0x10302
        
        return sx.q(sub_142aeaca0(arg3, rax_3, rax_3, 0, 0, arg4))
    
    *arg4 = rax_1

return 0
