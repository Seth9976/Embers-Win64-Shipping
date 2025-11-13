// 函数: sub_1417c7990
// 地址: 0x1417c7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg3
float zmm4 = *(arg1 + 0xc)
int128_t zmm6 = *(arg1 + 4)
int128_t zmm7 = *arg1
int128_t zmm8 = arg3[1]
int128_t zmm9 = *(arg1 + 8)
int128_t zmm10 = arg3[2]
int128_t zmm11 = arg3[3]
float zmm3 = zmm6.d f* zmm11.d + zmm8.d * zmm4
*arg2 = zmm7.d f* zmm11.d + zmm5 * zmm4 + zmm6.d f* zmm10.d - zmm9.d f* zmm8.d
float zmm2 = zmm9.d f* zmm11.d
zmm11.d = zmm11.d f* zmm4
zmm3 = zmm3 + zmm9.d * zmm5
zmm9.d = zmm9.d f* zmm10.d
float zmm1 = zmm8.d f* zmm7.d
zmm3 = zmm3 - zmm10.d f* zmm7.d
zmm8.d = zmm8.d f* zmm6.d
zmm7.d = zmm7.d f* zmm5
zmm11.d = zmm11.d f- zmm7.d
arg2[1] = zmm3
zmm11.d = zmm11.d f- zmm8.d
zmm11.d = zmm11.d f- zmm9.d
arg2[3] = zmm11.d
arg2[2] = zmm2 + zmm10.d * zmm4 + zmm1 - zmm6.d * zmm5
return arg2
