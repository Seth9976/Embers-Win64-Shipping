// 函数: sub_140863390
// 地址: 0x140863390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081a4a0(arg1)
int64_t* rdx = &arg1[0x19]
*arg1 = &data_142ddc4f8
arg1[0x17] = 0
arg1[0x18] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
return arg1
