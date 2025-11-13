// 函数: sub_142b60c30
// 地址: 0x142b60c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t i = 0

if (arg4 s> 0)
    int16_t* rbx_1 = arg3 + 8
    
    do
        int16_t rdx = *(arg5 + 8)
        int32_t rax_2
        
        if (rdx s< 0)
            rax_2 = *(arg5 + 0xc)
        else
            rax_2 = sx.d(rdx) s>> 5
        
        int16_t rcx = *rbx_1
        int32_t r8_1
        
        if (rcx s< 0)
            r8_1 = *(rbx_1 + 4)
        else
            r8_1 = sx.d(rcx) s>> 5
        
        char rax_3
        
        if ((*(arg5 + 8) & 1) == 0)
            int32_t rcx_2
            
            if (rdx s< 0)
                rcx_2 = *(arg5 + 0xc)
            else
                rcx_2 = sx.d(rdx) s>> 5
            
            int32_t r10_1 = 0
            
            if (rcx_2 s< 0)
                r10_1 = rcx_2
            
            if (rax_2 s>= 0)
                int32_t rcx_3 = rcx_2 - r10_1
                
                if (rax_2 s> rcx_3)
                    rax_2 = rcx_3
            else
                rax_2 = 0
            
            void* r9 = arg5 + 0xa
            
            if ((rdx.b & 2) == 0)
                r9 = *(arg5 + 0x18)
            
            rax_3 = sub_142a48fb0(&rbx_1[-4], 0, r8_1, r9, r10_1, rax_2)
        else
            rax_3 = not.b(*rbx_1) & 1
        
        if (rax_3 == 0)
            return sx.q(rbp) * 0x70 + arg2
        
        rbp += 1
        i += 1
        rbx_1 = &rbx_1[0x20]
    while (i s< sx.q(arg4))

return 0
