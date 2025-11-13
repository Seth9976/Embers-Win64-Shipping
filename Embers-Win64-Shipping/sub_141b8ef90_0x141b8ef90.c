// 函数: sub_141b8ef90
// 地址: 0x141b8ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg2 + 0x28)
int128_t zmm6 = *(arg2 + 0x24)
int128_t zmm7 = *(arg2 + 0x20)
int128_t zmm8 = *(arg2 + 0x1c)
int128_t zmm1
zmm1.d = zmm8.d f* zmm5
zmm1.d = zmm1.d f- zmm7.d f* zmm6.d
int128_t zmm2
zmm2.d = 1f f/ zmm1.d
zmm6.d = zmm6.d f* zmm2.d
zmm1 = *(arg2 + 0x30) ^ 0x80000000
zmm8.d = zmm8.d f* zmm2.d
zmm6 ^= 0x80000000
zmm7.d = zmm7.d f* zmm2.d
float zmm3 = zmm6.d
zmm5 = zmm5 f* zmm2.d
zmm6.d = zmm6.d f* arg3:4.d
float zmm4 = zmm8.d
zmm8.d = zmm8.d f* arg3:4.d
zmm7 ^= 0x80000000
zmm2 = *(arg2 + 0x2c) ^ 0x80000000
zmm6.d = zmm6.d f+ zmm5 f* arg3.d
float zmm0 = zmm7.d
zmm7.d = zmm7.d f* arg3.d
zmm8.d = zmm8.d f+ zmm7.d
zmm6.d = zmm6.d f+ zmm3 f* zmm1.d + zmm5 f* zmm2.d
*arg1 = zmm6.d
zmm8.d = zmm8.d f+ zmm4 f* zmm1.d + zmm0 f* zmm2.d
arg1[1] = zmm8.d
return arg1
