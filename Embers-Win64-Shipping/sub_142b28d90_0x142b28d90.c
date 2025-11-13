// 函数: sub_142b28d90
// 地址: 0x142b28d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (sub_142b22060(arg1, arg2).b != 0)
    char r8_1 = *(arg1 + 0x208)
    
    if (r8_1 == *(arg2 + 0x208))
        int64_t rax_9
        
        if (r8_1 != 0)
            rax_9.b = (((*(arg2 + 0x190) - *(arg2 + 0x1a0)) ^ (*(arg1 + 0x190) - *(arg1 + 0x1a0)))
                & 0xfffffffffffffffe) == 0
            return rax_9
        
        rax = *(arg1 + 0x1a8)
        int32_t rcx
        rcx.b = *(arg2 + 0x188) == *(arg2 + 0x1a8)
        int32_t rdx
        rdx.b = *(arg1 + 0x188) == rax
        
        if (rdx == rcx)
            if (r8_1 == 0)
                int64_t rdx_1 = *(arg1 + 0x188)
                
                if (rdx_1 != rax)
                    if ((((*(arg2 + 0x1a8) - *(arg2 + 0x1a0)) ^ (rax - *(arg1 + 0x1a0)))
                            & 0xfffffffffffffffe) != 0 || (((*(arg2 + 0x190) - *(arg2 + 0x188))
                            ^ (*(arg1 + 0x190) - rdx_1)) & 0xfffffffffffffffe) != 0)
                        return 0
                    
                    int64_t rax_6
                    rax_6.b = 1
                    return rax_6
            
            rax_9.b = (((*(arg2 + 0x190) - *(arg2 + 0x1a0)) ^ (*(arg1 + 0x190) - *(arg1 + 0x1a0)))
                & 0xfffffffffffffffe) == 0
            return rax_9

rax.b = 0
return rax
