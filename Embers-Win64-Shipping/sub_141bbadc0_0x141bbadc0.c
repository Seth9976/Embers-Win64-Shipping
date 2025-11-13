// 函数: sub_141bbadc0
// 地址: 0x141bbadc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg3
void* rax_1 = arg3[1]
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[2] = arg3[2]
void* rax_3 = arg3[3]
arg2[3] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[4] = 0
arg2[5].d = 0
sub_1407473e0(&arg2[4], &arg3[4])
arg2[6].b = arg3[6].b
return arg2
