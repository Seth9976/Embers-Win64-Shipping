// 函数: sub_1419095f0
// 地址: 0x1419095f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff49f8
sub_14194b500(&arg1[0xe])
int64_t rcx_1 = arg1[0x13]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x11]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142ef57c0
sub_140fda0a0(&arg1[0xc])
int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
