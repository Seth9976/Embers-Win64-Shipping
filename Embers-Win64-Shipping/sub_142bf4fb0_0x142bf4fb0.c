// 函数: sub_142bf4fb0
// 地址: 0x142bf4fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) != 0)
    if (arg2 u<= *(arg1 + 0x2c))
        int64_t rbp = 0
        int32_t i = *(arg1 + 0x68)
        int64_t rcx = 0
        int64_t r14 = *(arg1 + 0x78)
        int64_t r15 = *(arg1 + 0x70)
        
        if (arg2 u>= 0xccccccc)
            *(arg1 + 0x58) = 0
        else
            for (; arg2 u>= i; i = i + 0x20 + (i u>> 1))
            
            if (i u>= 0xccccccc)
                *(arg1 + 0x58) = 0
            else
                uint64_t rdi_2 = zx.q(i) * 0x14
                rbp = sub_140dc0f10(*(arg1 + 0x80), rdi_2)
                int64_t rax_5 = sub_140dc0f10(*(arg1 + 0x70), rdi_2)
                rcx = rax_5
                
                if (rbp == 0 || rax_5 == 0)
                    *(arg1 + 0x58) = 0
        
        if (rbp != 0)
            *(arg1 + 0x80) = rbp
        
        if (rcx != 0)
            *(arg1 + 0x70) = rcx
        
        int64_t rax_6
        
        if (r14 == r15)
            rax_6 = *(arg1 + 0x70)
        else
            rax_6 = *(arg1 + 0x80)
        
        *(arg1 + 0x78) = rax_6
        char rax_7 = *(arg1 + 0x58)
        
        if (rax_7 != 0)
            *(arg1 + 0x68) = i
        
        return rax_7
    
    *(arg1 + 0x58) = 0

int64_t rax
rax.b = 0
return rax
