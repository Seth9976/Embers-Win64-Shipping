// 函数: sub_142b18250
// 地址: 0x142b18250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c) s< 0)
    void* r8_1 = *(arg1 + 0x20)
    
    if (r8_1 != 0 && *(r8_1 + 8) != 0)
        int32_t rdx = *(*(arg1 + 8) + 0x18)
        
        if (*(arg1 + 0x18) != 0)
            rdx += 1
        
        if (rdx s>= 0)
            int32_t rax_1 = *(r8_1 + 8)
            
            if (rax_1 s> 0 && rax_1 - rdx s> 0)
                return zx.q(*(*(r8_1 + 0x18) + (sx.q(rdx) << 2)))
        
        return 0

jump(*(**(arg1 + 8) + 0x20))
