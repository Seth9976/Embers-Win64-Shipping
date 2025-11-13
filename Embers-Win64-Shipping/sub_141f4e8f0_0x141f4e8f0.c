// 函数: sub_141f4e8f0
// 地址: 0x141f4e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x1f0)

if (rdx == 0)
    return 

float zmm3[0x4] = *(arg1 + 0x1e0)
float zmm4[0x4] = *(arg1 + 0x210)
int64_t zmm2 = *(arg1 + 0x214)
float zmm1 = *(arg1 + 0x218)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm4[0] = zmm4[0] / zmm3[0]
zmm2.d = zmm2.d f/ temp0_1[0]
zmm1 = zmm1 / _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
*(rdx + 0x11c) = (_mm_unpacklo_ps(zmm4, zmm2)).q
*(rdx + 0x124) = zmm1
