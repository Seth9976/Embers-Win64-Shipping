// 函数: sub_1423d12c0
// 地址: 0x1423d12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x19]
*arg1 = &data_14333f678
arg1[2] = &data_14333f828

if (rdi != 0)
    sub_1423fef60(rdi)
    j_sub_140a74f90(rdi)
    arg1[0x19] = 0

sub_1423d0170(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
