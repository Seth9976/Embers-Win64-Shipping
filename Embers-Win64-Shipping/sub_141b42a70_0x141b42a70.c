// 函数: sub_141b42a70
// 地址: 0x141b42a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d ^= (arg2[3].d ^ arg1[3].d) & 1
*(arg1 + 0x1c) = *(arg2 + 0x1c)
sub_1405af700(&arg1[5], &arg2[5])
arg1[0x19].b = arg2[0x19].b
*(arg1 + 0xc9) = *(arg2 + 0xc9)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
arg1[0x1a].d = arg2[0x1a].d
return arg1
