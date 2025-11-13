// 函数: sub_142caaf20
// 地址: 0x142caaf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x24) & 1

if (result == 0)
    return result

*(arg2 + 0x24) &= 0xfffffffe
return sub_142a47ff0(arg2 + 0x30)
