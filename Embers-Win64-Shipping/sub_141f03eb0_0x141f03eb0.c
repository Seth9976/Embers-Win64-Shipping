// 函数: sub_141f03eb0
// 地址: 0x141f03eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_14326b680
arg1[5] = &data_14326bbb0
sub_141e4f3c0(&arg1[0x41])
arg1[0x41] = &data_142e259f0
arg1[0x57] = 0
arg1[0x58] = 0
arg1[0x3f].b |= 4
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x1fc) = 0x3f800000
return arg1
