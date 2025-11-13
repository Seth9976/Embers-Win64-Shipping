// 函数: sub_141ff3c60
// 地址: 0x141ff3c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_1405947f0(arg1, 6)
int32_t rax = arg1[1].d + 6
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

sub_1405a7220(*arg1, 6, "Arial", 6, 0x3f)
arg1[2].d = 0x41800000
*(arg1 + 0x14) = (*(arg1 + 0x14) & 0xffffffe1) | 1
arg1[3].b = 0
__builtin_memset(&arg1[4], 0, 0x40)
arg1[0xc].d &= 0xfffffffe
arg1[0xc].d |= 2
*(arg1 + 0x64) = 0x3f800000
arg1[0xd].d = 0x3f800000
*(arg1 + 0x6c) = 0x3f800000
arg1[0xe].d = 0x3f800000
*(arg1 + 0x74) &= 0xfffffffe
arg1[0x13].d &= 0xfffffffe
arg1[0x14].d &= 0xfffffffe
arg1[0xf].d = 0x100
*(arg1 + 0x7c) = 0x100
arg1[0x10].d = 1
*(arg1 + 0x84) = 1
*(arg1 + 0x8c) = 0
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa4) = 0x10
arg1[0x15].d = 0x3f800000
return arg1
