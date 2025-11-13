// 函数: sub_142105a90
// 地址: 0x142105a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142119de0(arg1, arg2)
*arg1 = &data_1432ca3c8
arg1[5] = &data_1432ca858
arg1[6] = &data_1432ca870
__builtin_memset(&arg1[0x1b], 0, 0x78)
__builtin_memset(arg1 + 0x15c, 0, 0x68)
*(arg1 + 0x20f) = 0
*(arg1 + 0x224) = 0
*(arg1 + 0x22c) = 0
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x56] = 0
sub_142105850(&arg1[0x58])
int128_t zmm0 = data_1432d45e0
__builtin_memset(&arg1[0x8c], 0, 0x80)
*(arg1 + 0x155) &= 0xfe
*(arg1 + 0x1fa) &= 0xfe
*(arg1 + 0x151) = 0
*(arg1 + 0x153) = 0x101
*(arg1 + 0x156) = 2
*(arg1 + 0x1c5) = 0
*(arg1 + 0x1cc) = 0x3f800000
arg1[0x3a].d = 0x3f000000
*(arg1 + 0x1d4) = 0x40000000
arg1[0x3b] = 0x41200000
arg1[0x3c].d = 0x41f00000
*(arg1 + 0x1e4) = zmm0
*(arg1 + 0x1f4) = 0x42c80000
arg1[0x2b].d = 0x3eaaa64c
*(arg1 + 0x209) = 0
*(arg1 + 0x234) = 0
char rax = *(arg1 + 0x1c4)
*(arg1 + 0x1c6) &= 0xfe
arg1[0x40].b |= 0x12
*(arg1 + 0x1fc) &= 0xfffffffe
arg1[0x43].b |= 1
*(arg1 + 0x20d) &= 0xfc
*(arg1 + 0x1c4) = (rax & 0xf1) | 1
char rax_1 = arg1[0x3f].b & 0xcf
*(arg1 + 0x20c) = 0
*(arg1 + 0x214) = 0
arg1[0x3f].b = rax_1 | 8
char rax_2 = *(arg1 + 0x20b) & 0x30
arg1[0x44].d = 0
arg1[0x11] = 0
*(arg1 + 0x20b) = rax_2 | 0x46
char rax_3 = *(arg1 + 0x20a) & 0x3c
arg1[0x12] = 0
*(arg1 + 0x20a) = rax_3 | 2
return arg1
