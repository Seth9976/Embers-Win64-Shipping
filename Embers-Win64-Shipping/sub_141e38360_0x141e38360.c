// 函数: sub_141e38360
// 地址: 0x141e38360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e4fef0(arg1, arg2)
int64_t* rcx = &arg1[0x16]
*arg1 = &data_143247bf8
arg1[5] = &data_143247e80
arg1[6] = &data_143247eb0
__builtin_memset(&arg1[0x10], 0, 0x30)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x21)
*(arg1 + 0x114) = 0xffffffff
arg1[0x23] = 0
return arg1
