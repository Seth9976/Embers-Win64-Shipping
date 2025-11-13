// 函数: sub_142670630
// 地址: 0x142670630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* rdx = &arg1[4]
__builtin_memset(&arg1[1], 0, 0x18)
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
*(arg1 + 0x44) = 0
arg1[8].d = 0xffffffff
arg1[0xa] = 0
arg1[0xb].d = 0
sub_1426022c0(&arg1[0xc])
return arg1
