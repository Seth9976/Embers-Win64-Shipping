// 函数: sub_142cab1e4
// 地址: 0x142cab1e4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x40) & 0x10

if (result == 0)
    return result

*(arg2 + 0x40) &= 0xffffffef
return sub_142a47ff0(arg2 + 0xb0)
