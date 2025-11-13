// 函数: sub_141fa5080
// 地址: 0x141fa5080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rdx = &arg1[8]
*arg1 = &data_14328ad08
arg1[6] = 0
arg1[7] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
__builtin_memset(&arg1[0x11], 0, 0x20)
arg1[0x15] = 2
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 2
arg1[0x10].b &= 0xf8
return arg1
