// 函数: sub_1418cfed0
// 地址: 0x1418cfed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg3
*arg1 = 0
*(arg1 + 0xc) = 0
arg1[2] = arg2
InitializeCriticalSection(&arg1[3])
SetCriticalSectionSpinCount(&arg1[3], 0xfa0)
void* rcx_2 = arg1[2]
uint64_t r8 = zx.q(*(arg1 + 0xc))
uint64_t rdx = zx.q(arg1[1].d)
__builtin_memset(&arg1[8], 0, 0x18)
data_143efb6f8(*(rcx_2 + 8), rdx, r8, arg1)
return arg1
