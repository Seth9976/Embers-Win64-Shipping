// 函数: sub_1418f5990
// 地址: 0x1418f5990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[8].b & 7) == 0
*arg1 = &data_142ff1a30
arg1[0xe] = &data_142ff1a88

if (not(cond:0))
    sub_1418c2cd0(arg1[0x10], arg1[0x11])

sub_1418f49f0(&arg1[0xe])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
