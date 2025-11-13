// 函数: sub_1418281f0
// 地址: 0x1418281f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe55c0
arg1[1] = &data_142fe55e0
int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

while (arg1[7] != 0)
    int64_t* rcx_2 = arg1[7]
    arg1[7] = *rcx_2
    j_sub_140a74f90(rcx_2)

sub_140a1d7d0(&arg1[1])
*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
