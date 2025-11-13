// 函数: sub_1429cfeb0
// 地址: 0x1429cfeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = (arg1[1].d & 0xfffffe14) | 0x14
arg1[2].d = 0
*(arg1 + 0xc) = 0
*(arg1 + 0xe) = 0
__builtin_memset(&arg1[3], 0, 0xc0)
return arg1
