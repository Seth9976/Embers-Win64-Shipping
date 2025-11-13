// 函数: sub_141f3bb60
// 地址: 0x141f3bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x1d0)
float var_20 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg3[1].d = var_20
float zmm1[0x4] = *(arg1 + 0x1c0)
uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1, 4))
float var_18[0x4] = zmm1

if (temp0_4 != 0)
    *(arg1 + 0x180) = zmm1
    void var_28
    int32_t* rax_2 = sub_140adf5d0(&var_18, &var_28)
    *(arg1 + 0x190) = *rax_2
    *(arg1 + 0x198) = rax_2[2]

*(arg3 + 0xc) = *(arg1 + 0x190)
*(arg3 + 0x14) = *(arg1 + 0x198)
arg3[3].d = *(arg1 + 0x28c)
void* rax_6 = *(arg1 + 0x298)

if (rax_6 == 0)
    zmm1 = 0x3f800000
else
    float zmm0[0x4] = zx.o(*(rax_6 + 0xc4))
    zmm1 = _mm_cvtepi32_ps(zx.o(*(rax_6 + 0xc0)))
    float temp0_6[0x4] = _mm_cvtepi32_ps(zmm0)
    zmm1[0] = zmm1[0] / temp0_6[0]

arg3[6].d &= 0xfffffffe
*(arg3 + 0x2c) = zmm1[0]
*(arg3 + 0x34) = *(arg1 + 0x288)
int32_t result = *(arg1 + 0x290)
arg3[4].d = result
return result
