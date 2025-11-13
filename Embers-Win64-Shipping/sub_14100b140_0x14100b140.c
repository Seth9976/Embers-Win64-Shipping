// 函数: sub_14100b140
// 地址: 0x14100b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2938
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
arg1[4].d = 0
arg1[6] = 0
arg1[5] = &data_142efcc30
InitializeCriticalSection(&arg1[7])
SetCriticalSectionSpinCount(&arg1[7], 0xfa0)
arg1[0xc] = 0
arg1[0xd] = 0
sub_14103f450(&arg1[0xe], 0)
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1d].b = 1
*arg1 = &data_142efcc50
arg1[5] = &data_142efcc58
arg1[0x1e] = 0
sub_14103f450(&arg1[0x1f], 0)
arg1[0x2d].d &= 0xfffffffc
arg1[0x2d].d |= 4
arg1[0x2c] = 0
return arg1
