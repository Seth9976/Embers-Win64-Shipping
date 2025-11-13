// 函数: sub_142caaf50
// 地址: 0x142caaf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x44) & 1

if (result == 0)
    return result

*(arg2 + 0x44) &= 0xfffffffe
return sub_142a5b5a0(*(arg2 + 0x70))
