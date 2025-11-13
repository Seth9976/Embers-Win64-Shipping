// 函数: sub_14275a440
// 地址: 0x14275a440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t r11 = 0
float (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)
uint32_t rcx = rax_1
int32_t rdx = *r10

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx -= rdx
        rax_2 += 1
        rdx = r10[rax_2]
        r11 += 1
    while (rcx s>= rdx)

int64_t rsi = *(arg1 + 0x18)
float zmm0[0x4] = *(sx.q(rcx) + *(rsi + (sx.q(r11) << 3)))
uint32_t rax_5 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_2 = rax_5
int32_t rdx_1 = *r10
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)

if (rax_5 s>= rdx_1)
    int64_t rax_6 = 0
    
    do
        rcx_2 -= rdx_1
        rax_6 += 1
        rdx_1 = r10[rax_6]
        r8_1 += 1
    while (rcx_2 s>= rdx_1)

float zmm3[0x4] = *(sx.q(rcx_2) + *(rsi + (sx.q(r8_1) << 3)))
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
float (* result)[0x4] = zx.q(*(arg1 + 0x44))
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float (* result_1)[0x4] = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    float temp0_2[0x4] = _mm_mul_ps(temp0_1, temp0)
    uint64_t i
    
    do
        zmm0 = *r9_2
        result = result_1
        r9_2 = &r9_2[1]
        result_1 = &result_1[1]
        *result = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_143f87770, temp0_1), zmm0), temp0_2)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
