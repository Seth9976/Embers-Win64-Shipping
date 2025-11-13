// 函数: sub_140ee2240
// 地址: 0x140ee2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2] = 0
void* r8 = &arg1[4]
arg1[3] = 0
*(r8 + 0x10) = 0
*(r8 + 0x18) = 0
*(r8 + 0x1c) = 0x80
void* rax = *(r8 + 0x10)

if (rax != 0)
    r8 = rax

*r8 = 0
*(r8 + 8) = 0
*(arg1 + 0x44) = 0
arg1[8].d = 0xffffffff
arg1[0xa] = 0
arg1[0xb].d = 0
sub_14094d9d0(&arg1[2], &arg2[2])
return arg1
