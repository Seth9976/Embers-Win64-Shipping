// 函数: sub_140d38610
// 地址: 0x140d38610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rcx = *(arg2 + 0x20)
int64_t zmm0 = *(rcx + 4)
int32_t zmm1 = *(rcx + 8)
float zmm2[0x4] = *(rcx + 0xc)
float zmm3[0x4] = *(rcx + 0x18)
float zmm6[0x4] = rcx[1].d
float zmm7[0x4] = rcx[2].d
float zmm8[0x4] = *rcx
float zmm4[0x4] = *(rcx + 0x14)
int64_t zmm5 = *(rcx + 0x24)
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
temp0[0] = zmm0.d
float zmm9[0x4] = *(rcx + 0x1c)
zmm0 = zmm3[0].q
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_unpacklo_ps(zmm6, zmm0)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_3[0] = zmm2[0]
*(arg2 + 0x20) = rcx + 0x28
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
arg3[1] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm4, 0)[0].q)
float temp0_9[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm5), _mm_unpacklo_ps(zmm7, 0)[0].q)
*arg3 = temp0_4
arg3[2] = temp0_9
return rcx + 0x28
