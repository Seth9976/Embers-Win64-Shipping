// 函数: sub_142c9ddc0
// 地址: 0x142c9ddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 0x10

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xffffffef
return sub_1405ec870(arg2 + 0x100)
