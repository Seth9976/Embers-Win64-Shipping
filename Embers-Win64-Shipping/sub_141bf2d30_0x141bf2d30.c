// 函数: sub_141bf2d30
// 地址: 0x141bf2d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg2 + 0x20)
float zmm4 = *(arg2 + 0x28)
float zmm3 = *(arg2 + 0x24)
int128_t zmm6 = *(arg2 + 0x1c)
float zmm2 = 1f / (zmm6.d * zmm4 - zmm5 * zmm3)
zmm6.d = zmm6.d f* zmm2
zmm6.d = zmm6.d f* arg3:4.d
zmm6.d = zmm6.d f- zmm5 * zmm2 f* arg3.d
arg1[1] = zmm6.d
*arg1 = zmm4 * zmm2 f* arg3.d - zmm3 * zmm2 f* arg3:4.d
return arg1
