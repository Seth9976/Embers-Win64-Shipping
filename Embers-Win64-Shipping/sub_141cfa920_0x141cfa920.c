// 函数: sub_141cfa920
// 地址: 0x141cfa920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321ce00
int64_t* rcx = arg1[0x13]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0x13] = 0
sub_140a74f90(arg1[0x18])
arg1[0x18] = 0
sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
