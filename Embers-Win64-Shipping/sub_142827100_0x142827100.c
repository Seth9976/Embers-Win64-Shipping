// 函数: sub_142827100
// 地址: 0x142827100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
arg1[4] = arg2[4]
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
memcpy(&arg1[6], &arg2[6], 0x20)
*(arg2 + 0x28) = 0
*(arg2 + 0x30) = 0xf
arg2[6].b = 0
__builtin_memset(&arg1[0xe], 0, 0x18)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
__builtin_memset(&arg2[0xe], 0, 0x18)
arg1[0x14] = arg2[0x14]
return arg1
