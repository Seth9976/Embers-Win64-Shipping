// 函数: sub_1421750c0
// 地址: 0x1421750c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:1_1

if (*(arg1 + 0x58) != 0)
    void arg_8
    sub_140d3a3a0(&arg_8, arg2)
    int32_t rdi_2 = *(arg1 + 0x50)
    
    if (rdi_2 != 0)
        int32_t rbp_3 = 0
        int32_t i = 0
        int64_t r15
        r15.b = sub_140664af0(*(arg1 + 0x48), &arg_8) == 0
        
        do
            int64_t i_1 = sx.q(i)
            
            for (i += 1; i s< rdi_2; i += 1)
                int32_t rcx_9
                rcx_9.b = sub_140664af0(*(arg1 + 0x48) + (sx.q(i) << 3), &arg_8) == 0
                
                if (zx.d(r15.b) != rcx_9)
                    break
            
            int32_t rsi_4 = i - i_1.d
            
            if (r15.b != 0)
                if (rbp_3 != i_1.d)
                    int64_t rcx_10 = *(arg1 + 0x48)
                    memmove(rcx_10 + (sx.q(rbp_3) << 3), rcx_10 + (i_1 << 3), rsi_4 << 3)
                
                rbp_3 += rsi_4
            
            r15.b ^= 1
        while (i s< rdi_2)
        
        *(arg1 + 0x50) = rbp_3
        cond:1_1 = rdi_2 == rbp_3
    label_142175189:
        
        if (not(cond:1_1))
            sub_140920c10(arg1 + 0x90, arg2)
            return 1
else
    int64_t rcx = sx.q(*(arg1 + 0x40))
    
    if (rcx.d != 0)
        int32_t r15_1 = 0
        int32_t rdi_1 = 0
        int64_t r12
        r12.b = **(arg1 + 0x38) != arg2
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rcx)
                int64_t* rcx_1 = *(arg1 + 0x38) + (rbx_1 << 3)
                
                do
                    int32_t rax_3
                    rax_3.b = *rcx_1 != arg2
                    
                    if (zx.d(r12.b) != rax_3)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_1 = &rcx_1[1]
                while (rbx_1 s< rcx)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r15_1 != r9_1.d)
                    int64_t rcx_2 = *(arg1 + 0x38)
                    memmove(rcx_2 + (sx.q(r15_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
                
                r15_1 += rbp_2
            
            r12.b ^= 1
        while (rbx_1 s< rcx)
        
        *(arg1 + 0x40) = r15_1
        cond:1_1 = rcx.d == r15_1
        goto label_142175189
return 0
