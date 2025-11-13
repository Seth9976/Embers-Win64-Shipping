// 函数: sub_14095a6f0
// 地址: 0x14095a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x258)

if (result == 0 || *(result + 0x134) == 1)
    result.b = 0
    return result

*(result + 0x138) |= 1
result.b = 1
return result
