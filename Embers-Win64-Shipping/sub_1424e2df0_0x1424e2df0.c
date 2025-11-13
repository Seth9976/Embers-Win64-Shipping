// 函数: sub_1424e2df0
// 地址: 0x1424e2df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = arg1[4]
float zmm2 = arg1[8]
float zmm4 = arg1[9]
float zmm3 = arg1[0xa]
float zmm1 = arg1[6]
float zmm5 = *arg1
int128_t zmm6 = arg1[2]
int128_t zmm7 = arg1[1]
float zmm8[0x4] = arg1[5]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7.d = zmm7.d f* zmm7.d
zmm8[0] = zmm8[0] + zmm0 * zmm0
zmm6.d = zmm6.d f* zmm6.d
zmm8[0] = zmm8[0] + zmm1 * zmm1
zmm7.d = zmm7.d f+ zmm5 * zmm5
zmm7.d = zmm7.d f+ zmm6.d
return _mm_sqrt_ss(0, 
    _mm_max_ss(_mm_max_ss(zmm8[0], zmm4 * zmm4 + zmm2 * zmm2 + zmm3 * zmm3)[0], zmm7.d)[0])
