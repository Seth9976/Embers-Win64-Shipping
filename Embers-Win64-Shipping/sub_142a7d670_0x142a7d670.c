// 函数: sub_142a7d670
// 地址: 0x142a7d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s> 0)
        *arg3 = rax_1
        return -1
    
    if (*(arg1 + 0x82) == 0)
        *arg3 = 0x10302
        return -1
    
    if (arg2 s>= 0)
        void* r10_1 = *(*(arg1 + 8) + 0x88)
        
        if (arg2 s<= *(r10_1 + 8))
            if (arg2 == 0)
                return *(arg1 + 0x88)
            
            if (arg2 - 1 s>= 0)
                int32_t rax_6 = *(r10_1 + 8)
                
                if (rax_6 s> 0 && rax_6 - (arg2 - 1) s> 0)
                    return *(*(arg1 + 0xb8)
                        + (sx.q(*(*(r10_1 + 0x18) + (sx.q(arg2 - 1) << 2))) << 3) + 0x10)
            
            return *(*(arg1 + 0xb8) + 0x10)
    
    *arg3 = 8

return -1
