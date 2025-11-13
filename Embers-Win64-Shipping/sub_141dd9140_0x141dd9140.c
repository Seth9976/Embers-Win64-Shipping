// 函数: sub_141dd9140
// 地址: 0x141dd9140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xf8)
*(arg1 + 0x18) = arg2

if (result == 0 || (*(result + 0x4c) & 0x20) == 0)
    if (arg2 != 0)
        result = (*(*arg2 + 0x2b0))(arg2)
    
    if (arg2 == 0 || result.b == 0)
        *(arg1 + 0x182) &= 0xdf
        result.b = 0
        *(arg1 + 0x182) = *(arg1 + 0x182)
        return result

*(arg1 + 0x182) &= 0xdf
result.b = 0x20
*(arg1 + 0x182) |= 0x20
return result
