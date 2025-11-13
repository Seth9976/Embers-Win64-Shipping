// 函数: sub_141e24dc0
// 地址: 0x141e24dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = zx.d(*(arg1 + 0x19))

if (arg2 != r8_1)
    if (r8_1 == 0)
        if (arg2 == 1)
            return *(arg1 + 0x24) f- *(arg1 + 0x1c)
        
        if (arg2 == 2)
            return (*(arg1 + 0x24) f- *(arg1 + 0x1c)) f/ *(arg1 + 0x20)
        
        return -1f
    
    if (r8_1 == 1)
        if (arg2 == 0)
            return *(arg1 + 0x24) f+ *(arg1 + 0x1c)
        
        if (arg2 == 2)
            return *(arg1 + 0x24) f/ *(arg1 + 0x20)
        
        return -1f
    
    if (r8_1 == 2)
        if (arg2 == 0)
            return *(arg1 + 0x24) f* *(arg1 + 0x20) f+ *(arg1 + 0x1c)
        
        if (arg2 == r8_1 - 1)
            return *(arg1 + 0x24) f* *(arg1 + 0x20)
        
        return -1f

return *(arg1 + 0x24)
