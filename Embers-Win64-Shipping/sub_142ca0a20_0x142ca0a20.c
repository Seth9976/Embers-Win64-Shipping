// 函数: sub_142ca0a20
// 地址: 0x142ca0a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x1d0) & 0x2000

if (result == 0)
    return result

*(arg2 + 0x1d0) &= 0xffffdfff
return sub_1405e8840(arg2 + 0xc0)
