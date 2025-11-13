// 函数: sub_1406b5570
// 地址: 0x1406b5570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
arg1[1] = arg2[1]
arg2[1] = 0
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg2[2] = 0
return arg1
