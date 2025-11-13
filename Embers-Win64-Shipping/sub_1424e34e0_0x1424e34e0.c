// 函数: sub_1424e34e0
// 地址: 0x1424e34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg1[8]
float zmm5 = arg1[2]
float zmm4 = *arg1
int128_t zmm6 = arg1[0xa]
int128_t zmm7 = arg1[1]
int128_t zmm8 = arg1[9]
int128_t zmm9 = arg1[4]
int128_t zmm10 = arg1[6]
arg2[3] = 0
arg2[7] = 0
int128_t zmm11 = arg1[5]
*(arg2 + 0x2c) = 0
*(arg2 + 0x34) = 0
arg2[0xf] = 0x3f800000
*arg2 = zmm11.d f* zmm6.d - zmm10.d f* zmm8.d
arg2[1] = zmm3 f* zmm10.d - zmm9.d f* zmm6.d
arg2[2] = zmm9.d f* zmm8.d - zmm3 f* zmm11.d
arg2[4] = zmm5 f* zmm8.d - zmm7.d f* zmm6.d
arg2[5] = zmm4 f* zmm6.d - zmm5 * zmm3
float zmm2 = zmm7.d
float zmm1 = zmm7.d * zmm3 - zmm4 f* zmm8.d
zmm7.d = zmm7.d f* zmm9.d
arg2[6] = zmm1
arg2[8] = zmm2 f* zmm10.d - zmm5 f* zmm11.d
arg2[9] = zmm5 f* zmm9.d - zmm4 f* zmm10.d
arg2[0xa] = zmm4 f* zmm11.d f- zmm7.d
return arg2
