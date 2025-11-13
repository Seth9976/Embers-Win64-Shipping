// 函数: sub_1426a6390
// 地址: 0x1426a6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = *arg2
arg1[2].d = arg2[1].d
arg1[3] = 0
arg1[4].d = (arg1[4].d & 0xffffff7d) | 0x7d
__builtin_memset(&arg1[5], 0, 0x14)
*(arg1 + 0x24) = 0xbf800000
return arg1
