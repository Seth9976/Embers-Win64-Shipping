// 函数: sub_141761c70
// 地址: 0x141761c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc6e78
__builtin_memset(&arg1[1], 0, 0x40)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
__builtin_memset(&arg1[0x11], 0, 0x61)
return arg1
