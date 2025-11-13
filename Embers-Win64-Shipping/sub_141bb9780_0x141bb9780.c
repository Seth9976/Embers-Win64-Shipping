// 函数: sub_141bb9780
// 地址: 0x141bb9780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg3:4.d
float zmm3 = arg3.d
float zmm0 = zmm3
zmm3 = zmm3 f* *(arg2 + 0x20) + zmm2 f* *(arg2 + 0x28) f+ *(arg2 + 0x30)
*arg1 = zmm2 f* *(arg2 + 0x24) + zmm0 f* *(arg2 + 0x1c) f+ *(arg2 + 0x2c)
arg1[1] = zmm3
return arg1
