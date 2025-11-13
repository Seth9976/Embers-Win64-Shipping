// 函数: sub_140fd9490
// 地址: 0x140fd9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2938
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg3
arg1[4].d = *arg3
*arg1 = &data_142ef59f0
arg1[5] = arg4

if (arg4 != 0)
    (*(*arg4 + 8))(arg4)

*(arg1 + 0x30) = *arg5
arg1[8] = arg5[1].q
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = arg2
return arg1
