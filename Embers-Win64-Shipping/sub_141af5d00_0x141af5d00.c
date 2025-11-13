// 函数: sub_141af5d00
// 地址: 0x141af5d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (arg1[5].b & 0xfe) | 2
arg1[5].b = rax

if ((arg2[5].b & 1) != 0)
    arg1[5].b = rax | 1
    arg2[5].b &= 0xfe
    arg1[5].b &= 0xfd
    arg1[5].b |= arg2[5].b & 2
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    arg1[4] = arg2[4]

*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[7].b = arg2[7].b
return arg1
