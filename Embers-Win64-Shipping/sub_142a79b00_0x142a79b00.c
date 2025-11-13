// 函数: sub_142a79b00
// 地址: 0x142a79b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    if (*(arg1 + 0x82) == 0)
        *arg3 = 0x10302
        return -1
    
    if (arg2 s>= 0)
        void* r10_1 = *(*(arg1 + 8) + 0x88)
        
        if (arg2 s<= *(r10_1 + 8))
            if (arg2 == 0)
                return *(arg1 + 0x90)
            
            int32_t rax_4
            
            if (arg2 - 1 s>= 0)
                rax_4 = *(r10_1 + 8)
            
            int32_t rax_7
            
            if (arg2 - 1 s< 0 || rax_4 s<= 0 || rax_4 - (arg2 - 1) s<= 0)
                rax_7 = 0
            else
                rax_7 = *(*(r10_1 + 0x18) + (sx.q(arg2 - 1) << 2))
            
            return *(*(arg1 + 0xb8) + (sx.q(rax_7 + 1) << 3) + 0x10)
    
    *arg3 = 8

return -1
