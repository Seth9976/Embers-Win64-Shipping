// 函数: sub_1425a33a0
// 地址: 0x1425a33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eb5270(arg1)
int64_t* rdx = &arg1[0xd]
*arg1 = &data_14309b408
arg1[0xb] = 0
arg1[0xc] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
*arg1 = &data_14327f120
arg1[0x15].b = 0
__builtin_memset(&arg1[0x16], 0, 0x11)
__builtin_memset(arg1 + 0xc4, 0, 0x15)
__builtin_memset(arg1 + 0xdc, 0, 0x15)
__builtin_memset(arg1 + 0xf4, 0, 0x15)
__builtin_memset(arg1 + 0x10c, 0, 0x1d)
__builtin_memset(arg1 + 0x12c, 0, 0x15)
__builtin_memset(arg1 + 0x144, 0, 0x15)
__builtin_memset(arg1 + 0x15c, 0, 0x15)
*(arg1 + 0x174) = 0
arg1[0x2f] = 0
return arg1
