// 函数: sub_1417cbc40
// 地址: 0x1417cbc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
float zmm3[0x4] = arg2[1].d
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 0x14), 0)
int128_t var_18 = zmm0
*arg1 = zmm0
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, (*(arg2 + 0x18)).q)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float zmm2[0x4] = data_14399f66c
arg1[1] = temp0_2
arg1[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), _mm_unpacklo_ps(zmm2, 0)[0].q)
return arg1
