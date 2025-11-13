// 函数: sub_140a61630
// 地址: 0x140a61630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = 1
__builtin_memset(arg1 + 0x20, 0, 0x20)
void* rcx = arg1 + 0x40
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = arg1 + 0x90
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
*(arg1 + 0xb0) = 0xffffffff
*(arg1 + 0xb4) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
InitializeCriticalSection(arg1 + 0xd0)
SetCriticalSectionSpinCount(arg1 + 0xd0, 0xfa0)
*(arg1 + 0xf8) = 0
void* rcx_4 = arg1 + 0x108
*(arg1 + 0x100) = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
*(arg1 + 0x128) = 0xffffffff
*(arg1 + 0x12c) = 0
*(arg1 + 0x138) = 0
*(arg1 + 0x140) = 0
InitializeCriticalSection(arg1 + 0x148)
SetCriticalSectionSpinCount(arg1 + 0x148, 0xfa0)
return arg1
