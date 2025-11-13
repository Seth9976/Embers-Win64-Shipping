// 函数: sub_141a7b5c0
// 地址: 0x141a7b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 &= 0xfffffffe
arg2[1] = 0
arg2[4] &= 0xffffff00
*(arg2 + 8) = 0x3f800000
return 0
