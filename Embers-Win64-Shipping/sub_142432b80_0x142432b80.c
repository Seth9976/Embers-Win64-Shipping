// 函数: sub_142432b80
// 地址: 0x142432b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x11b)

if ((result & 0xc) == 0)
    int64_t* rcx = *(arg1 + 0x1f8)
    
    if (rcx != 0)
        sub_142268f30(rcx, arg1)
        result = *(arg1 + 0x11b)
    
    result |= 8
    *(arg1 + 0x11b) = result

return result
