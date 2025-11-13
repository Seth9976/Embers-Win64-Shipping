// 函数: sub_1418209d0
// 地址: 0x1418209d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = arg2[2]
void* rax_3 = arg2[3]
arg1[3] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* rdx = &arg1[6]
arg1[4] = 0
arg1[5] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_4 = *(rdx + 0x10)

if (rax_4 != 0)
    rdx = rax_4

*rdx = 0
*(rdx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
sub_1418235f0(&arg1[4], &arg2[4])
arg1[0xe].d = arg2[0xe].d
return arg1
