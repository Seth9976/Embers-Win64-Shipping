// 函数: sub_140dd5a90
// 地址: 0x140dd5a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg2 + 8)
float zmm0 = zmm5 f* arg3[1]
int128_t zmm6 = *(arg2 + 0xc)
zmm5 = zmm5 f* arg3[3]
float zmm7[0x4] = *arg2
int128_t zmm9 = *(arg2 + 4)
int128_t zmm8 = zmm9
zmm9.d = zmm9.d f* arg3[2]
zmm7[0] = zmm7[0] f* *arg3
zmm8.d = zmm8.d f* *arg3
zmm7[0] = zmm7[0] f* arg3[2]
zmm7[0] = zmm7[0] + zmm0
zmm0 = zmm6.d
zmm6.d = zmm6.d f* arg3[3]
zmm0 = zmm0 f* arg3[1]
zmm7[0] = zmm7[0] + zmm5
zmm7[0] = zmm7[0] f+ arg2[1].d
zmm9.d = zmm9.d f+ zmm6.d
zmm8.d = zmm8.d f+ zmm0
zmm7[0] = zmm7[0] f+ arg2[1].d
zmm9.d = zmm9.d f+ *(arg2 + 0x14)
zmm8.d = zmm8.d f+ *(arg2 + 0x14)
float temp0 = _mm_min_ss(zmm7[0], zmm7[0])
float temp0_1[0x4] = _mm_max_ss(zmm7[0], zmm7[0])
int128_t zmm1 = zmm9

if (not(zmm8.d f<= zmm9.d))
    zmm9 = zmm8
    zmm8 = zmm1

arg1[1] = zmm8.d
arg1[2] = temp0_1[0]
arg1[3] = zmm9.d
*arg1 = temp0
return arg1
