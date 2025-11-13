// 函数: sub_141f41700
// 地址: 0x141f41700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1e0)
*arg2 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
arg2[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
arg2[1] = temp0[0]
return arg2
