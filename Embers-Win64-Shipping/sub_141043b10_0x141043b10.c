// 函数: sub_141043b10
// 地址: 0x141043b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6] == 0
*arg1 = &data_142f00928

if (not(cond:0))
    sub_1410224a0(&arg1[3][0x56], arg1[6], arg1[7].d)
    arg1[6] = 0

sub_1405d1550(&arg1[4])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
