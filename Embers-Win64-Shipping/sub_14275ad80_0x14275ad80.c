// 函数: sub_14275ad80
// 地址: 0x14275ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int64_t r9_1 = *(arg1 + 0x70)
int32_t r8_1 = *(arg1 + 0x80)
float zmm3[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t r11 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_3 = zx.q(zx.d(rax[3]) * r8_1)
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
int128_t* r10_3 = zx.q(rax_4 * r8_1) + r9_1
float (* r11_2)[0x4] = zx.q(r11 * r8_1) + r9_1
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint64_t result_1 = rcx_3 + r9_1

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        float zmm2[0x4] = *r11_2
        float temp0_1[0x4] = _mm_mul_ps(temp0, *r10_3)
        r11_2 = &r11_2[1]
        r10_3 = &r10_3[1]
        result_1 += 0x10
        *result = _mm_add_ps(temp0_1, zmm2)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
