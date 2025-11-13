// 函数: sub_142ca2b5d
// 地址: 0x142ca2b5d
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_14281f944(*(arg2 + 0x40))
