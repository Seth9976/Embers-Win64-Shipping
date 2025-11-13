// 函数: sub_14081c6c0
// 地址: 0x14081c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0x14]
*arg1 = &data_142dd61c0
arg1[6] = 0
arg1[7] = 0
arg1[8] = &data_142dd5c48
__builtin_memset(&arg1[9], 0, 0x58)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e].d |= 7
*(arg1 + 0xf4) = 0
arg1[9] = arg1
return arg1
