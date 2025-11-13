// 函数: sub_141a36380
// 地址: 0x141a36380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14302e030
int64_t rcx = arg1[0xd]

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = &data_142d6a040
int64_t rcx_1 = arg1[0xb]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae180(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
