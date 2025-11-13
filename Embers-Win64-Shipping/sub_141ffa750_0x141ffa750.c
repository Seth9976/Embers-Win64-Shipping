// 函数: sub_141ffa750
// 地址: 0x141ffa750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329d0f8
arg1[9].d = 0

if (*(arg1 + 0x4c) != 0)
    sub_1405c5510(&arg1[8], 0)

int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
