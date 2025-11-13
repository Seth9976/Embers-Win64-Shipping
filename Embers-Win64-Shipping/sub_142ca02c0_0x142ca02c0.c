// 函数: sub_142ca02c0
// 地址: 0x142ca02c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0xa0) & 1

if (result == 0)
    return result

*(arg2 + 0xa0) &= 0xfffffffe
return sub_1405e8840(arg2 + 0x20)
