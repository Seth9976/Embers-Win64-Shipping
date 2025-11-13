// 函数: sub_142caf28c
// 地址: 0x142caf28c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 1

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffe
return sub_142a47ff0(arg2 + 0xd0)
