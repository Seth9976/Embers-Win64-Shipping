// 函数: sub_1420e5670
// 地址: 0x1420e5670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xb8)

if (result != 0 && (arg1 == *(result + 0xe0) || arg1 == *(result + 0xe8)))
    result.b = 1
    return result

result.b = 0
return result
