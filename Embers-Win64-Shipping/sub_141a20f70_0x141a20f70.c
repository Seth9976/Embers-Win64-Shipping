// 函数: sub_141a20f70
// 地址: 0x141a20f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b214c0(arg1)
int64_t* rcx = &arg1[9]
arg1[2] = 0
arg1[3].w = 1
*(arg1 + 0x1c) = 0x3f800000
arg1[4].d = 0x3f800000
*(arg1 + 0x24) = 0
__builtin_memset(&arg1[5], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
return arg1
