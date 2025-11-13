// 函数: sub_1417a9150
// 地址: 0x1417a9150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg1[0xa] * 0.5f
float zmm4 = arg1[0xb] * 0.5f
float zmm2 = arg1[9] * 0.5f
float zmm1 = arg1[4] - zmm5
float zmm3 = arg1[5] - zmm4
zmm5 = zmm5 + arg1[1]
zmm4 = zmm4 + arg1[2]
float zmm0 = arg1[3] - zmm2
int128_t zmm6 = *arg3

if (not(zmm6.d f> zmm0))
    zmm0 = _mm_max_ss(zmm2 + *arg1, zmm6.d)

*arg2 = zmm0
zmm2 = *(arg3 + 4)

if (not(zmm2 > zmm1))
    zmm1 = _mm_max_ss(zmm2, zmm5)

arg2[1] = zmm1
zmm0 = *(arg3 + 8)

if (zmm0 <= zmm3)
    arg2[2] = _mm_max_ss(zmm0, zmm4)
    return arg2

arg2[2] = zmm3
return arg2
