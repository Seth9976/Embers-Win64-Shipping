// 函数: sub_142b8e0b0
// 地址: 0x142b8e0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    int64_t i_1 = 0x1c0
    int32_t rcx_1 = *(arg1 + 0x1cc8) + 0x1c0
    int16_t rax_1 = *(arg1 + 0x1c90)
    int64_t i_2 = 0x1c0
    int32_t var_58_1 = rcx_1
    int32_t var_50_1
    
    if (rax_1 s< 0)
        var_50_1 = *(arg1 + 0x1c94)
    else
        var_50_1 = sx.d(rax_1) s>> 5
    
    int32_t rsi_1 = 0
    void* rax_3 = arg1 + 0x18
    int32_t var_54_1 = 0
    void* var_48_1 = rax_3
    uint16_t arg_18
    int64_t i
    
    do
        int64_t rdx_2 = *rax_3
        
        if ((rdx_2 s>> 0x20).d == 1 && rdx_2 != 0x101000100)
            int16_t rax_6 = *(arg1 + 0x1c90)
            int32_t r8_2
            
            if (rax_6 s< 0)
                r8_2 = *(arg1 + 0x1c94)
            else
                r8_2 = sx.d(rax_6) s>> 5
            
            int32_t r8_3 = r8_2 - rcx_1
            
            if (r8_3 s<= 0x3ff)
                uint64_t rdx_5 = zx.q(rdx_2.d) & 0x7fffffff
                rcx_1.b = 1
                int32_t r12_1 = rdx_5.d
                int64_t rbp_1 = rdx_5 + 2
                int64_t r14_1 = rbp_1 << 3
                int32_t r15_1 = (rdx_5 + 2).d
                
                while (true)
                    int32_t rbx_1
                    
                    if (rbp_1 - 2 s< 0 || r12_1 s>= *(arg1 + 0x1c20))
                        rbx_1 = 0
                    else
                        rbx_1 = *(*(arg1 + 0x1c30) + r14_1 - 0x10)
                        
                        if (rbx_1 == 0x1ff && rcx_1.b == 0)
                            break
                    
                    int64_t rdx_8
                    
                    if (rbp_1 - 1 s< 0 || r15_1 - 1 s>= *(arg1 + 0x1c20))
                        rdx_8 = 0
                    else
                        rdx_8 = *(*(arg1 + 0x1c30) + r14_1 - 8)
                    
                    int64_t r8_5
                    
                    if (rbp_1 s< 0 || r15_1 s>= *(arg1 + 0x1c20))
                        r8_5 = 0
                    else
                        r8_5 = *(r14_1 + *(arg1 + 0x1c30))
                    
                    int32_t rax_17 = sub_142b8e410(arg1, rdx_8, r8_5)
                    int16_t* rdx_9 = &arg_18
                    void* rcx_5 = arg1 + 0x1c88
                    
                    if (rax_17 == 1)
                        rbx_1.w |= 0x200
                        arg_18 = rbx_1.w
                    else if (rax_17 u> 0xffff)
                        rbx_1.w |= 0x600
                        arg_18 = rbx_1.w
                        sub_142a48d70(rcx_5, rdx_9, 0, 1)
                        int16_t arg_20 = rax_17.w
                        arg_18 = (rax_17 u>> 0x10).w
                        rdx_9 = &arg_20
                        rcx_5 = sub_142a48d70(arg1 + 0x1c88, &arg_18, 0, 1)
                    else
                        rbx_1.w |= 0x400
                        arg_18 = rbx_1.w
                        sub_142a48d70(rcx_5, rdx_9, 0, 1)
                        rdx_9 = &arg_18
                        arg_18 = rax_17.w
                        rcx_5 = arg1 + 0x1c88
                    
                    sub_142a48d70(rcx_5, rdx_9, 0, 1)
                    rcx_1.b = 0
                    r12_1 += 3
                    r15_1 += 3
                    r14_1 += 0x18
                    rbp_1 += 3
                
                rsi_1 = var_54_1
                sub_142a4a800(arg1 + 0x1c88, *(arg1 + 0x1cc8) + rsi_1, r8_3.w | 0x400)
                i_1 = i_2
            else
                sub_142a4a800(arg1 + 0x1c88, *(arg1 + 0x1cc8) + rsi_1, 1)
            
            rcx_1 = var_58_1
        
        rsi_1 += 1
        rax_3 = var_48_1 + 0x10
        var_54_1 = rsi_1
        i = i_1
        i_1 -= 1
        var_48_1 = rax_3
        i_2 = i_1
    while (i != 1)
    int16_t rax_10 = *(arg1 + 0x1c90)
    int32_t rax_12
    
    if (rax_10 s< 0)
        rax_12 = *(arg1 + 0x1c94)
    else
        rax_12 = sx.d(rax_10) s>> 5
    
    if (rax_12 s> var_50_1)
        arg_18 = 0x1ff
        sub_142a48d70(arg1 + 0x1c88, &arg_18, 0, 1)
    
    if ((*(arg1 + 0x1c90) & 1) == 0)
        rax_12.b = 1
        return rax_12
    
    *arg2 = 7

int32_t* rax
rax.b = 0
return rax
