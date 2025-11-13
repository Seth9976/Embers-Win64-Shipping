// 函数: sub_14103dfd0
// 地址: 0x14103dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2948
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
*(arg1 + 0x20) = *arg10
arg1[6].d = arg10[1].d
*(arg1 + 0x34) = arg5
arg1[7].d = arg6
*(arg1 + 0x3c) = arg7
arg1[9] = &arg1[0xa]
arg1[8].d = arg9
arg1[0xa] = -0x3810000020000000
arg1[0xb] = 0
*arg1 = &data_142ef29a0
arg1[0xc].d = arg3
*(arg1 + 0x64) = arg4
sub_14103fda0(&arg1[0xd], arg2)
*(arg1 + 0x204) &= 0xfffffffe
*arg1 = &data_142f00b08
arg1[0xd] = &data_142f00b60
*(arg1 + 0x204) |= zx.d(arg8)
arg1[0x40].d = arg9

if (arg11 == 0)
    arg1[0x41].b = 0

return arg1
