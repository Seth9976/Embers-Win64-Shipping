// 函数: sub_142a72390
// 地址: 0x142a72390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a717f0(arg1, arg2)
sub_142a48100(arg1 + 0x20, arg2 + 0x20)
char rax = (*(arg1 + 0x28)).b

if ((rax & 0x11) != 0)
    *(arg1 + 0x18) = 0
    return arg1

void* rax_2 = arg1 + 0x2a

if ((rax & 2) == 0)
    rax_2 = *(arg1 + 0x38)

*(arg1 + 0x18) = rax_2
return arg1
