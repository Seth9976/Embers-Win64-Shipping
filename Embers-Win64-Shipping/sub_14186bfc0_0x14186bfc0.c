// 函数: sub_14186bfc0
// 地址: 0x14186bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7ba8
int64_t rcx = arg1[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1[9]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

sub_1418221b0(&arg1[3])
int64_t rcx_4 = arg1[1]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
