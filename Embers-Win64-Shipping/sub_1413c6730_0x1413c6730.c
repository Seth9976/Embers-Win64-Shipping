// 函数: sub_1413c6730
// 地址: 0x1413c6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d1600(arg1, arg2)
sub_1405d1600(&arg1[1], &arg2[1])
sub_1405d1600(&arg1[2], &arg2[2])
arg1[3].d = arg2[3].d
arg2[3].d = 0
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
return arg1
