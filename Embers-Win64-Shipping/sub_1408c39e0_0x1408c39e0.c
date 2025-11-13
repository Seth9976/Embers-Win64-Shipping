// 函数: sub_1408c39e0
// 地址: 0x1408c39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x120)
uint64_t result
result.b = r8 & 1

if (result.b != arg2)
    r8 = (r8 & 0xfe) | arg2
    *(arg1 + 0x120) = r8
    
    if ((r8 & 1) != 0)
        return sub_1408c1970(arg1) __tailcall
    
    result = *(arg1 + 0x128)
    
    if (result != 0)
        result = *(result + 0x2b0)
        
        if (result != 0)
            *(result + 0x281) = 1

return result
