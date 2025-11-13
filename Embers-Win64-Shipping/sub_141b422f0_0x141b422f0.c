// 函数: sub_141b422f0
// 地址: 0x141b422f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
__builtin_memset(&arg1[4], 0, 0x28)
*arg1 = &data_143058938
arg1[9] = &data_143032190
__builtin_memset(&arg1[0xa], 0, 0x12)
__builtin_memset(&arg1[0xd], 0, 0x18)
memset(&arg1[0x11], 0, 0x58)
__builtin_memset(&arg1[0x10], 0, 0x20)
void* rcx_1 = &arg1[0x14]
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
return arg1
