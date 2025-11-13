// 函数: sub_14037e600
// 地址: 0x14037e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = arg5
float zmm5[0x4] = arg6
int64_t result = sx.q(0xfffffffe - arg3)
float zmm6[0x4] = arg7
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float zmm7[0x4] = *(arg2 + (result << 2))
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)

if (arg4 - 3 s> 0)
    void* r10_3 = (result << 2) + 0x10 - arg1 + arg2
    void* rdx = arg2 - arg1
    uint64_t i_1 = zx.q(((arg4 - 4) u>> 2) + 1)
    uint64_t i
    
    do
        float zmm1[0x4] = *(r10_3 + arg1)
        arg1 += 0x10
        float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm1, 0x4e)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm7, temp0_3, 0x99)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, zmm1, 0x99)
        float temp0_6[0x4] = _mm_mul_ps(temp0_3, temp0)
        float temp0_7[0x4] = _mm_add_ps(temp0_5, temp0_4)
        float temp0_8[0x4] = _mm_add_ps(zmm1, zmm7)
        zmm7 = zmm1
        float temp0_11[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, temp0_1), _mm_mul_ps(temp0_8, temp0_2))
        *(arg1 - 0x10) = _mm_add_ps(_mm_add_ps(*(rdx + arg1 - 0x10), temp0_6), temp0_11)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
