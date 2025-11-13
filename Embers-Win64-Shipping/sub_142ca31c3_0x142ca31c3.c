// 函数: sub_142ca31c3
// 地址: 0x142ca31c3
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 2

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffd
return sub_14281f944(arg2 + 0xb8)
