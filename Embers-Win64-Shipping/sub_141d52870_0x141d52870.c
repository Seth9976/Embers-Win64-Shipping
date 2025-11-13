// 函数: sub_141d52870
// 地址: 0x141d52870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c4f2c0(arg1, arg2)
*(arg1 + 0x6d4) = 0
*arg1 = &data_143227ef0
arg1[0xdb].d = 0x322bcc77
arg1[5] = &data_143228440
arg1[0xda].d = 1
*(arg1 + 0x6dc) = 1
arg1[0xdc].d = 0x3f7eb852
*(arg1 + 0x6e4) = 0
arg1[0xdd].d = 0x3f80a3d7
arg1[0xdf].d = 0
arg1[0xe0] = 0
InitializeCriticalSection(&arg1[0xe1])
SetCriticalSectionSpinCount(&arg1[0xe1], 0xfa0)
arg1[0xe6].d = 0xffffffff
__builtin_memset(arg1 + 0x734, 0, 0x14)
arg1[0xe9].d = 0x3f800000
void* rax = j_sub_140a82f30(0x90)
void* const rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_141d4ba60(rax)

arg1[0xea] = rax_1
arg1[0xeb] = 0
arg1[0xec] = 0
arg1[0xed] = -0x8000000000000000
arg1[0xee] = 0
arg1[0xef] = 0
sub_141c30ed0(&arg1[0xf1])
arg1[0x109].b = 2
*(arg1 + 0x84a) = 0x10200
arg1[0x10a].d = 0
sub_141c2e3b0(&arg1[0x10b])
arg1[0x110].d = 0xa
*(arg1 + 0x884) = 0x64
InitializeCriticalSection(&arg1[0x112])
SetCriticalSectionSpinCount(&arg1[0x112], 0xfa0)
arg1[0x117] = 0
arg1[0x118] = 0
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x80
arg1[0x119].w = 0
return arg1
