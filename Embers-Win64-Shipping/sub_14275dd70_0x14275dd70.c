// 函数: sub_14275dd70
// 地址: 0x14275dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_8 = *(arg1 + 0x10)
uint32_t result_3 = zx.d(*rax_8)
*(arg1 + 0x10) = &rax_8[1]
uint64_t result = zx.q(result_3)
uint128_t zmm0

if (result_3.b == 0)
    uint32_t r10_2 = zx.d(*(rax_8 + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax_8[3]
    uint64_t rcx_5 = zx.q(zx.d(*(rax_8 + 3)) * r8_2)
    *(arg1 + 0x10) = &rax_8[5]
    result = zx.q(*(arg1 + 0x44))
    uint64_t result_2 = rcx_5 + *(arg1 + 0x70)
    uint128_t* r10_4 = zx.q(r10_2 * r8_2) + *(arg1 + 0x70)
    
    if (result.d s> 0)
        uint64_t i_3 = zx.q(result.d)
        uint64_t i
        
        do
            zmm0 = *r10_4
            r10_4 = &r10_4[1]
            result = result_2
            result_2 += 0x10
            *result = _mm_cvtepi32_ps(zmm0)
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (result.d == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax_8 + 1))
    *(arg1 + 0x10) = &rax_8[3]
    int32_t r8_1 = 0
    int32_t rax_1 = *r9_1
    
    if (rcx_1 s>= rax_1)
        int64_t rdx = 0
        
        do
            rcx_1 -= rax_1
            rdx += 1
            rax_1 = r9_1[rdx]
            r8_1 += 1
        while (rcx_1 s>= rax_1)
    
    zmm0 = zx.o(*(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
    uint32_t rcx_3 = zx.d(*(rax_8 + 3))
    *(arg1 + 0x10) = &rax_8[5]
    uint64_t rax_6 = zx.q(rcx_3 * *(arg1 + 0x80))
    int32_t i_4 = *(arg1 + 0x44)
    zmm0 = _mm_shuffle_epi32(zmm0, 0)
    result = rax_6 + *(arg1 + 0x70)
    
    if (i_4 s> 0)
        zmm0 = _mm_cvtepi32_ps(zmm0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i_1
        
        do
            uint64_t result_1 = result
            result += 0x10
            *result_1 = zmm0
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
return result
