// 函数: sub_1413ebe20
// 地址: 0x1413ebe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xf80)

if (result != 0 && (*(result + 0x100) & 1) == 0)
    result.b = 1
    return result

result.b = 0
return result
