// 函数: sub_140ee2620
// 地址: 0x140ee2620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2] = arg2[2]
void* rdx = &arg1[6]
arg1[3] = arg2[3]
arg1[4] = 0
arg1[5] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_2 = *(rdx + 0x10)

if (rax_2 != 0)
    rdx = rax_2

*rdx = 0
*(rdx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
sub_140ee4880(&arg1[4], &arg2[4])
return arg1
