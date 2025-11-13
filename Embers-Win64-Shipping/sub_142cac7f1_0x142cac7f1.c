// 函数: sub_142cac7f1
// 地址: 0x142cac7f1
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 0x100

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffeff
return sub_142a47ff0(arg2 + 0x60)
