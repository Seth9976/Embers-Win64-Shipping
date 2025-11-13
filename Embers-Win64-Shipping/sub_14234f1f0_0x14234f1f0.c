// 函数: sub_14234f1f0
// 地址: 0x14234f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306c4e0
void* rax = *arg2
arg1[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 4
*arg1 = &data_14332dd20
arg1[2] = &data_14332dd40
arg1[3] = &data_14332dd88
arg1[4] = &data_14332dd98
arg1[6].d = arg3
*(arg1 + 0x34) = arg4
__builtin_memset(&arg1[8], 0, 0x15)
sub_1405d1550(arg2)
return arg1
