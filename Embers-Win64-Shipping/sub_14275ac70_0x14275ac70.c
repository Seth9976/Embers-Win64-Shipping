// 函数: sub_14275ac70
// 地址: 0x14275ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
int32_t r11 = 0
uint64_t rdx_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
float (* rdx_2)[0x4] = rdx_1 + *(arg1 + 0x70)
uint32_t rcx = rax_1
int32_t r8_1 = *r10

if (rax_1 s>= r8_1)
    int64_t rax_2 = 0
    
    do
        rcx -= r8_1
        rax_2 += 1
        r8_1 = r10[rax_2]
        r11 += 1
    while (rcx s>= r8_1)

int64_t rsi = *(arg1 + 0x18)
float zmm2[0x4] = *(sx.q(rcx) + *(rsi + (sx.q(r11) << 3)))
uint32_t rax_5 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_2 = rax_5
int32_t r8_2 = *r10
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)

if (rax_5 s>= r8_2)
    int64_t rax_6 = 0
    
    do
        rcx_2 -= r8_2
        rax_6 += 1
        r8_2 = r10[rax_6]
        r9 += 1
    while (rcx_2 s>= r8_2)

float zmm1[0x4] = *(sx.q(rcx_2) + *(rsi + (sx.q(r9) << 3)))
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
uint64_t result_1 = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        float temp0_2[0x4] = _mm_mul_ps(*rdx_2, temp0)
        rdx_2 = &rdx_2[1]
        result_1 += 0x10
        *result = _mm_add_ps(temp0_2, temp0_1)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
