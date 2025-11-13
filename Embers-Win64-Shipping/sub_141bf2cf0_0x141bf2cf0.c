// 函数: sub_141bf2cf0
// 地址: 0x141bf2cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg3:4.d
float zmm2 = arg3.d
float zmm0 = zmm2 f* *(arg2 + 0x1c)
zmm2 = zmm2 f* *(arg2 + 0x20) + zmm3 f* *(arg2 + 0x28)
*arg1 = zmm3 f* *(arg2 + 0x24) + zmm0
arg1[1] = zmm2
return arg1
