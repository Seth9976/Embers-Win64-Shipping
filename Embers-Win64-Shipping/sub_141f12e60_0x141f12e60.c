// 函数: sub_141f12e60
// 地址: 0x141f12e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg1 + 0x1d0)
float zmm2[0x4] = *(arg1 + 0x328)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
arg2[3].b = 1
zmm2[0] = zmm2[0] + zmm3[0]
int64_t zmm4
zmm4.d = zmm2[0].q.d f+ temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm2[0] = zmm2[0] + temp0_1[0]
zmm3[0] = zmm3[0] - zmm2[0]
float var_14 = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
temp0_2[0] = temp0_2[0] - zmm2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_3[0] = temp0_3[0] - zmm2[0]
*arg2 = (_mm_unpacklo_ps(zmm3, temp0_2[0].q)).q
arg2[1].d = temp0_3[0]
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm2, zmm4)).q
*(arg2 + 0x14) = var_14
return arg2
