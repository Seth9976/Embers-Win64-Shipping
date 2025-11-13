// 函数: sub_1426c5940
// 地址: 0x1426c5940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 8, 0, 0x34)
*(arg1 + 0x3c) = 0xffffffff
*(arg1 + 0x40) = 0
__builtin_memset(arg1 + 0x48, 0, 0x2c)
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
void* rcx = arg1 + 0x88
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = arg1 + 0xd8
*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
*(arg1 + 0xf8) = 0xffffffff
*(arg1 + 0xfc) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = -1
__builtin_memset(arg1 + 0x130, 0, 0x16)
*(arg1 + 0x146) &= 0xf8
__builtin_memset(arg1 + 0x148, 0, 0x14)
__builtin_memset(arg1 + 0x160, 0, 0x18)
return arg1
