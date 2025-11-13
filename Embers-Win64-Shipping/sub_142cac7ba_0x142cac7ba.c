// 函数: sub_142cac7ba
// 地址: 0x142cac7ba
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 0x80

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xffffff7f
return sub_142a47ff0(arg2 + 0x60)
