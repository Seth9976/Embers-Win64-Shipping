// 函数: sub_142caa6c0
// 地址: 0x142caa6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_142a5b5a0(*(arg2 + 0x48))
