// 函数: sub_1427b2260
// 地址: 0x1427b2260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg2
float zmm5 = arg4[1]
float zmm2 = *arg4
int128_t zmm6 = arg2[1]
int128_t zmm7 = arg4[2]
int128_t zmm8 = arg2[2]
float zmm4 = (zmm6.d - arg3[1]) * zmm5 + (zmm3 - *arg3) * zmm2 + (zmm8.d - arg3[2]) f* zmm7.d
zmm7.d = zmm7.d f* zmm4
zmm8.d = zmm8.d f- zmm7.d
zmm6.d = zmm6.d f- zmm5 * zmm4
arg1[2] = zmm8.d
arg1[1] = zmm6.d
*arg1 = zmm3 - zmm2 * zmm4
return arg1
