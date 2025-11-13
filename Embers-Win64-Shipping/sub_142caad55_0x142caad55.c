// 函数: sub_142caad55
// 地址: 0x142caad55
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x58) & 1

if (result == 0)
    return result

*(arg2 + 0x58) &= 0xfffffffe
return sub_142a47ff0(*(arg2 + 0x80))
