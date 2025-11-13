// 函数: sub_1417c8090
// 地址: 0x1417c8090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = data_1439b992c
float zmm4 = data_1439b9924
int128_t zmm7 = data_1439b9920
int128_t zmm8 = data_1439b9928
int128_t zmm9 = *arg2
int128_t zmm10 = *(arg2 + 4)
int128_t zmm11 = *(arg2 + 0xc)
float zmm3 = zmm11.d
int128_t zmm12 = *(arg2 + 8)
int128_t zmm6
zmm6.d = zmm11.d f* zmm7.d
float zmm2 = zmm11.d f* zmm8.d
zmm6.d = zmm6.d f+ zmm9.d * zmm5
zmm11.d = zmm11.d f* zmm5
zmm6.d = zmm6.d f+ zmm10.d f* zmm8.d
zmm6.d = zmm6.d f- zmm12.d * zmm4
*arg1 = zmm6.d
float zmm0 = zmm9.d f* zmm8.d
float zmm1 = zmm9.d
zmm9.d = zmm9.d f* zmm7.d
zmm3 = zmm3 * zmm4 + zmm10.d * zmm5 + zmm12.d f* zmm7.d - zmm0
zmm11.d = zmm11.d f- zmm9.d
zmm0 = zmm12.d * zmm5
zmm12.d = zmm12.d f* zmm8.d
zmm2 = zmm2 + zmm0
zmm0 = zmm10.d
arg1[1] = zmm3
zmm10.d = zmm10.d f* zmm4
zmm11.d = zmm11.d f- zmm10.d
zmm11.d = zmm11.d f- zmm12.d
arg1[2] = zmm2 + zmm1 * zmm4 - zmm0 f* zmm7.d
arg1[3] = zmm11.d
return arg1
