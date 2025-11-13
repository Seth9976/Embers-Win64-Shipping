// 函数: sub_14100ad10
// 地址: 0x14100ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[3] = rax
arg1[4].b = 0
arg1[2].w = 0x100
arg1[5] = arg2
arg1[6].d = arg3
*(arg1 + 0x34) = arg3
__builtin_memset(&arg1[7], 0, 0x18)
*arg1 = &data_142efcd98
InitializeCriticalSection(&arg1[0xa])
SetCriticalSectionSpinCount(&arg1[0xa], 0xfa0)
__builtin_memset(&arg1[0xf], 0, 0x40)
return arg1
