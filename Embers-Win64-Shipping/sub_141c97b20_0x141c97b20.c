// 函数: sub_141c97b20
// 地址: 0x141c97b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320fe98
int64_t* rcx = arg1[0x13]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0x13] = 0
int64_t rcx_1 = arg1[0x14]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
