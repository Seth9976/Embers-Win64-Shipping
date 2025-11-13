// 函数: sub_140d15cf0
// 地址: 0x140d15cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0xffffffff
*arg1 = 0
arg1[2] = 0
arg1[3].b = 1
__builtin_memset(&arg1[4], 0, 0x20)
InitializeCriticalSection(&arg1[0xc])
SetCriticalSectionSpinCount(&arg1[0xc], 0xfa0)
*(arg1 + 0x98) = 0
__builtin_memset(&arg1[0x38], 0, 0x20)
InitializeCriticalSection(&arg1[0x40])
SetCriticalSectionSpinCount(&arg1[0x40], 0xfa0)
arg1[0x4a] = 0x3e8
data_143de5490 = &data_143e1d9a0
return arg1
