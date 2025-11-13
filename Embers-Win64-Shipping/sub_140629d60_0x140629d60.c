// 函数: sub_140629d60
// 地址: 0x140629d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg1 != 0)
    result = *(arg1 + 0x288)
    
    if (result != 0)
        *(result + 0x18c) = arg2
        result.b = 1
        return result

result.b = 0
return result
