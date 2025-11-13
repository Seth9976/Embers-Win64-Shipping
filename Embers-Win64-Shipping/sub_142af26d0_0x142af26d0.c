// 函数: sub_142af26d0
// 地址: 0x142af26d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x44) != 0xffffffff)
    return zx.q(*(arg1 + 0x44))

int32_t result = sub_142af2620(arg1, arg2)
*(arg1 + 0x44) = result
return result
