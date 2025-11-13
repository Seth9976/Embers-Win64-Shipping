// 函数: sub_142c9ede0
// 地址: 0x142c9ede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x80) & 1

if (result == 0)
    return result

*(arg2 + 0x80) &= 0xfffffffe
return sub_1405ec870(arg2 + 0x78)
