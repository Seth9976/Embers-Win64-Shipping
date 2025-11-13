// 函数: sub_141c30640
// 地址: 0x141c30640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143205160
sub_141c305b0(&arg1[1])
arg1[0x16] = 0
arg1[0x17] = 0
InitializeCriticalSection(&arg1[0x18])
SetCriticalSectionSpinCount(&arg1[0x18], 0xfa0)
arg1[0x1d] = 0
arg1[0x1e] = 0
InitializeCriticalSection(&arg1[0x1f])
SetCriticalSectionSpinCount(&arg1[0x1f], 0xfa0)
arg1[0x24] = 0
arg1[0x25] = 0
return arg1
