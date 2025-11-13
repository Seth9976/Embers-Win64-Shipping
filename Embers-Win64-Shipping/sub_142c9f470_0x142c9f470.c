// 函数: sub_142c9f470
// 地址: 0x142c9f470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0xd0) & 1

if (result == 0)
    return result

*(arg2 + 0xd0) &= 0xfffffffe
return sub_1406b6e30(arg2 + 0x40)
