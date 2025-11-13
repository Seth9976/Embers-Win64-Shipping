// 函数: sub_142b924a0
// 地址: 0x142b924a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t r8_1 = sx.q(*(arg1 + 0x60))
int32_t rdx_1 = sx.d(*(arg1 + 0x1a))
*(arg1 + 0x1a) = *(arg1 + 0x62) + rdx_1.w
*(arg1 + 0x18) += *(arg1 + 0x60)
int32_t i_2 = 0
*(arg1 + 0x50) += *(arg1 + 0x98)

if (r8_1.d s> 0 && r8_1.d u>= 0x10)
    int64_t r10_1 = *(arg1 + 0x78)
    
    if (r10_1 u> arg1 + 0x78 || r10_1 + (sx.q((r8_1 - 1).d) << 1) u< arg1 + 0x78)
        uint128_t zmm1 = zx.o(rdx_1)
        zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
        int32_t rdx_4 = r8_1.d & 0x8000000f
        
        if (rdx_4 s< 0)
            rdx_4 = ((rdx_4 - 1) | 0xfffffff0) + 1
        
        int64_t i = 0
        
        do
            i_2 += 0x10
            *(r10_1 + (i << 1)) = _mm_add_epi16(*(r10_1 + (i << 1)), zmm1)
            *(r10_1 + (i << 1) + 0x10) = _mm_add_epi16(*(r10_1 + (i << 1) + 0x10), zmm1)
            i += 0x10
        while (i s< sx.q(r8_1.d - rdx_4))

for (int64_t i_1 = sx.q(i_2); i_1 s< r8_1; i_1 += 1)
    int64_t rax_8 = *(arg1 + 0x78)
    *(rax_8 + (i_1 << 1)) += rdx_1.w

*(arg1 + 0x60) = 0
*(arg1 + 0x98) = 0
*(arg1 + 0x68) = *(arg1 + 0x20) + (sx.q(*(arg1 + 0x1a)) << 3)
*(arg1 + 0x70) = sx.q(*(arg1 + 0x1a)) + *(arg1 + 0x28)
*(arg1 + 0x78) = *(arg1 + 0x30) + (sx.q(*(arg1 + 0x18)) << 1)

if (*(arg1 + 0x14) != 0)
    int64_t rax_14 = *(arg1 + 0x48)
    *(arg1 + 0x88) = *(arg1 + 0x40) + (sx.q(*(arg1 + 0x1a)) << 3)
    *(arg1 + 0x90) = rax_14 + (sx.q(*(arg1 + 0x1a)) << 3)

*(arg1 + 0xa0) = (zx.q(*(arg1 + 0x50)) << 5) + *(arg1 + 0x58)
