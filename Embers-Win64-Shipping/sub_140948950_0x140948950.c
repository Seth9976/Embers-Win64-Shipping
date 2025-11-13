// 函数: sub_140948950
// 地址: 0x140948950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2] = arg2[2]
void* rax_1 = arg2[3]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[4].d = arg2[4].d
arg1[5] = arg2[5]
void* rax_4 = arg2[6]
arg1[6] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[7].d = arg2[7].d
arg1[8] = arg2[8]
void* rax_7 = arg2[9]
arg1[9] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0xa].d = arg2[0xa].d
arg1[0xb] = arg2[0xb]
void* rax_10 = arg2[0xc]
arg1[0xc] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

arg1[0xd].d = arg2[0xd].d
arg1[0xe].d = arg2[0xe].d
arg1[0xf] = arg2[0xf]
void* rax_14 = arg2[0x10]
arg1[0x10] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

arg1[0x11].d = arg2[0x11].d
arg1[0x12].d = arg2[0x12].d
sub_140596d10(&arg1[0x13], &arg2[0x13])
arg1[0x15] = arg2[0x15]
void* rdx_1 = &arg1[0x1a]
arg1[0x16] = arg2[0x16]
arg1[0x17].b = arg2[0x17].b
arg1[0x18] = 0
arg1[0x19] = 0
*(rdx_1 + 0x10) = 0
*(rdx_1 + 0x18) = 0
*(rdx_1 + 0x1c) = 0x80
void* rax_20 = *(rdx_1 + 0x10)

if (rax_20 != 0)
    rdx_1 = rax_20

*rdx_1 = 0
*(rdx_1 + 8) = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
sub_14094d9d0(&arg1[0x18], &arg2[0x18])
return arg1
