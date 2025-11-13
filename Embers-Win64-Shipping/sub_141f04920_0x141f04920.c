// 函数: sub_141f04920
// 地址: 0x141f04920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_1432717b0
arg1[5] = &data_143271cd0
arg1[0x3e] = &data_143271d00
sub_1422d7fd0(&arg1[0x40])
*(arg1 + 0x74c) |= 3
*(arg1 + 0x744) = 0x42c80000
arg1[0xe9].d = 0x3f800000
arg1[0xe8].d = 0
return arg1
