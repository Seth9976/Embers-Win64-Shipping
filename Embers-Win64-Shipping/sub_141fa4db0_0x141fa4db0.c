// 函数: sub_141fa4db0
// 地址: 0x141fa4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[2] &= 0xffffffe0
__builtin_memset(&arg1[4], 0, 0x88)
void* rcx = &arg1[0x26]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x2e] = 0xffffffff
arg1[0x2f] = 0
*(arg1 + 0xc8) = 0
arg1[0x34] = 0
arg1[0x36] = 0xffffffff
arg1[0x37] = 0
return arg1
