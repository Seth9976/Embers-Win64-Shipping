// 函数: sub_1419617f0
// 地址: 0x1419617f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
void* r8 = &arg1[6]
*(arg1 + 0x10) = 0
*(r8 + 0x1c) = 0x80
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

__builtin_memset(r8, 0, 0x1c)
arg1[0xe] = 0xffffffff
arg1[0xf] = 0
*(arg1 + 0x48) = 0
arg1[0x14] = 0
sub_141962c50(&arg1[2], &arg2[2])
return arg1
