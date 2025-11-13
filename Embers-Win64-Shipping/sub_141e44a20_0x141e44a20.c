// 函数: sub_141e44a20
// 地址: 0x141e44a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 8) != 0)
    if (*(arg1 + 0x91) == 1)
        result.b = 1
        return result
    
    result = *(arg1 + 0x48)
    
    if (result != 0 && *(result + 0x28) != 0)
        result.b = 1
        return result
    
    result = *(arg1 + 0x50)
    
    if (result != 0 && *(result + 0x28) != 0)
        result.b = 1
        return result

result.b = 0
return result
