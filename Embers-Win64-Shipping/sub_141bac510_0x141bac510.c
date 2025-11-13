// 函数: sub_141bac510
// 地址: 0x141bac510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0xc8)
zmm0[0] = zmm0[0] * 0.5f
*arg2 = _mm_shuffle_ps(zmm0, zmm0, 0)
return arg2
