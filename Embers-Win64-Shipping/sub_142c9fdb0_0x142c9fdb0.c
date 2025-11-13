// 函数: sub_142c9fdb0
// 地址: 0x142c9fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x140) & 1

if (result == 0)
    return result

*(arg2 + 0x140) &= 0xfffffffe
return sub_1405e8840(arg2 + 0x40)
