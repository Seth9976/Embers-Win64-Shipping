// 函数: sub_140919a30
// 地址: 0x140919a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2] = arg2[2]
void* rax_1 = arg2[3]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[4].d = arg2[4].d
void* rdx = &arg1[7]
arg1[5] = 0
arg1[6] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_3 = *(rdx + 0x10)

if (rax_3 != 0)
    rdx = rax_3

*rdx = 0
*(rdx + 8) = 0
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
sub_14091bd10(&arg1[5], &arg2[5])
return arg1
