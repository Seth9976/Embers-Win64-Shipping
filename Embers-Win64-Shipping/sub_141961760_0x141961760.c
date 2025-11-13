// 函数: sub_141961760
// 地址: 0x141961760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = -1
arg1[5] = -1
__builtin_memset(&arg1[6], 0, 0x14)
arg1[9] = 0
arg1[0xa] = 0
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
arg1[0x13] = 0
arg1[0x14].w = 0
return arg1
