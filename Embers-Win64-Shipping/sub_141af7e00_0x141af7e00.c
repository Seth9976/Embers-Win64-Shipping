// 函数: sub_141af7e00
// 地址: 0x141af7e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d ^= (arg2[3].d ^ arg1[3].d) & 1
*(arg1 + 0x1c) = *(arg2 + 0x1c)
sub_1407431a0(&arg1[5], &arg2[5])
arg1[0x19].b = arg2[0x19].b
*(arg1 + 0xc9) = *(arg2 + 0xc9)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
arg1[0x1a].d = arg2[0x1a].d
arg1[0x1b].d = arg3
*(arg1 + 0xdc) = arg4
return arg1
