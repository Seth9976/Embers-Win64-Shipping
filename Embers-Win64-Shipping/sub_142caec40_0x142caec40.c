// 函数: sub_142caec40
// 地址: 0x142caec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 4

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffb
return sub_142a47ff0(arg2 + 0x40)
