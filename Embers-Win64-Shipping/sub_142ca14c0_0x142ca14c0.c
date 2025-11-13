// 函数: sub_142ca14c0
// 地址: 0x142ca14c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x100) & 0x80

if (result == 0)
    return result

*(arg2 + 0x100) &= 0xffffff7f
return sub_1405e8840(arg2 + 0x40)
