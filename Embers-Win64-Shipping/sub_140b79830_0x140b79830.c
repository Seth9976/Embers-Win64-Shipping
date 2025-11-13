// 函数: sub_140b79830
// 地址: 0x140b79830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e801c8
sub_140b78990(&arg1[5])
int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[1]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142e800b8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
