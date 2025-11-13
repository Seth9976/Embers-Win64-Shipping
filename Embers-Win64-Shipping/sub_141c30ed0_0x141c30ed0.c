// 函数: sub_141c30ed0
// 地址: 0x141c30ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 2
*(arg1 + 8) = 0
*(arg1 + 2) = 0x10200
uint32_t rdx = zx.d(*(arg1 + 2))
arg1[0xc] = 0
char rax = *arg1
arg1[0xd] = 0
*(arg1 + 0x10) = 0
arg1[0x18] = rax
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = rdx
sub_141c38410(&arg1[0x18], rdx, 1, 0)
__builtin_memset(&arg1[0x40], 0, 0x20)
uint32_t rdx_1 = 0x1000
uint32_t rax_2 = zx.d(*(arg1 + 2)) << 2
*(arg1 + 0x64) = 0

if (rax_2 u>= 0x1000)
    rdx_1 = rax_2

*(arg1 + 0x68) = 0
sub_141c45f80(&arg1[0x50], rdx_1)
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
InitializeCriticalSection(&arg1[0x88])
SetCriticalSectionSpinCount(&arg1[0x88], 0xfa0)
sub_141c45340(&arg1[0x70], arg1)
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
return arg1
