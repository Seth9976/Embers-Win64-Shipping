// 函数: sub_140745040
// 地址: 0x140745040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x30)
*(arg1 + 0x30) = (*(arg1 + 0x30) & 0xffffffd8) | 0x18
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
void* rcx = arg1 + 0x48
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_3 = *(rcx + 0x10)

if (rax_3 != 0)
    rcx = rax_3

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0x68) = 0xffffffff
*(arg1 + 0x6c) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
return arg1
