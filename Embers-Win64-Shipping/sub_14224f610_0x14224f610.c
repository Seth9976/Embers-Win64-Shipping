// 函数: sub_14224f610
// 地址: 0x14224f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_2 = *(arg1 + 0x10)
float zmm3[0x4] = data_14399f668
int64_t r8 = sx.q(rax_2[1].d)
void* rcx = *rax_2
int64_t r9 = r8 * 3
int64_t rax = *(rcx + 0x28)
int64_t zmm0 = *(rax + (r9 << 2) + 8)
float zmm4[0x4] = *(rax + (r9 << 2))
int128_t zmm5 = *((r8 << 4) + *(rcx + 0x68))
float temp0[0x4] = _mm_unpacklo_ps(*(rax + (r9 << 2) + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, zmm0)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float zmm2[0x4] = data_14399f66c
*arg2 = zmm5
float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0), temp0_3[0].q)
arg2[1] = temp0_2
arg2[2] = temp0_5
return arg2
