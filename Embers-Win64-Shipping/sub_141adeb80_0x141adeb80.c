// 函数: sub_141adeb80
// 地址: 0x141adeb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x1c)
*(arg1 + 0x1c) = 0x3f800000
*(arg1 + 0x20) = 0x504
*(arg1 + 0x22) = 0
*(arg1 + 0x28) = &data_142d6a040
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
void* rcx = arg1 + 0x40
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0x7f7fffff
*(arg1 + 0x94) = 0x404
*(arg1 + 0x28) = &data_142da7f70
__builtin_memset(arg1 + 0x98, 0, 0x18)
*(arg1 + 0xb0) = -1
*(arg1 + 0xb8) = 0
return arg1
