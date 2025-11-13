// 函数: sub_142c9f380
// 地址: 0x142c9f380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x60) & 2

if (result == 0)
    return result

*(arg2 + 0x60) &= 0xfffffffd
return sub_1405ec6a0(arg2 + 0x98)
