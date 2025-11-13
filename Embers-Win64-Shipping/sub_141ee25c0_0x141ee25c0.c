// 函数: sub_141ee25c0
// 地址: 0x141ee25c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg1 + 0x1e0)
*arg2 = 3
float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm3, zmm3, 0x55)[0], zmm3[0])
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_2[0] = temp0_2[0] f* *(arg1 + 0x420)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x424)
temp0_2[0] = temp0_2[0] f+ arg3
temp0_1[0] = temp0_1[0] f+ arg3
float temp0_3[0x4] = _mm_max_ss(temp0_2[0], 0)
float temp0_4[0x4] = _mm_max_ss(temp0_1[0], 0)
arg2[2] = temp0_3[0]
arg2[1] = temp0_4[0]
return arg2
