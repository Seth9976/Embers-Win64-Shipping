// 函数: sub_1420e4400
// 地址: 0x1420e4400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)
float zmm7[0x4] = *(rax + 0x1e0)
float zmm8[0x4] = *(rax + 0x1d0)
zmm7[0] = zmm7[0] * 0.5f
arg2[3].b = 1
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
temp0[0] = temp0[0] * 0.5f
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
zmm7[0] = zmm7[0] + zmm8[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm8[0] = zmm8[0] - zmm7[0]
temp0_3[0] = temp0_3[0] * 0.5f
int64_t zmm3
zmm3.d = temp0[0].q.d f+ temp0_2[0]
temp0_2[0] = temp0_2[0] - temp0[0]
temp0_3[0] = temp0_3[0] + temp0_1[0]
temp0_1[0] = temp0_1[0] - temp0_3[0]
float var_44 = temp0_3[0]
*arg2 = (_mm_unpacklo_ps(zmm8, temp0_2[0].q)).q
arg2[1].d = temp0_1[0]
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm7, zmm3)).q
*(arg2 + 0x14) = var_44
return arg2
