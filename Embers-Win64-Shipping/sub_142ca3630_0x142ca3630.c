// 函数: sub_142ca3630
// 地址: 0x142ca3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 1

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffe
return sub_14058a4d0(arg2 + 0x60)
