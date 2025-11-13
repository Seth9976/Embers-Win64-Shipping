// 函数: sub_141b7bbf0
// 地址: 0x141b7bbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
sub_140d3a3a0(arg1 + 0x20, arg2)
*(arg1 + 0x28) = 0xffffffff
void* rcx_1 = arg1 + 0x40
__builtin_memset(arg1 + 0x2c, 0, 0x14)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
return arg1
