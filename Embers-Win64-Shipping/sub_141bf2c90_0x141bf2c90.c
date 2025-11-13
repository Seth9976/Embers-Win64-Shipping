// 函数: sub_141bf2c90
// 地址: 0x141bf2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 0x28)
int128_t zmm5 = *(arg1 + 0x20)
float zmm3 = 1f / (zmm4 f* *(arg1 + 0x1c) - zmm5.d f* *(arg1 + 0x24))
zmm5.d = zmm5.d f* zmm3
zmm5.d = zmm5.d f* arg2
zmm4 = zmm4 * zmm3 * arg2
zmm5 ^= data_142d3f780
zmm5.d = zmm5.d f* zmm5.d
zmm5.d = zmm5.d f+ zmm4 * zmm4
return _mm_sqrt_ss(0, zmm5.d)
