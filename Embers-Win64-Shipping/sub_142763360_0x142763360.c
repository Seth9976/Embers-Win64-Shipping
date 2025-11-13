// 函数: sub_142763360
// 地址: 0x142763360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_4 = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax_4)
*(arg1 + 0x10) = &rax_4[1]
int32_t rax = *r9

if (r8 s>= rax)
    int64_t rcx = 0
    
    do
        r8 -= rax
        rcx += 1
        rax = r9[rcx]
        rdx += 1
    while (r8 s>= rax)

float zmm3[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rdx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax_4[1]))
*(arg1 + 0x10) = &rax_4[2]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint64_t result_1 = rdx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = data_143f87690
        result = result_1
        result_1 += 0x10
        *result = _mm_and_ps(data_143f87770 ^ zmm1, _mm_cmpeq_ps(zmm1, temp0, 2)) ^ zmm1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
