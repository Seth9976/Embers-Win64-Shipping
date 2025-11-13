// 函数: sub_142587e00
// 地址: 0x142587e00
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
return arg1
