// 函数: sub_141ffa810
// 地址: 0x141ffa810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329ce80
arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_1405c5510(&arg1[7], 0)

int64_t rcx_1 = arg1[7]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
