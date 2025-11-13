// 函数: sub_142cab24e
// 地址: 0x142cab24e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x40) & 0x40

if (result == 0)
    return result

*(arg2 + 0x40) &= 0xffffffbf
return sub_142a47ff0(arg2 + 0xb0)
