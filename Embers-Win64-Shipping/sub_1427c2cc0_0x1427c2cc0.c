// 函数: sub_1427c2cc0
// 地址: 0x1427c2cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x20)
int32_t result = *(arg1 + 0x24)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
temp0[0] = result
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
temp0_2[0] = result
*(arg1 + 0x28) = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
return result
