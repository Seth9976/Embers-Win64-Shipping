// 函数: sub_140f93c30
// 地址: 0x140f93c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *arg2
*arg1 = _mm_shuffle_ps(zmm0, zmm0, 0)
arg1[1][0].b = 1
*(arg1 + 0x18) = 0.0
arg1[2][0] = 0f
return arg1
