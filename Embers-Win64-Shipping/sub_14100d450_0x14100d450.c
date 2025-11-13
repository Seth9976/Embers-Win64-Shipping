// 函数: sub_14100d450
// 地址: 0x14100d450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x40)
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = &data_142effd48
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 1
__builtin_memset(arg1 + 0x68, 0, 0x20)
void* rcx = arg1 + 0x88
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = arg1 + 0x128
*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
__builtin_memset(arg1 + 0xd0, 0, 0x1d)
*(arg1 + 0xf0) = 0
__builtin_memset(arg1 + 0xf8, 0, 0x30)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = arg1 + 0x178
*(arg1 + 0x148) = 0xffffffff
*(arg1 + 0x14c) = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
*(arg1 + 0x168) = 0
*(arg1 + 0x170) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
*(arg1 + 0x198) = 0xffffffff
*(arg1 + 0x19c) = 0
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1b0) = 0
return arg1
