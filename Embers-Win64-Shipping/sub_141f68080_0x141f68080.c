// 函数: sub_141f68080
// 地址: 0x141f68080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x410))
    uint32_t rcx = zx.d(*(sx.q(arg2) * 0x2c + *(arg1 + 0x408) + 0x28))
    
    if (rcx == 0)
        return 0
    
    if (rcx == 1)
        return 1
    
    if (rcx != 2)
        if (rcx == 3)
            return 4
        
        if (rcx == 5)
            return zx.q(rcx - 2)

return 2
