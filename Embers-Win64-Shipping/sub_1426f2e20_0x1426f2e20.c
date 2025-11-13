// 函数: sub_1426f2e20
// 地址: 0x1426f2e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426f3d10(arg1, arg2)
*(arg1 + 0x274) &= 0xc
*(arg1 + 0x276) |= 2
*(arg1 + 0x274) |= 0x82
*arg1 = &data_14347ca70
arg1[5] = &data_14347cff0
arg1[0x16] = &data_14347d020
arg1[0x17] = &data_14347d050
arg1[0x4b] = &data_14347d080
char rax = *(arg1 + 0x275) & 0xf6
*(arg1 + 0x277) = 0
*(arg1 + 0x27c) = 0x40000000
*(arg1 + 0x275) = rax | 0xd6
arg1[0x50].d = 0x43c80000
*(arg1 + 0x284) = 0x447a0000
arg1[0x51].d = 0x3f800000
return arg1
