// 函数: sub_142ca0da0
// 地址: 0x142ca0da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 2

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffd
return sub_1405e8840(arg2 + 0x60)
