// 函数: sub_1400f22b0
// 地址: 0x1400f22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
uint64_t i_1 = zx.q(arg4)
int64_t rax = 0x20
uint64_t i

do
    float zmm0[0x4] = *(arg2 + rax - 0x20)
    float temp0_2[0x4] = _mm_mul_ps(*(arg1 + rax - 0x20), temp0_1)
    float temp0_3[0x4] = _mm_mul_ps(temp0_2, zmm0)
    uint32_t zmm4[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_3, temp0_3, 1), temp0_3)
    float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x39), zmm4)
    zmm4 = _mm_cmpeq_ps(zx.o(0), temp0_7, 2)
    float temp0_9[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_7, 6)
    float zmm3[0x4] = _mm_and_ps(_mm_sub_ps(zx.o(0), temp0_2), temp0_9)
    zmm4 = _mm_add_ps(_mm_or_ps(_mm_and_ps(zmm4, temp0_2), zmm3), zmm0)
    float temp0_16[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(*(arg1 + rax - 0x10), temp0_1), *(arg2 + rax - 0x10))
    float temp0_18[0x4] = __addps_xmmps_memps(_mm_mul_ps(*(arg1 + rax), temp0_1), *(arg2 + rax))
    *(arg2 + rax - 0x20) = zmm4
    *(arg2 + rax - 0x10) = temp0_16
    *(arg2 + rax) = temp0_18
    rax += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
