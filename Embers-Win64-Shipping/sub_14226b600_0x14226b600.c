// 函数: sub_14226b600
// 地址: 0x14226b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x510) & 2) == 0)
    int64_t rax
    rax.b = 0
    return rax

void* rax_1 = sub_140d3c6e0(arg1 + 0x51c)

if (rax_1 == 0)
    *arg2 = *(arg1 + 0x53c)
    arg2[1].d = *(arg1 + 0x544)
    int32_t rax_3
    rax_3.b = 1
    return rax_3

float zmm2[0x4] = *(rax_1 + 0x1d0)
zmm2[0] = zmm2[0] f+ *(arg1 + 0x53c)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0[0] = temp0[0] f+ *(arg1 + 0x540)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_1[0] = temp0_1[0] f+ *(arg1 + 0x544)
*arg2 = (_mm_unpacklo_ps(zmm2, temp0[0].q)).q
arg2[1].d = temp0_1[0]
float rax_2
rax_2.b = 1
return rax_2
