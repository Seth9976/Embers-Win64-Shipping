// 函数: sub_140b0a740
// 地址: 0x140b0a740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
*arg1 = &data_142e74790
arg1[2].b = 0
__builtin_memset(&arg1[3], 0, 0x20)
InitializeCriticalSection(&arg1[7])
SetCriticalSectionSpinCount(&arg1[7], 0xfa0)
__builtin_memset(&arg1[0xc], 0, 0x30)
return arg1
