// 函数: sub_14225b2c0
// 地址: 0x14225b2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6].d ^= (arg1[6].d ^ arg2[6].d) & 1
arg1[6].d ^= (arg2[6].d ^ arg1[6].d) & 2
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].d = arg2[7].d
sub_1405af800(&arg1[8], &arg2[8])
arg1[0xb0] = arg2[0xb0]

if (&arg2[0xb2] != &arg1[0xb2])
    if (arg1[0xb8].b != 0)
        arg1[0xb8].b = 0
    
    if (arg2[0xb8].b != 0)
        *(arg1 + 0x590) = *(arg2 + 0x590)
        *(arg1 + 0x5a0) = *(arg2 + 0x5a0)
        *(arg1 + 0x5b0) = *(arg2 + 0x5b0)
        arg1[0xb8].b = 1

return arg1
