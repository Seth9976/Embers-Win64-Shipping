// 函数: sub_141f40f40
// 地址: 0x141f40f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(arg1 + 0x14d) & 4) == 0 && (*(arg1 + 0x14c) & 0x20) != 0)
    result = *(arg1 + 0xb0)
    
    if (result == 0 || *(result + 1) != 0)
        result.b = 1
        return result

result.b = 0
return result
