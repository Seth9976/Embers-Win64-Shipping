// 函数: sub_141f2dfd0
// 地址: 0x141f2dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e610(arg1, arg2)
*arg1 = &data_14327a2d8
arg1[5] = &data_14327a808
arg1[0x58] = 0
*(arg1 + 0x1f2) |= 1
*(arg1 + 0x89) |= 8
char rax = *(arg1 + 0x3a)
*(arg1 + 0x2bc) = 1
arg1[7].b = 2
*(arg1 + 0x3a) = (rax & 0xf7) | 2
arg1[0x5b] = 0
*(arg1 + 0x294) = 0x3c23d70a
arg1[0x53].d = 0x461c4000
*(arg1 + 0x29c) = 0x32
arg1[0x52].d = 0x43fa0000
__builtin_memcpy(arg1 + 0x2a4, 
    "\x00\x00\xc8\x43\x00\x00\x16\x44\x00\x00\x70\x42\x00\x00\xc8\x42\x00\x00\xa0\x41\x00\x00\xf0\x41", 
    0x18)
*(arg1 + 0x2e0) = data_14399f6e0
*(arg1 + 0x2f0) = data_14399f6f0
*(arg1 + 0x300) = data_14399f700
*(arg1 + 0x310) = data_14399f710
*(arg1 + 0x320) = data_14399f6e0
*(arg1 + 0x330) = data_14399f6f0
*(arg1 + 0x340) = data_14399f700
*(arg1 + 0x350) = data_14399f710
*(arg1 + 0x25c) &= 0xffffefff
arg1[0x4b].d &= 0xff9fffff
int32_t rax_2 = data_143f3b384 + 1
data_143f3b384 = rax_2
arg1[0x6c].d = rax_2
return arg1
