// 函数: sub_142ca3690
// 地址: 0x142ca3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 4

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffb
return sub_14058a4d0(arg2 + 0x40)
