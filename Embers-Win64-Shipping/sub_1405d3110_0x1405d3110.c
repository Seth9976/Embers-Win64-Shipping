// 函数: sub_1405d3110
// 地址: 0x1405d3110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = arg2[4]
int128_t zmm7
zmm7.d = arg5.d f- arg2[7]
int128_t zmm8
zmm8.d = arg6.d f- arg2[8]
zmm7.d = zmm7.d f/ arg2[5]
zmm8.d = zmm8.d f/ (arg4 * arg2[6])
float zmm4 = zmm7.d f* zmm7.d
int128_t zmm6
zmm6.d = zmm8.d f* zmm8.d
arg4 = zmm6.d
zmm6.d = zmm6.d f+ zmm6.d
arg4 = arg4 + zmm4
zmm6.d = zmm6.d f+ arg4
float zmm1 = arg4 * arg4
zmm4 = (zmm4 + zmm4 + arg4) f* zmm2.d
zmm2.d = zmm2.d f+ zmm2.d
zmm2.d = zmm2.d f* zmm7.d
zmm2.d = zmm2.d f* zmm8.d
float zmm5 = zmm1 * arg2[1] + arg4 * *arg2 + zmm1 * arg4 * arg2[2]
zmm1 = arg2[3]
zmm6.d = zmm6.d f* zmm1
zmm5 = zmm5 + 1f
zmm2.d = zmm2.d f+ zmm6.d
zmm2.d = zmm2.d f+ zmm5 f* zmm8.d
arg1[1] = (zmm2 ^ data_142d3f780).d
*arg1 = zmm4 + (zmm1 + zmm1) f* zmm7.d f* zmm8.d + zmm5 f* zmm7.d
return arg1
