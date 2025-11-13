// 函数: sub_141baa140
// 地址: 0x141baa140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg2[1]
float zmm3 = *arg2
float zmm0 = zmm3 * arg2[7]
zmm3 = zmm3 * arg2[8] + zmm2 * arg2[0xa]
*arg1 = zmm2 * arg2[9] + zmm0
arg1[1] = zmm3
return arg1
