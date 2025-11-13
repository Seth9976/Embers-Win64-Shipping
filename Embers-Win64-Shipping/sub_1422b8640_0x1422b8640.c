// 函数: sub_1422b8640
// 地址: 0x1422b8640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143317088
int64_t* rcx = arg1[8]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[8] = 0

int64_t* rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)
    arg1[0xa] = 0

sub_1405ec8a0(&arg1[0xb])
sub_1405ec8a0(&arg1[9])
arg1[5] = &data_142dda848
sub_1405d1550(&arg1[7])
sub_1419948a0(&arg1[5])
arg1[2] = &data_142dda848
sub_1405d1550(&arg1[4])
sub_1419948a0(&arg1[2])
sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
