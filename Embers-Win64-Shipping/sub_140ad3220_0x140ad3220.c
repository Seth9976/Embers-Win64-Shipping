// 函数: sub_140ad3220
// 地址: 0x140ad3220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 4)
int128_t zmm3 = *arg1
float zmm5 = *(arg1 + 8)
int128_t zmm6
zmm6.d = zmm3.d f* 0.300000012f
int128_t zmm7 = arg3
arg3 = *(arg1 + 0xc)
zmm6.d = zmm6.d f+ zmm4 * 0.589999974f
zmm6.d = zmm6.d f+ zmm5 * 0.109999999f
float zmm1 = zmm6.d
float zmm0 = zmm6.d f- zmm3.d
zmm6.d = zmm6.d f- zmm5
zmm6.d = zmm6.d f* zmm7.d
zmm6.d = zmm6.d f+ zmm5
*arg2 = zmm0 f* zmm7.d f+ zmm3.d
arg2[1] = (zmm1 - zmm4) f* zmm7.d + zmm4
arg2[2] = zmm6.d
arg3.d = arg3.d f- arg3.d f* zmm7.d
arg2[3] = arg3.d
return arg2
