// 函数: sub_14100b080
// 地址: 0x14100b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2938
arg1[4].d = arg5
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3].d = arg3
*(arg1 + 0x1c) = arg4
sub_1410092b0(&arg1[5], arg2)
arg1[0x1c] = 0
arg1[0x1d].b = 1
*arg1 = &data_142efcc50
arg1[5] = &data_142efcc58
arg1[0x1e] = arg2
sub_14103f450(&arg1[0x1f], arg2)
arg1[0x2d].d &= 0xfffffffc
arg1[0x2d].d |= 4
arg1[0x2c] = 0
return arg1
