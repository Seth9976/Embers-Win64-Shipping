// 函数: sub_142c9f330
// 地址: 0x142c9f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_1405ecbc0(*(arg2 + 0x48))
