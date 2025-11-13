// 函数: sub_141d52a90
// 地址: 0x141d52a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423ba700(arg1, arg2)
*arg1 = &data_143227b00
arg1[8] = &data_143227e60
arg1[0x17].w = 0x101
*(arg1 + 0xba) = 0
int128_t zmm0 = data_14399f5e0
*(arg1 + 0xcc) = 0x100
*(arg1 + 0xbc) = zmm0
__builtin_memset(&arg1[0x1b], 0, 0x30)
arg1[0x21].d = 0xffffffff
*(arg1 + 0x10c) = 0
sub_140b214c0(&arg1[0x22])
arg1[0x24] = data_143dbb180
__builtin_memset(&arg1[0x28], 0, 0x18)
InitializeCriticalSection(&arg1[0x2b])
SetCriticalSectionSpinCount(&arg1[0x2b], 0xfa0)
arg1[0x30] = -0x8000000000000000
*(arg1 + 0x3d) |= 2
return arg1
