// 函数: sub_14285cec0
// 地址: 0x14285cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r15 = arg3
int64_t rsi = arg2

if (arg2 != 0)
    int32_t rax_1
    
    if (*(arg1 + 0x820) == 0)
        rax_1 = sub_14285da40(arg1)
    
    if (*(arg1 + 0x820) == 0 && rax_1 == 0)
        return 0xffffffff
    
    int64_t rdx_1 = *(arg1 + 0x820)
    int64_t rdi_1 = *(arg1 + 0x840)
    int64_t rbp_1 = 7 - (zx.q(rdx_1.d - 4) & 7)
    int64_t rcx_5
    int64_t r12_1
    
    if (arg4 != 0)
        r12_1 = *(arg1 + 0x1650)
        rcx_5 = *(arg1 + 0x1648)
    else
        int64_t r8 = rdx_1
        
        if (rdi_1 == 0)
            *(arg1 + 0x838) = rbp_1
        else if (rbp_1 != 0 && rdi_1 u>= 5)
            char* r9_1 = *(arg1 + 0x838) + rdx_1
            
            if (*r9_1 == 0x17 && (zx.d(r9_1[3]) << 8 | zx.d(r9_1[4])) u>= 0x80)
                memmove(rdx_1 + rbp_1, r9_1, rdi_1.d)
                r8 = *(arg1 + 0x820)
                *(arg1 + 0x838) = rbp_1
        
        rcx_5 = *(arg1 + 0x838) + r8
        *(arg1 + 0x1650) = 0
        *(arg1 + 0x1648) = rcx_5
        r12_1 = 0
        rdx_1 = *(arg1 + 0x820)
    
    int64_t r13_1 = rdx_1 + rbp_1
    
    if (rcx_5 != r13_1 && arg5 == 1)
        memmove(r13_1, rcx_5, r12_1.d + rdi_1.d)
        *(arg1 + 0x1648) = r13_1
        *(arg1 + 0x838) = r12_1 + rbp_1
    
    int32_t rdx_4 = *(*(*(arg1 + 8) + 0xc0) + 0x60) & 8
    
    if (rdx_4 == 0)
    label_14285d037:
        
        if (rdi_1 u>= rsi)
            *(arg1 + 0x1650) += rsi
            *(arg1 + 0x838) += rsi
            *(arg1 + 0x840) = rdi_1 - rsi
            *arg6 = rsi
            return 1
        
        int64_t rax_10 = *(arg1 + 0x830) - *(arg1 + 0x838)
        
        if (rsi u> rax_10)
            sub_142856580(arg1, 0x50, 0x95, 0x44, "ssl\record\rec_layer_s3.c", 0x10b)
            return 0xffffffff
        
        if (*(arg1 + 0x808) != 0 || rdx_4 != 0)
            if (r15 u< rsi)
                r15 = rsi
            
            if (r15 u> rax_10)
                r15 = rax_10
        else
            r15 = rsi
        
        while (true)
            int64_t r14_1 = 0
            SetLastError(NO_ERROR)
            int64_t* rcx_9 = *(arg1 + 0x10)
            int64_t rbp_2
            
            if (rcx_9 == 0)
                sub_142856580(arg1, 0x50, 0x95, 0xd3, "ssl\record\rec_layer_s3.c", 0x12d)
                rbp_2 = 0xffffffff
            else
                *(arg1 + 0x28) = 3
                int32_t rax_11 = sub_14289a950(rcx_9, r12_1 + r13_1 + rdi_1, r15.d - rdi_1.d)
                rbp_2 = sx.q(rax_11)
                
                if (rax_11 s>= 0)
                    r14_1 = rbp_2
                
                if (rax_11 s> 0)
                    rdi_1 += r14_1
                    
                    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                        if (rsi u> rdi_1)
                            rsi = rdi_1
                        
                        break
                    
                    if (rdi_1 u>= rsi)
                        break
                    
                    continue
            
            *(arg1 + 0x840) = rdi_1
            
            if ((*(arg1 + 0x5c8) & 0x10) != 0 && (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0
                    && r12_1 + rdi_1 == 0)
                sub_14285d790(arg1)
            
            return zx.q(rbp_2.d)
        
        *(arg1 + 0x838) += rsi
        *(arg1 + 0x840) = rdi_1 - rsi
        *(arg1 + 0x1650) += rsi
        *(arg1 + 0x28) = 1
        *arg6 = rsi
        return 1
    
    if (rdi_1 != 0)
        if (rsi u> rdi_1)
            rsi = rdi_1
        
        goto label_14285d037
    
    if (arg4 == 0)
        goto label_14285d037

return 0
