// 函数: sub_141db5cf0
// 地址: 0x141db5cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_14323c858
arg1[2].d = 0
__builtin_memset(arg1 + 0x8c, 0, 0x24)
arg1[0x19] = 0
arg1[0x1a].d = 0
sub_141f79600(&arg1[0x1c])
InitializeCriticalSection(&arg1[0x21])
SetCriticalSectionSpinCount(&arg1[0x21], 0xfa0)
*(arg1 + 0x13c) &= 0xfe
arg1[0x26].b = 0
arg1[0x28] = 0
InitializeCriticalSection(&arg1[0x29])
SetCriticalSectionSpinCount(&arg1[0x29], 0xfa0)
return arg1
