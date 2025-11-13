// 函数: sub_142ca1410
// 地址: 0x142ca1410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x70) & 0x100

if (result == 0)
    return result

*(arg2 + 0x70) &= 0xfffffeff
return sub_1405e8840(arg2 + 0x78)
