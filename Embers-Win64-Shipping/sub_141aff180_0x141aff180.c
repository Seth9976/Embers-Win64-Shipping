// 函数: sub_141aff180
// 地址: 0x141aff180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14305a8b0
sub_1408464b0(&arg1[0xf])
int64_t rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142d6a040
int64_t rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae180(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
