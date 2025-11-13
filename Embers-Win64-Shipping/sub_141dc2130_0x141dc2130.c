// 函数: sub_141dc2130
// 地址: 0x141dc2130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x58)

if (result s>= 0)
    if (arg2 != 0 && arg1 + 0xf0 != arg1 + 0x5f)
        char rax = *(arg1 + 0xf0)
        *(arg1 + 0xf0) = *(arg1 + 0x5f)
        *(arg1 + 0x5f) = rax
        result = *(arg1 + 0x58)
    
    result |= 0x80
    *(arg1 + 0x58) = result

return result
