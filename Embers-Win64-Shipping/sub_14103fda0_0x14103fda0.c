// 函数: sub_14103fda0
// 地址: 0x14103fda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142efcc30
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
arg1[7] = 0
void* rcx_2 = &arg1[0x2a]
arg1[8] = 0
arg1[9] = arg2
arg1[0xa].d = 0
__builtin_memset(&arg1[0xb], 0, 0x50)
arg1[0x15].w = 0xff00
arg1[0x16].d = 0
arg1[0x17] = 0
arg1[0x18].b = 1
*arg1 = &data_142f009f8
arg1[0x19] = &data_142efcd90
__builtin_memset(&arg1[0x1a], 0, 0x14)
arg1[0x1d] = arg1
arg1[0x1e] = 0
arg1[0x20] = 0
arg1[0x21].d = 0
*(arg1 + 0x10c) = 1
arg1[0x22].b = 0
__builtin_memset(&arg1[0x23], 0, 0x24)
arg1[0x28] = 0
arg1[0x29] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x2e].d = 0xffffffff
*(arg1 + 0x174) = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
return arg1
