// 函数: sub_140626b90
// 地址: 0x140626b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *(arg2 + 0xc)
float zmm4 = zmm2.d
int128_t zmm6 = zmm2
int128_t zmm7 = *(arg2 + 8)
float zmm0 = zmm7.d f+ zmm7.d
int128_t zmm10 = *(arg2 + 4)
int128_t zmm11 = *arg2
float zmm1 = zmm10.d f+ zmm10.d
zmm7.d = zmm7.d f* zmm0
zmm2.d = zmm2.d f* zmm0
float zmm3 = zmm11.d f+ zmm11.d
zmm4 = zmm4 * zmm1
float zmm5 = zmm11.d * zmm1
int128_t zmm9 = zmm11
zmm11.d = zmm11.d f* zmm0
int128_t zmm8 = zmm10
zmm10.d = zmm10.d f* zmm0
zmm8.d = zmm8.d f* zmm1
zmm9.d = zmm9.d f* zmm3
zmm1 = zmm7.d f+ zmm8.d
zmm6.d = zmm6.d f* zmm3
zmm7.d = zmm7.d f+ zmm9.d
zmm8.d = zmm8.d f+ zmm9.d
zmm0 = 1f - zmm1
zmm1 = zmm5 f- zmm2.d
zmm2.d = zmm2.d f+ zmm5
*arg1 = zmm0
zmm0 = zmm4 f+ zmm11.d
arg1[4] = zmm1
zmm11.d = zmm11.d f- zmm4
zmm1 = zmm10.d f- zmm6.d
zmm6.d = zmm6.d f+ zmm10.d
arg1[8] = zmm0
arg1[0xc] = data_143dbb1f8
arg1[1] = zmm2.d
arg1[9] = zmm1
arg1[5] = 1f f- zmm7.d
zmm0 = data_143dbb1fc
arg1[2] = zmm11.d
arg1[6] = zmm6.d
arg1[0xd] = zmm0
arg1[0xa] = 1f f- zmm8.d
zmm0 = data_143dbb200
arg1[3] = 0
arg1[7] = 0
arg1[0xb] = 0
arg1[0xe] = zmm0
arg1[0xf] = 0x3f800000
return arg1
