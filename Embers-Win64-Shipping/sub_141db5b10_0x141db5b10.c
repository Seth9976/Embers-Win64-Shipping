// 函数: sub_141db5b10
// 地址: 0x141db5b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
void* r8 = &arg1[3]
arg1[2] = 0
*(r8 + 0x1c) = 0x80
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

__builtin_memset(r8, 0, 0x1c)
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
sub_1417d6d70(&arg1[1], &arg2[1])
return arg1
