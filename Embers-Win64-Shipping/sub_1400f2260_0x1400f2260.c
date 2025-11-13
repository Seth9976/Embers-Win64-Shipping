// 函数: sub_1400f2260
// 地址: 0x1400f2260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
uint64_t i_1 = zx.q(arg4)
int64_t rax = 0x20
uint64_t i

do
    float temp0_2[0x4] = _mm_mul_ps(*(arg1 + rax - 0x20), temp0_1)
    float temp0_3[0x4] = _mm_mul_ps(*(arg1 + rax - 0x10), temp0_1)
    float temp0_4[0x4] = _mm_mul_ps(*(arg1 + rax), temp0_1)
    *(arg2 + rax - 0x20) = temp0_2
    *(arg2 + rax - 0x10) = temp0_3
    *(arg2 + rax) = temp0_4
    rax += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
