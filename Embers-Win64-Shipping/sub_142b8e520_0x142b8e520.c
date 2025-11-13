// 函数: sub_142b8e520
// 地址: 0x142b8e520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2
int64_t result

if (*arg2 s<= 0)
    sub_142a7dcd0(*(arg1 + 0x1c58))
    result = sub_142a7dd00(sx.q(*(arg1 + 0x1c40) * 2))
    *(arg1 + 0x1c58) = result
    
    if (result != 0)
        int32_t rdx = *(arg1 + 0x1c60)
        int32_t r11 = 0
        uint32_t r8 = 0
        int32_t i = 0
        int32_t r9 = 0
        int32_t r14 = 0
        int32_t var_58 = 0
        int32_t rdi = 0
        uint32_t arg_18 = 0
        int32_t r13 = 0
        int32_t i_1 = 0
        
        if (*(arg1 + 0x1c40) s> 0)
            result = 0
            int64_t r12_1 = 0
            int64_t result_1 = 0
            
            do
                int64_t rcx_2
                
                if (r12_1 s< 0 || i s>= *(arg1 + 0x1c40))
                    rcx_2 = 0
                else
                    rcx_2 = *(*(arg1 + 0x1c50) + (r12_1 << 3))
                    result = result_1
                
                int32_t rsi_2 = (rcx_2 s>> 0x20).d
                
                if (rsi_2 == r11)
                    goto label_142b8e6e8
                
                if (rsi_2 u> rdx)
                    void* rbx_2 = arg1 + 0x1c60 + (result << 2)
                    
                    do
                        sub_142a4a800(arg1 + 0x1c88, r9 + 1, r14.w)
                        rbx_2 += 4
                        r9 += 1
                        int64_t result_2 = result_1 + 1
                        result_1 = result_2
                        
                        if (result_2 s>= 4)
                            rdx = -1
                            break
                        
                        rdx = *rbx_2
                    while (rsi_2 u> rdx)
                    
                    r11 = var_58
                    i = i_1
                    r8 = arg_18
                
                if (rsi_2 u< *(arg1 + 0x1c7c))
                    if (r14 == 0)
                        r14 = 0xc00
                        goto label_142b8e6c9
                    
                    if (r14 u< 0xff8)
                        r14 += 8
                        goto label_142b8e6c9
                    
                    *(*(arg1 + 0x1c58) + (r12_1 << 1)) = 1
                else if (r14 u>= 0x1000)
                    if (r14 u< 0xf800)
                        r14 += 0x400
                        goto label_142b8e6c9
                    
                    *(arg1 + 0x1c80) = 1
                    *(*(arg1 + 0x1c58) + (r12_1 << 1)) = 1
                else
                    r14 = 0x1000
                label_142b8e6c9:
                    r8 = 0x500
                    var_58 = rsi_2
                    arg_18 = 0x500
                    r11 = rsi_2
                    rdi = 0xa0
                    r13 = 0
                label_142b8e6e8:
                    uint32_t rax_5 = rcx_2.d u>> 0x10
                    
                    if (rax_5 == r8)
                        goto label_142b8e786
                    
                    bool cond:4_1
                    
                    if (r14 != 0)
                        if (rax_5 u< 0x500)
                            if (rdi != 0xa0)
                                cond:4_1 = rdi u< 0x80
                                goto label_142b8e722
                            
                            rdi = 0
                            goto label_142b8e773
                        
                        if (rax_5 == 0x500)
                            rdi = 0xa0
                            goto label_142b8e773
                        
                        if (rdi u< 0xc0)
                            rdi = 0xc0
                            goto label_142b8e773
                        
                        if (rdi u< 0x160)
                            rdi += 0x20
                            goto label_142b8e773
                        
                        *(*(arg1 + 0x1c58) + (r12_1 << 1)) = 1
                    else if (rdi != 0)
                        cond:4_1 = rdi u< 0x3e0
                    label_142b8e722:
                        
                        if (cond:4_1)
                            rdi += 0x20
                            goto label_142b8e773
                        
                        *(*(arg1 + 0x1c58) + (r12_1 << 1)) = 1
                    else
                        rdi = 0x180
                    label_142b8e773:
                        r8 = rax_5
                        arg_18 = rax_5
                        r13 = 0
                    label_142b8e786:
                        
                        if ((rcx_2.d & 0x3f3f) u<= 0x500)
                            goto label_142b8e7ae
                        
                        if (r13 u>= 7)
                            *(*(arg1 + 0x1c58) + (r12_1 << 1)) = 1
                        else
                            r13 += 1
                        label_142b8e7ae:
                            int16_t rcx_5
                            
                            if (r14 - 0xc00 u> 0x3f8)
                                rcx_5 = rdi.w | r13.w
                            else
                                rcx_5 = r13.w
                            
                            *(*(arg1 + 0x1c58) + (r12_1 << 1)) = rcx_5 | r14.w
                
                result = result_1
                i += 1
                r12_1 += 1
                i_1 = i
            while (i s< *(arg1 + 0x1c40))
            
            rbx = arg2
        
        result.b = *rbx s<= 0
        return result
    
    *rbx = 7

result.b = 0
return result
