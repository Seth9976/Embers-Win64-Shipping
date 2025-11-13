// 函数: sub_14242cfd0
// 地址: 0x14242cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3 * *arg2 + *arg1
arg1[1] = arg3 * arg2[1] + arg1[1]
arg1[2] = arg3 * arg2[2] + arg1[2]
float result = arg3 * arg2[3] + arg1[3]
float zmm1 = arg2[4] * arg3 + arg1[4]
arg3 = arg2[5] * arg3 + arg1[5]
arg1[3] = result
arg1[4] = zmm1
arg1[5] = arg3
return result
