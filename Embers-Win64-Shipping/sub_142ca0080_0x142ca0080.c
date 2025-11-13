// 函数: sub_142ca0080
// 地址: 0x142ca0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x138) & 1

if (result == 0)
    return result

*(arg2 + 0x138) &= 0xfffffffe
return sub_1405e8840(arg2 + 0x40)
