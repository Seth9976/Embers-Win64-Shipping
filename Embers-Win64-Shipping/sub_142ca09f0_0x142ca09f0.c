// 函数: sub_142ca09f0
// 地址: 0x142ca09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x1d0) & 0x20

if (result == 0)
    return result

*(arg2 + 0x1d0) &= 0xffffffdf
return sub_1405e8840(arg2 + 0x100)
