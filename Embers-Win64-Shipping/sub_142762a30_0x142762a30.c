// 函数: sub_142762a30
// 地址: 0x142762a30
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

float zmm2[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rdx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax_4[1]))
*(arg1 + 0x10) = &rax_4[2]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
uint64_t result_1 = rdx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    float temp0_2[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0))
    float temp0_3[0x4] = _mm_sub_ps(temp0, temp0_2)
    uint64_t i
    
    do
        result = result_1
        result_1 += 0x10
        *result = _mm_add_ps(
            _mm_cvtepi32_ps(_mm_cvttps_epi32(__mulps_xmmps_memps(temp0_3, data_143f877d0))), 
            temp0_2)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
