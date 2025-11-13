// 函数: sub_141b337f0
// 地址: 0x141b337f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x72c) != 0)
    result = sub_141a4ad10(*(arg1 + 0xd0), *(sub_141a788e0() + 0x18))
    
    if (result != 0)
        result = *(result + 8)
    
    if (*(result + 0x18) == arg2 || *(result + 0x20) == arg2 || *(result + 0x28) == arg2)
        result.b = 0
        return result

result.b = 1
return result
