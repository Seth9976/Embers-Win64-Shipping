// 函数: sub_1426c57f0
// 地址: 0x1426c57f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x34)
*(arg1 + 0x34) = 0xffffffff
*(arg1 + 0x38) = 0
__builtin_memset(arg1 + 0x40, 0, 0x2c)
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
void* rcx_1 = arg1 + 0xd0
*(arg1 + 0xa0) = 0xffffffff
*(arg1 + 0xa4) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
*(arg1 + 0xf0) = 0xffffffff
*(arg1 + 0xf4) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = -1
__builtin_memset(arg1 + 0x128, 0, 0x16)
*(arg1 + 0x13e) &= 0xf8
__builtin_memset(arg1 + 0x140, 0, 0x14)
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
return arg1
