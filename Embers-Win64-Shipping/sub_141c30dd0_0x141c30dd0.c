// 函数: sub_141c30dd0
// 地址: 0x141c30dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = 0
*(arg1 + 0xd) = 1
arg1[2].d = arg3
uint32_t rdx = zx.d(*(arg2 + 2))
arg1[3].b = *arg2
arg1[4] = 0
arg1[5] = 0
arg1[6].d = rdx
sub_141c38410(&arg1[3], rdx, 1, 0)
__builtin_memset(&arg1[8], 0, 0x20)
uint32_t rdx_1 = 0x1000
uint32_t rax_3 = zx.d(*(arg1 + 2)) << 2
*(arg1 + 0x64) = 0

if (rax_3 u>= 0x1000)
    rdx_1 = rax_3

arg1[0xd].d = 0
sub_141c45f80(&arg1[0xa], rdx_1)
arg1[0xe] = 0
arg1[0xf] = 0
InitializeCriticalSection(&arg1[0x11])
SetCriticalSectionSpinCount(&arg1[0x11], 0xfa0)
sub_141c45340(&arg1[0xe], arg2)
arg1[0x16] = 0
arg1[0x17] = 0
sub_141c45550(arg1)
return arg1
