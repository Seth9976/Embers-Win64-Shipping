// 函数: sub_142c6ff00
// 地址: 0x142c6ff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg2 + 0x40d) == 0)
    if (*(arg2 + 0x4b0) != 0 || arg2 == -0x4d8)
        result.b = 0
        return result
    
    int64_t* rcx = *(arg2 + 0x4d8)
    
    if (rcx == 0)
        result.b = 0
        return result
    
    result.b = *rcx == arg1
    
    if (result.b == 0)
        result.b = 0
        return result
    
    *(arg2 + 0x4b0) = 1

result.b = 1
return result
