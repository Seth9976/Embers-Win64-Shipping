// 函数: sub_141a8fe80
// 地址: 0x141a8fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6].d = arg2[6].d
*(arg1 + 0x68) = 0
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg2 + 0x68) = 0
arg1[7].d = arg2[7].d
*(arg1 + 0x74) = *(arg2 + 0x74)
arg2[7].q = 0
*(arg1 + 0x78) = *(arg2 + 0x78)
return arg1
