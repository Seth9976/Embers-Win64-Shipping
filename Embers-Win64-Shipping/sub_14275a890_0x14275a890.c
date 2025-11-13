// 函数: sub_14275a890
// 地址: 0x14275a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
int32_t* rdx = *(arg1 + 0x20)
int32_t r10 = 0
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *rdx

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = rdx[rcx]
        r10 += 1
    while (r8 s>= rax_1)

int64_t rdi = *(arg1 + 0x18)
int32_t r10_1 = 0
float zmm3[0x4] = *(sx.q(r8) + *(rdi + (sx.q(r10) << 3)))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_2 = rax_4
int32_t r8_1 = *rdx
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)

if (rax_4 s>= r8_1)
    int64_t rax_5 = 0
    
    do
        rcx_2 -= r8_1
        rax_5 += 1
        r8_1 = rdx[rax_5]
        r10_1 += 1
    while (rcx_2 s>= r8_1)

float zmm0[0x4] = *(sx.q(rcx_2) + *(rdi + (sx.q(r10_1) << 3)))
uint32_t rax_8 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_4 = rax_8
int32_t r8_2 = *rdx
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)

if (rax_8 s>= r8_2)
    int64_t rax_9 = 0
    
    do
        rcx_4 -= r8_2
        rax_9 += 1
        r8_2 = rdx[rax_9]
        r9 += 1
    while (rcx_4 s>= r8_2)

float zmm2[0x4] = *(sx.q(rcx_4) + *(rdi + (sx.q(r9) << 3)))
uint64_t rdx_2 = zx.q(*(arg1 + 0x80) * zx.d(rax[3]))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
uint64_t result_1 = rdx_2 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    float temp0_3[0x4] = _mm_mul_ps(temp0_2, temp0_1)
    uint64_t i
    
    do
        result = result_1
        result_1 += 0x10
        *result = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_143f87770, temp0_2), temp0), temp0_3)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
