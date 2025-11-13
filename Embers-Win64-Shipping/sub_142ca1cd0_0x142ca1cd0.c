// 函数: sub_142ca1cd0
// 地址: 0x142ca1cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x60) & 1

if (result == 0)
    return result

*(arg2 + 0x60) &= 0xfffffffe
return sub_1405ec870(arg2 + 0x50)
