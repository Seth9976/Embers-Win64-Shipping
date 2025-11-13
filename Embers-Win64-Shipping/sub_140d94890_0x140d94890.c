// 函数: sub_140d94890
// 地址: 0x140d94890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_142ec2c20
arg1[7] = 0
arg1[8].d = 0
*(arg1 + 0x44) = 0
arg1[5] = 0
arg1[6].d = 0xffffffff
InitializeCriticalSection(&arg1[9])
SetCriticalSectionSpinCount(&arg1[9], 0xfa0)
return arg1
