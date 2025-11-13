// 函数: sub_140623d80
// 地址: 0x140623d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142350e80(arg1, arg2)
arg1[9].d = 0x3f000000
*arg1 = &data_142d6a4e8
*(arg1 + 0x4c) = 0x42c80000
int64_t* rax = sub_140624a60()
int64_t rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    rax_1 = rax[0x23]

arg1[0xa] = rax_1
return arg1
