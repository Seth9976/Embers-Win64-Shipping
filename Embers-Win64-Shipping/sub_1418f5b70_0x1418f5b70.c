// 函数: sub_1418f5b70
// 地址: 0x1418f5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff1c10
int64_t r8 = arg1[6]

if (r8 != 0)
    sub_1418be030(&arg1[3][0x76], 4, r8)
    __builtin_memset(&arg1[6], 0, 0x14)

sub_1405d16e0(&arg1[0xc], nullptr)
sub_1405d16e0(&arg1[0xa], nullptr)
sub_1408c8cf0(&arg1[5], nullptr)
arg1[3] = 0
sub_1405d1550(&arg1[0xc])
sub_1405d1550(&arg1[0xb])
sub_1405d1550(&arg1[0xa])
sub_1405d1550(&arg1[5])
sub_1405d1550(&arg1[4])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
