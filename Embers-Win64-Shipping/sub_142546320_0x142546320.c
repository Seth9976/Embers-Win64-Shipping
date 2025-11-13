// 函数: sub_142546320
// 地址: 0x142546320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x12c
arg1[1] = 0x40400000
sub_1420d87d0(&arg1[2])
arg1[0x24] = 0
arg1[0x25] = data_14399f634
arg1[0x26] = 0x41a00000
arg1[0x27] = 0x43020000
arg1[0x28] = 0x100
arg1[0x29].w = 0x100
char rax_1 = *(arg1 + 0xa7) & 0xe6
*(arg1 + 0xa6) = 0x20
*(arg1 + 0x31) = 1
*(arg1 + 0xa7) = rax_1 | 6
return arg1
