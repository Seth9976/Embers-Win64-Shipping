// 函数: sub_141f04660
// 地址: 0x141f04660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
char rdx = arg1[0x1d].b
*(arg1 + 0x3a) |= 2
*arg1 = &data_143268438
rdx = (rdx & 0x30) | 0x4e
arg1[0x1d].b = rdx
arg1[5] = &data_143268940
arg1[7].b = 0
arg1[0x18].d = 0
arg1[0x1a] = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x8a) |= 0x10
*(arg1 + 0x89) |= 0x80
arg1[0x1b].d = rax
*(arg1 + 0xea) = 0
arg1[0x1d].b = rdx & 0xcf
*(arg1 + 0xe9) = 0
return arg1
