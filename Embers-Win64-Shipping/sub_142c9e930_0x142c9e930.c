// 函数: sub_142c9e930
// 地址: 0x142c9e930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x24) & 1

if (result == 0)
    return result

*(arg2 + 0x24) &= 0xfffffffe
return sub_1405ec6a0(arg2 + 0x120)
