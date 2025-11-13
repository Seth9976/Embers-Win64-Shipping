// 函数: sub_142890a00
// 地址: 0x142890a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
int32_t result = *(arg1 + 0x14) & 1
*(arg1 + 0x14) = (*(arg2 + 0x14) & 0xfffffffe) | result | arg3 | 2
return result
