// 函数: sub_142ca33c8
// 地址: 0x142ca33c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_14058a4d0(*(arg2 + 0x58))
