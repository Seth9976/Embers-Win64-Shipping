// 函数: sub_141fa5320
// 地址: 0x141fa5320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421385c0(arg1, arg2)
int64_t* rcx = &arg1[0x34c]
*arg1 = &data_14328e5e8
arg1[5] = &data_14328e950
__builtin_memset(&arg1[0x346], 0, 0x30)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x350].d = 0xffffffff
*(arg1 + 0x1a84) = 0
arg1[0x352] = 0
arg1[0x353].d = 0
*(arg1 + 0xa4) |= 3
arg1[0x14].d = 0x800
return arg1
