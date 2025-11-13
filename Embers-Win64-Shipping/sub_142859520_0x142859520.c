// 函数: sub_142859520
// 地址: 0x142859520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

__chkstk(0x50)
int32_t rbp_1 = 0
int32_t rsi_1 = 0
void* rbx_1 = arg7 + 0x18
uint128_t zmm6 = zx.o(arg7)
zmm6 = _mm_unpacklo_epi64(zmm6, zmm6.q)

do
    int32_t* rax = (*(arg1 + 0xb0))(zx.q(rsi_1))
    
    if (rax != 0 && *rax != 0 && (rax[7] & arg3) == 0 && (rax[8] & arg4) == 0
            && (rax[9] & arg5) == 0 && (rax[0xa] & arg6) == 0)
        bool cond:0_1
        
        if ((*(*(arg1 + 0xc0) + 0x60) & 8) != 0)
            cond:0_1 = rax[0xd] == 0
        else
            cond:0_1 = rax[0xb] == 0
        
        if (not(cond:0_1))
            rbp_1 += 1
            *(rbx_1 - 0x18) = rax
            *(rbx_1 - 8) = 0
            *rbx_1 = 0
            *(rbx_1 - 0x10) = 0
            rbx_1 += 0x20
    
    rsi_1 += 1
while (rsi_1 s< arg2)

if (rbp_1 s<= 0)
    return 

*(arg7 + 0x18) = 0

if (rbp_1 s> 1)
    int32_t i = 1
    *(arg7 + 0x10) = arg7 + 0x20
    
    if (rbp_1 - 1 s> 1 && rbp_1 - 2 u>= 4 && data_143ccb970 s>= 2)
        int128_t zmm7 = data_142e11d00
        int32_t rax_3 = (rbp_1 - 2) & 0x80000003
        
        if (rax_3 s< 0)
            rax_3 = ((rax_3 - 1) | 0xfffffffc) + 1
        
        int64_t zmm4_1 = (data_142d3f5b0).q
        void* r8 = arg7 + 0x50
        uint128_t zmm5_1 = 5
        
        do
            int32_t rax_6 = i + 2
            int32_t zmm3[0x4] = _mm_shuffle_epi32(zx.o(i), 0)
            r8 += 0x80
            i += 4
            int32_t temp0_3[0x4] = _mm_add_epi32(zmm3, zx.o(zmm7.q))
            uint128_t zmm0 = zx.o(zmm4_1)
            int32_t temp0_4[0x4] = _mm_sub_epi32(temp0_3, zmm0)
            zmm0 = _mm_add_epi32(zmm0, temp0_3)
            zmm3 = _mm_shuffle_epi32(zx.o(rax_6), 0)
            uint64_t temp0_8[0x2] = _mm_sll_epi64(_mm_cvtepi32_epi64(temp0_4[0].q), zmm5_1)
            int32_t zmm1[0x4] = _mm_cvtepi32_epi64(zmm0.q)
            uint64_t zmm2[0x2] = _mm_add_epi64(temp0_8, zmm6)
            *(r8 - 0x98) = zmm2[0]
            int32_t temp0_11[0x4] = _mm_add_epi32(zmm3, zx.o(zmm7.q))
            zmm0 = zx.o(zmm4_1)
            *(r8 - 0x78) = _mm_bsrli_si128(zmm2, 8)[0]
            int32_t temp0_14[0x4] = _mm_add_epi64(_mm_sll_epi64(zmm1, zmm5_1), zmm6)
            *(r8 - 0xa0) = temp0_14[0].q
            *(r8 - 0x80) = _mm_bsrli_si128(temp0_14, 8)[0].q
            int32_t temp0_16[0x4] = _mm_sub_epi32(temp0_11, zmm0)
            int32_t temp0_17[0x4] = _mm_add_epi32(temp0_11, zmm0)
            uint64_t temp0_19[0x2] = _mm_sll_epi64(_mm_cvtepi32_epi64(temp0_16[0].q), zmm5_1)
            zmm1 = _mm_cvtepi32_epi64(temp0_17[0].q)
            zmm2 = _mm_add_epi64(temp0_19, zmm6)
            *(r8 - 0x58) = zmm2[0]
            *(r8 - 0x38) = _mm_bsrli_si128(zmm2, 8)[0]
            int32_t temp0_24[0x4] = _mm_add_epi64(_mm_sll_epi64(zmm1, zmm5_1), zmm6)
            *(r8 - 0x60) = temp0_24[0].q
            *(r8 - 0x40) = _mm_bsrli_si128(temp0_24, 8)[0].q
        while (i s< rbp_1 - 1 - rax_3)
    
    int64_t i_2 = sx.q(i)
    
    if (i_2 s< sx.q(rbp_1) - 1)
        int32_t rdx = i + 1
        void* r8_2 = arg7 + 0x10 + (i_2 << 5)
        int64_t i_3 = sx.q(rbp_1) - 1 - i_2
        int64_t i_1
        
        do
            int64_t rcx_5 = sx.q(rdx - 2)
            r8_2 += 0x20
            int64_t rax_10 = sx.q(rdx)
            rdx += 1
            *(r8_2 - 0x20) = (rax_10 << 5) + arg7
            *(r8_2 - 0x18) = (rcx_5 << 5) + arg7
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(((sx.q(rbp_1) - 1) << 5) + arg7 + 0x18) = (sx.q(rbp_1 - 2) << 5) + arg7

void* rcx_12 = arg7 - 0x20 + (sx.q(rbp_1) << 5)
*(rcx_12 + 0x10) = 0
*arg8 = arg7
*arg9 = rcx_12
