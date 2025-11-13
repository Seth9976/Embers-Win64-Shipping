// 函数: sub_140d91d10
// 地址: 0x140d91d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg2[1] = 0
*arg2 = 0
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].w = arg2[3].w
*(arg1 + 0x1a) = *(arg2 + 0x1a)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1e) = *(arg2 + 0x1e)
arg1[4].b = arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
*(arg1 + 0x22) = *(arg2 + 0x22)
*(arg1 + 0x23) = *(arg2 + 0x23)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = arg2[5]
arg1[6] = arg2[6]
__builtin_memset(&arg2[5], 0, 0x40)
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x71) = *(arg2 + 0x71)
*(arg1 + 0x72) = *(arg2 + 0x72)
return arg1
