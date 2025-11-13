// 函数: sub_14275a250
// 地址: 0x14275a250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r10 = 0
uint64_t r8_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r11 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint64_t r9_1 = zx.q(zx.d(rax[1]) * *(arg1 + 0x80))
float (* r8_2)[0x4] = r8_1 + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[2]
uint32_t rax_1 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_2 = rax_1
int128_t* r9_2 = r9_1 + *(arg1 + 0x70)
int32_t rdx = *r11

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx_2 -= rdx
        rax_2 += 1
        rdx = r11[rax_2]
        r10 += 1
    while (rcx_2 s>= rdx)

float zmm3[0x4] = *(sx.q(rcx_2) + *(*(arg1 + 0x18) + (sx.q(r10) << 3)))
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint64_t result_1 = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm0[0x4] = *r8_2
        result = result_1
        float zmm2[0x4] = *r9_2
        r8_2 = &r8_2[1]
        r9_2 = &r9_2[1]
        result_1 += 0x10
        *result =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_143f87770, temp0), zmm0), _mm_mul_ps(temp0, zmm2))
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
