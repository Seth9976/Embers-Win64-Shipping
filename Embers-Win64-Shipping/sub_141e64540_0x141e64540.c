// 函数: sub_141e64540
// 地址: 0x141e64540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)

if (result != 0 && (*(result + 0x100) & 0x100) == 0)
    result.b = 1
    return result

result.b = 0
return result
