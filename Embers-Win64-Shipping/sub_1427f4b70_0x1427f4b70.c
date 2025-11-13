// 函数: sub_1427f4b70
// 地址: 0x1427f4b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *arg2
int128_t zmm1 = *(arg2 + 0xc)
int128_t zmm4 = *(arg1 + 4)
int128_t zmm3 = *(arg1 + 8)
float zmm0 = *(arg2 + 0x18)
int128_t zmm5 = zmm3
int128_t zmm6 = *arg1
int128_t zmm8
zmm8.d = zmm3.d f* *(arg2 + 0x1c)
zmm3.d = zmm3.d f* arg2[2].d
int128_t zmm9
zmm9.d = zmm4.d f* arg2[1].d
int128_t zmm10
zmm10.d = zmm2.d f* zmm6.d
int128_t zmm11
zmm11.d = zmm6.d f* *(arg2 + 4)
zmm6.d = zmm6.d f* *(arg2 + 8)
zmm2.d = zmm2.d f* zmm10.d
zmm5.d = zmm5.d f* zmm0
int128_t zmm7
zmm7.d = zmm1.d f* zmm4.d
zmm4.d = zmm4.d f* *(arg2 + 0x14)
zmm1.d = zmm1.d f* zmm7.d
zmm1.d = zmm1.d f+ zmm2.d
zmm1.d = zmm1.d f+ zmm0 f* zmm5.d
*arg3 = zmm1.d
zmm2.d = zmm11.d f* *(arg2 + 4)
zmm1.d = zmm8.d f* *(arg2 + 0x1c)
zmm2.d = zmm2.d f+ zmm9.d f* arg2[1].d
zmm2.d = zmm2.d f+ zmm1.d
arg3[4] = zmm2.d
zmm6.d = zmm6.d f* *(arg2 + 8)
zmm4.d = zmm4.d f* *(arg2 + 0x14)
zmm3.d = zmm3.d f* arg2[2].d
zmm6.d = zmm6.d f+ zmm4.d
zmm6.d = zmm6.d f+ zmm3.d
arg3[8] = zmm6.d
zmm2.d = zmm10.d f* *(arg2 + 4)
zmm1.d = zmm5.d f* *(arg2 + 0x1c)
zmm2.d = zmm2.d f+ zmm7.d f* arg2[1].d
zmm2.d = zmm2.d f+ zmm1.d
arg3[1] = zmm2.d
arg3[3] = zmm2.d
zmm10.d = zmm10.d f* *(arg2 + 8)
zmm7.d = zmm7.d f* *(arg2 + 0x14)
zmm5.d = zmm5.d f* arg2[2].d
zmm10.d = zmm10.d f+ zmm7.d
zmm10.d = zmm10.d f+ zmm5.d
arg3[2] = zmm10.d
arg3[6] = zmm10.d
zmm11.d = zmm11.d f* *(arg2 + 8)
zmm9.d = zmm9.d f* *(arg2 + 0x14)
zmm8.d = zmm8.d f* arg2[2].d
zmm11.d = zmm11.d f+ zmm9.d
zmm11.d = zmm11.d f+ zmm8.d
arg3[5] = zmm11.d
arg3[7] = zmm11.d
