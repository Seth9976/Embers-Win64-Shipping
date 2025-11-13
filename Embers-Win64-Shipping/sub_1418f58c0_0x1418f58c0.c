// 函数: sub_1418f58c0
// 地址: 0x1418f58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[0x14].b & 7) == 0
*arg1 = &data_142ff1910
arg1[0xd] = &data_142ff1968

if (not(cond:0))
    sub_1418c2cd0(arg1[0xf], arg1[0x10])

sub_1418f49f0(&arg1[0xd])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
