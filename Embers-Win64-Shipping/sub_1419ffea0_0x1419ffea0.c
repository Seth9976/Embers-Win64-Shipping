// 函数: sub_1419ffea0
// 地址: 0x1419ffea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14301fec8
int64_t* rcx = arg1[0x4a]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0x4a] = 0
int64_t rcx_1 = arg1[0x48]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x46]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
