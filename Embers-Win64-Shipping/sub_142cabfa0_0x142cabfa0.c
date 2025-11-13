// 函数: sub_142cabfa0
// 地址: 0x142cabfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x28) & 1

if (result == 0)
    return result

*(arg2 + 0x28) &= 0xfffffffe
return sub_142a47ff0(*(arg2 + 0x48))
