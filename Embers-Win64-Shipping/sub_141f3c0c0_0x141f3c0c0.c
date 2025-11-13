// 函数: sub_141f3c0c0
// 地址: 0x141f3c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1e0)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
temp0[0] = temp0[0] * temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0[0] = temp0[0] + temp0_1[0]
float result[0x4] = _mm_sqrt_ss(temp0[0], temp0[0])
result[0] = result[0] f* *(arg1 + 0x268)
return result
