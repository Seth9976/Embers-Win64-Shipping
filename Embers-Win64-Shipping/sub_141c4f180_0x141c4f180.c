// 函数: sub_141c4f180
// 地址: 0x141c4f180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14234f680(arg1)
*arg1 = &data_143209c40
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x12].d = 0
*(arg1 + 0x94) = 0x40000000
arg1[0x14].b = 0
arg1[0x15] = 0
arg1[0x16] = 0
InitializeCriticalSection(&arg1[0x17])
SetCriticalSectionSpinCount(&arg1[0x17], 0xfa0)
__builtin_memset(&arg1[0x1c], 0, 0x20)
arg1[0x10] = 0
arg1[0x11] = 0
return arg1
