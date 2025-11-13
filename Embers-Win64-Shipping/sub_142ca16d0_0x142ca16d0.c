// 函数: sub_142ca16d0
// 地址: 0x142ca16d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x350) & 0x80

if (result == 0)
    return result

*(arg2 + 0x350) &= 0xffffff7f
return sub_1405e8840(arg2 + 0x300)
