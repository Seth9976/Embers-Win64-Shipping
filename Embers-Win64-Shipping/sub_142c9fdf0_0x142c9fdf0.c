// 函数: sub_142c9fdf0
// 地址: 0x142c9fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x68) & 1

if (result == 0)
    return result

*(arg2 + 0x68) &= 0xfffffffe
return sub_1406b6170(*(arg2 + 0x80))
