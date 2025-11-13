// 函数: sub_14105d090
// 地址: 0x14105d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2940
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
arg1[5] = 0
arg1[4] = &data_142efcc30
InitializeCriticalSection(&arg1[6])
SetCriticalSectionSpinCount(&arg1[6], 0xfa0)
arg1[0xb] = 0
arg1[0xc] = 0
sub_14103f450(&arg1[0xd], 0)
arg1[0x1a].d = 0
arg1[0x1b] = 0
arg1[0x1c].b = 1
*arg1 = &data_142efcca0
arg1[4] = &data_142efcca8
arg1[0x1d] = 0
sub_14103f450(&arg1[0x1e], 0)
arg1[0x2c].d &= 0xfffffffc
arg1[0x2c].d |= 4
arg1[0x2b] = 0
return arg1
