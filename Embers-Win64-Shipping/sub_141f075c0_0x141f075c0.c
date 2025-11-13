// 函数: sub_141f075c0
// 地址: 0x141f075c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1d0)
float zmm3 = *arg2 - zmm1[0]
float zmm2 = arg2[2]
float zmm4 = arg2[1] f- _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float zmm0[0x4] = *(arg1 + 0x328)
zmm2 = zmm2 - temp0_1[0]
zmm0[0] = zmm0[0] f+ arg2[6]
zmm0[0] = zmm0[0] * zmm0[0]
int64_t result
result.b = zmm4 * zmm4 + zmm3 * zmm3 + zmm2 * zmm2 <= zmm0[0]
return result
