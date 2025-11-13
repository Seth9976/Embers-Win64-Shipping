// 函数: sub_141820340
// 地址: 0x141820340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe3168
arg1[0xf].d = 0
InitializeCriticalSection(arg1 + 0x80)
SetCriticalSectionSpinCount(&arg1[0x10], 0xfa0)
arg1[0xd].d = 0
arg1[0xe] = 0
*(arg1 + 0x6c) = 0
arg1[0xf].d
arg1[0xf].d = 0
__builtin_memset(&arg1[1], 0, 0x30)
arg1[7].d = 0x3f800000
*(arg1 + 0x3c) = 0x3f800000
arg1[8].d = 0x3f800000
*(arg1 + 0x44) = 0x3f800000
arg1[9].d = 0x3f800000
*(arg1 + 0x4c) = 0x3f800000
arg1[0xa].d = 0x3f800000
*(arg1 + 0x54) = 0x3f800000
arg1[0xb].d = 0x3f800000
*(arg1 + 0x5c) = 0x3f800000
arg1[0xc].d = 0x3f800000
*(arg1 + 0x64) = 0x3f800000
float zmm0 = *(arg1 + 0x44)
arg1[0xd].d = zmm0
zmm0 = zmm0 f+ arg1[9].d
arg1[0xd].d = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x4c)
arg1[0xd].d = zmm0
zmm0 = zmm0 f+ arg1[0xa].d
arg1[0xd].d = zmm0
arg1[0xd].d = zmm0 f+ *(arg1 + 0x54)
sub_141851f90(arg1)
return arg1
