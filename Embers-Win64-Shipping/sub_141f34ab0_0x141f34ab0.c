// 函数: sub_141f34ab0
// 地址: 0x141f34ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg3 + 0x10)
arg2[3].d = 0
float var_10 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg2[1].d = var_10
int32_t rax_1 = data_143dbb200
*(arg2 + 0xc) = data_143dbb1f8.q
*(arg2 + 0x14) = rax_1
return arg2
