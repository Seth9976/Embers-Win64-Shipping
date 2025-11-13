// 函数: sub_141ed87e0
// 地址: 0x141ed87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg1 + 0x40c)
int32_t var_30 = 0x42a00000
zmm3[0] = zmm3[0] * 120f
zmm3[0] = zmm3[0] * zmm3[0]
int32_t var_18 = 0x42a00000
int32_t var_30_1 = 0
zmm3[0] = zmm3[0] * 14400f
int32_t var_24 = 0
int64_t var_20 = (_mm_unpacklo_ps(zmm3, 0x42a00000)).q
zmm3[0] = zmm3[0] + 12800f
int64_t var_2c = (_mm_unpacklo_ps(zmm3, 0)).q
float var_14 = _mm_sqrt_ss(0, zmm3[0])[0]
sub_140ae2e90(&var_2c, arg2, arg3)
return arg2
