// 函数: sub_142450240
// 地址: 0x142450240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x230)
*(arg1 + 0x238) = arg2

if (result != 0)
    if (arg2 != 0 && arg2 != result)
        *(result + 0x4c) &= 0xfffffffe
        *(result + 0x4c) |= 1
        return result
    
    *(result + 0x4c) &= 0xfffffffe
    *(result + 0x4c) = *(result + 0x4c)

return result
