// 函数: sub_142622e50
// 地址: 0x142622e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i

if (*(arg1 + 0x16) == *(arg2 + 0x16))
    int64_t r8_1 = sx.q(arg1[1].d)
    i = 0
    int32_t r10_1 = 0
    
    if (r8_1.d s> 0 && r8_1.d u>= 8)
        int32_t zmm4[0x4] = zx.o(0)
        int64_t rbx_1 = *arg1
        int32_t zmm2[0x4] = zx.o(0)
        uint128_t zmm3 = zx.o(sx.d(*(arg2 + 0x14)))
        zmm3 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm3, zmm3.q), 0)
        int32_t rdx_1 = r8_1.d & 0x80000007
        
        if (rdx_1 s< 0)
            rdx_1 = ((rdx_1 - 1) | 0xfffffff8) + 1
        
        int32_t zmm5[0x4] = data_142d3f5b0
        zmm3 = _mm_unpacklo_epi16(zmm3, 0)
        
        do
            int32_t zmm1[0x4] = *(rbx_1 + (i << 2))
            r10_1 += 8
            int32_t temp0_4[0x4] = _mm_add_epi32(zmm5, zmm4)
            int32_t temp0_5[0x4] = _mm_cmpeq_epi32(zmm1, zmm3)
            zmm4 = (temp0_4 & temp0_5) | (temp0_5 & not.o(zmm4))
            int32_t temp0_6[0x4] = _mm_add_epi32(zmm5, zmm2)
            zmm1 = *(rbx_1 + (i << 2) + 0x10)
            i += 8
            int32_t temp0_7[0x4] = _mm_cmpeq_epi32(zmm1, zmm3)
            zmm2 = (temp0_6 & temp0_7) | (temp0_7 & not.o(zmm2))
        while (i s< sx.q(r8_1.d - rdx_1))
        
        int32_t temp0_8[0x4] = _mm_add_epi32(zmm2, zmm4)
        int32_t temp0_10[0x4] = _mm_add_epi32(temp0_8, _mm_bsrli_si128(temp0_8, 8))
        i = zx.q(_mm_add_epi32(temp0_10, _mm_bsrli_si128(temp0_10, 4))[0])
    
    int64_t rcx_3 = sx.q(r10_1)
    
    while (rcx_3 s< r8_1)
        int32_t i_1 = (i + 1).d
        
        if (*(*arg1 + (rcx_3 << 2)) != zx.d(*(arg2 + 0x14)))
            i_1 = i.d
        
        rcx_3 += 1
        i = zx.q(i_1)
    
    if (i.d s<= 1)
        i.b = 1
        return i

i.b = 0
return i
