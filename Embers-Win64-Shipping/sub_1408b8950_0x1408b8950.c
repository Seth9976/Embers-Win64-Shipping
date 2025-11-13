// 函数: sub_1408b8950
// 地址: 0x1408b8950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg3 + 0xc)
int128_t zmm8
zmm8.d = zmm7.d f* arg2[5]
int128_t zmm9 = *arg3
float zmm3 = zmm9.d f* arg2[2]
int128_t zmm10
zmm10.d = zmm9.d f* arg2[4]
zmm9.d = zmm9.d f* *arg2
int128_t zmm11 = *(arg3 + 4)
int128_t zmm12 = *(arg3 + 8)
float zmm4 = zmm11.d f* *arg2
zmm10.d = zmm10.d f+ zmm12.d f* arg2[5]
float zmm0 = zmm11.d f* arg2[4]
zmm11.d = zmm11.d f* arg2[2]
zmm10.d = zmm10.d f+ arg3[1].d
zmm8.d = zmm8.d f+ zmm0
zmm0 = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f* arg2[3]
zmm8.d = zmm8.d f+ *(arg3 + 0x14)
zmm4 = zmm4 + zmm0
zmm0 = zmm12.d
zmm12.d = zmm12.d f* arg2[1]
zmm11.d = zmm11.d f+ zmm7.d
zmm9.d = zmm9.d f+ zmm12.d
zmm3 = zmm3 + zmm0 f* arg2[3]
*arg1 = zmm9.d
arg1[1] = zmm4
arg1[2] = zmm3
arg1[3] = zmm11.d
arg1[4] = zmm10.d
arg1[5] = zmm8.d
return arg1
