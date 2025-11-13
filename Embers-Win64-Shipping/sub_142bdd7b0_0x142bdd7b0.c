// 函数: sub_142bdd7b0
// 地址: 0x142bdd7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = &arg1[0x43]
arg1[0x49] = arg1[0x16]
*(*(arg1 + 0x40) + 0x1c) = arg1[0x17]
*(*(arg1 + 0x40) + 0x10) = arg2
*(*(arg1 + 0x40) + 0x14) = arg3
*(*(arg1 + 0x40) + 8) = arg4
*(*(arg1 + 0x40) + 0xc) = arg5
**(arg1 + 0x40) = arg6
*(*(arg1 + 0x40) + 4) = arg7
void* result

while (true)
    int32_t* rdi_1 = *(arg1 + 0x40)
    int32_t r11_1 = rdi_1[7]
    int32_t rbp_1 = rdi_1[1]
    int32_t rcx_4 = rdi_1[5]
    int32_t rax_8 = rdi_1[3]
    int32_t r15_1 = *rdi_1
    int32_t r8
    int32_t r9
    
    if (r11_1 s> rbp_1)
        r8 = rbp_1
        r9 = r11_1
    else
        r8 = r11_1
        r9 = rbp_1
    
    int32_t rdx
    
    if (rcx_4 s> rax_8)
        rdx = rax_8
        rax_8 = rcx_4
    else
        rdx = rcx_4
    
    int32_t r10
    
    if (rdx s< r8 || rax_8 s> r9)
        int32_t rcx_22 = rdi_1[4]
        int32_t r10_1 = rdi_1[2]
        int32_t rdx_5 = rdi_1[6]
        int32_t r8_4 = (r15_1 + 1 + r10_1) s>> 1
        rdi_1[2] = r8_4
        rdi_1[0xc] = rdx_5
        int32_t r9_8 = (rcx_22 + 1 + rdx_5) s>> 1
        r10 = rdi_1[3]
        int32_t rax_24 = (r10_1 + 1 + rcx_22) s>> 1
        rdi_1[0xa] = r9_8
        int32_t rcx_25 = (r8_4 + 1 + rax_24) s>> 1
        rdi_1[4] = rcx_25
        rdi_1[0xd] = r11_1
        int32_t rax_26 = (rax_24 + r9_8 + 1) s>> 1
        rdi_1[8] = rax_26
        int32_t r8_7 = (rbp_1 + 1 + r10) s>> 1
        int32_t rcx_27 = rdi_1[5]
        rdi_1[6] = (rax_26 + rcx_25 + 1) s>> 1
        rdi_1[3] = r8_7
        int32_t rax_31 = (rcx_27 + 1 + r10) s>> 1
        int32_t r9_12 = (rcx_27 + 1 + r11_1) s>> 1
        rdi_1[0xb] = r9_12
        int32_t rax_34 = (rax_31 + 1 + r9_12) s>> 1
        rdi_1[9] = rax_34
        int32_t rcx_30 = (rax_31 + 1 + r8_7) s>> 1
        rdi_1[5] = rcx_30
        rdi_1[7] = (rax_34 + 1 + rcx_30) s>> 1
        *(arg1 + 0x40) += 0x18
    else if (r11_1 != rbp_1)
        int32_t rdx_1 = arg1[0x22]
        int32_t r9_1
        r9_1.b = r11_1 s> rbp_1
        
        if (rdx_1 != r9_1 + 1)
            bool cond:0_1
            
            if (r11_1 s> rbp_1)
                cond:0_1 = r11_1 - (neg.d(arg1[1]) & r11_1) s>= arg1[2]
            else
                int32_t rax_9 = arg1[1]
                cond:0_1 = ((rax_9 - 1 + r11_1) & neg.d(rax_9)) - r11_1 s>= arg1[2]
            
            r10.b = cond:0_1
            
            if (rdx_1 != 0)
                result = sub_142bde490(arg1, r10.b)
            
            if (rdx_1 != 0 && result.b != 0)
                result.b = 1
                break
                break
            
            if (sub_142bdece0(arg1, r9_1 + 1, r10.b).b != 0)
                result.b = 1
                break
                break
        
        if (r11_1 s> rbp_1)
            void* rsi_1 = *(arg1 + 0x40)
            int32_t rcx_16 = neg.d(arg1[0x18])
            int32_t r9_5 = neg.d(arg1[0x19])
            *(rsi_1 + 4) = neg.d(*(rsi_1 + 4))
            *(rsi_1 + 0xc) = neg.d(*(rsi_1 + 0xc))
            *(rsi_1 + 0x14) = neg.d(*(rsi_1 + 0x14))
            *(rsi_1 + 0x1c) = neg.d(*(rsi_1 + 0x1c))
            char rdi_2 = *(arg1 + 0x6a)
            result, r10 = sub_142bdd270(arg1, 3, sub_142bdf150, r9_5, rcx_16)
            
            if (rdi_2 != 0 && *(arg1 + 0x6a) == 0)
                void* rdx_4 = *(arg1 + 0x70)
                *(rdx_4 + 0x20) = neg.d(*(rdx_4 + 0x20))
            
            *(rsi_1 + 4) = neg.d(*(rsi_1 + 4))
            
            if (result.b != 0)
                result.b = 1
                break
        else
            result, r10 = sub_142bdd270(arg1, 3, sub_142bdf150, arg1[0x18], arg1[0x19])
            
            if (result.b != 0)
                result.b = 1
                break
    else
        *(arg1 + 0x40) = &rdi_1[-6]
    
    if (*(arg1 + 0x40) u< &arg1[0x43])
        arg1[0x16] = r15_1
        result.b = 0
        arg1[0x17] = rbp_1
        break

return result
