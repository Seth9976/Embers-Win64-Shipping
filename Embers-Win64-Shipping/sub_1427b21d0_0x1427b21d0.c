// 函数: sub_1427b21d0
// 地址: 0x1427b21d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg4[1]
float zmm2 = *arg4
int128_t zmm7 = arg4[2]
float zmm4 = (arg2[1] f- arg3[1]) * zmm5 + (*arg2 - *arg3) * zmm2 + (arg2[2] f- arg3[2]) f* zmm7.d
zmm7.d = zmm7.d f* zmm4
zmm7.d = zmm7.d f+ arg3[2]
zmm2 = zmm2 * zmm4 + *arg3
zmm5 = zmm5 * zmm4 + arg3[1]
arg1[2] = zmm7.d
*arg1 = zmm2
arg1[1] = zmm5
return arg1
