// 函数: sub_1426b4830
// 地址: 0x1426b4830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x2d8)

if (result != 0)
    result = *(result + 0x100)
    
    if (result != 0 && ((*(result + 0x98) u>> 2).b & 1) != 0)
        result.b = 1
        return result

result.b = 0
return result
