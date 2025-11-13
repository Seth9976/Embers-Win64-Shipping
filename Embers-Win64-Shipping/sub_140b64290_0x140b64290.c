// 函数: sub_140b64290
// 地址: 0x140b64290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
*(arg1 + 8) = *(arg2 + 8)
__builtin_memset(&arg2[2], 0, 0x60)
arg1[4] = arg2[4]
arg1[5] = arg2[5]
*(arg1 + 0x18) = 0
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[8] = arg2[8]
arg1[9] = arg2[9]
*(arg1 + 0x28) = 0
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
*(arg1 + 0x38) = 0
*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
*(arg1 + 0x48) = 0
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
*(arg1 + 0x58) = 0
*(arg1 + 0x58) = *(arg2 + 0x58)
arg1[0x18] = arg2[0x18]
arg1[0x19] = arg2[0x19]
return arg1
