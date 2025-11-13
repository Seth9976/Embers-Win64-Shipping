// 函数: sub_142cac2c8
// 地址: 0x142cac2c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x38) & 1

if (result == 0)
    return result

*(arg2 + 0x38) &= 0xfffffffe
return sub_142a47ff0(arg2 + 0x70)
