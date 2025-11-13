// 函数: sub_142cab8bc
// 地址: 0x142cab8bc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x40) & 1

if (result == 0)
    return result

*(arg2 + 0x40) &= 0xfffffffe
return sub_142a47ff0(arg2 + 0x80)
