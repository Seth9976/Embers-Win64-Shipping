// 函数: sub_1427607d0
// 地址: 0x1427607d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r10 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int32_t i_2 = *(arg1 + 0x44)
float zmm9[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
void* result = &rax[2]
uint64_t rbx_1 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
float temp0[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
*(arg1 + 0x10) = result
void* result_1 = rbx_1 + *(arg1 + 0x70)

if (i_2 s> 0)
    float zmm8[0x4] = atanf(temp0[0])
    float zmm7[0x4] = atanf(_mm_shuffle_ps(temp0, temp0, 0x55)[0])
    float zmm6[0x4] = atanf(_mm_shuffle_ps(temp0, temp0, 0xaa)[0])
    float temp0_3[0x4] = _mm_unpacklo_ps(zmm7, atanf(temp0[0]))
    uint64_t i_1 = zx.q(i_2)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm6[0].q), temp0_3[0].q)
    uint64_t i
    
    do
        result = result_1
        result_1 += 0x10
        *result = temp0_5
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
