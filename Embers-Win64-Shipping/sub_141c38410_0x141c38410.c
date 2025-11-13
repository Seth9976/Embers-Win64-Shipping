// 函数: sub_141c38410
// 地址: 0x141c38410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r13 = sx.q(arg3)
uint64_t i_5 = zx.q(arg2)

if (*arg1 != 0)
    *(arg1 + 0x10) = 0
    
    if (*(arg1 + 0x14) s<= 0xffffffff)
        sub_140775b10(&arg1[8], 0)
    
    int64_t r15_1 = sx.q(*(arg1 + 0x18))
    int64_t r14_1 = sx.q(*(arg1 + 0x10))
    int32_t rax = (r14_1 + r15_1).d
    *(arg1 + 0x10) = rax
    
    if (rax s> *(arg1 + 0x14))
        sub_140775270(&arg1[8])
    
    double zmm6[0x2]
    double var_38_1[0x2] = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    uint128_t zmm10
    uint128_t var_78_1 = zmm10
    result = memset(*(arg1 + 8) + (r14_1 << 2), 0, r15_1 << 2)
    uint32_t rcx_3 = zx.d(*arg1)
    uint128_t zmm0_1
    double zmm1
    
    if (rcx_3 == 1)
        result = zx.q((i_5 - 1).d)
        int64_t rbx_3 = *(arg1 + 8)
        int32_t rcx_15 = i_5.d
        zmm6 = zx.o(0)
        
        if (arg4 == 0)
            rcx_15 = result.d
        
        zmm7.d = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(rcx_15)).d
        
        if (i_5.d s> 0)
            uint64_t i
            
            do
                zmm0_1, result = cosf(zmm6.d)
                zmm6[0].d = zmm6[0].d f+ zmm7.d
                zmm1.d = 1f f- zmm0_1.d
                zmm1.d = zmm1.d f* 0.460000008f
                zmm0_1.q = fconvert.d(zmm1.d)
                zmm0_1.d = fconvert.s(0x3fe147ae147ae148 f- zmm0_1.q)
                
                if (r13.d s> 0)
                    result = sx.q(zmm0_1.d)
                    int64_t rcx_17
                    int64_t rdi_9
                    rdi_9, rcx_17 = __memfill_u32(rbx_3, result.d, r13)
                
                rbx_3 += r13 << 2
                i = i_5
                i_5 -= 1
            while (i != 1)
    else if (rcx_3 == 2)
        result = zx.q((i_5 - 1).d)
        int64_t rbx_2 = *(arg1 + 8)
        int32_t rcx_12 = i_5.d
        zmm6 = zx.o(0)
        
        if (arg4 == 0)
            rcx_12 = result.d
        
        zmm7.d = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(rcx_12)).d
        
        if (i_5.d s> 0)
            uint64_t i_1
            
            do
                zmm0_1, result = cosf(zmm6.d)
                zmm6[0].d = zmm6[0].d f+ zmm7.d
                zmm1.d = 1f f- zmm0_1.d
                zmm1.d = zmm1.d f* 0.5f
                
                if (r13.d s> 0)
                    result = sx.q(zmm1.d)
                    int64_t rcx_14
                    int64_t rdi_7
                    rdi_7, rcx_14 = __memfill_u32(rbx_2, result.d, r13)
                
                rbx_2 += r13 << 2
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    else if (rcx_3 == 3)
        int64_t r10_1 = *(arg1 + 8)
        int32_t rcx_6 = i_5.d
        
        if (arg4 == 0)
            rcx_6 = (i_5 - 1).d
        
        int32_t rax_3 = rcx_6 + 1
        
        if ((rcx_6.b & 1) == 0)
            rax_3 = rcx_6
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rax_3)
        zmm7 = zx.o(0)
        int32_t rax_6 = (temp4_1 - temp3_1) s>> 1
        result = zx.q(rcx_6 - 1)
        zmm8.d = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(result.d)).d
        
        if (rax_6 s>= 0)
            int64_t rbx_1 = r10_1
            int64_t i_4 = sx.q(rax_6 + 1)
            int64_t i_2
            
            do
                zmm0_1.d = zmm7.d f+ zmm7.d
                zmm6 = zx.o(0)
                zmm6[0] = fconvert.d(cosf(zmm0_1.d))
                zmm6[0] = zmm6[0] f* 0x3fb47ae147ae147b
                zmm0_1, result = cosf(zmm7.d)
                zmm0_1.d = zmm0_1.d f* 0.5f
                zmm7.d = zmm7.d f+ zmm8.d
                zmm1.d = 0.419999987f f- zmm0_1.d
                zmm0_1.q = fconvert.d(zmm1.d)
                zmm6[0] = zmm6[0] f+ zmm0_1.q
                int32_t result_1 = _mm_cvtpd_ps(zmm6).d
                
                if (r13.d s> 0)
                    result = sx.q(result_1)
                    int64_t rcx_8
                    int64_t rdi_2
                    rdi_2, rcx_8 = __memfill_u32(rbx_1, result.d, r13)
                
                rbx_1 += r13 << 2
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        if (rax_6 + 1 s< i_5.d)
            int64_t r8_2 = r10_1 + (sx.q((rax_6 + 1) * r13.d) << 2)
            result = sx.q(rax_6) * 2 - sx.q(rax_6 + 1)
            uint128_t* rdx_2 = r10_1 + (result << 2)
            uint64_t i_6 = zx.q(i_5.d - (rax_6 + 1))
            uint64_t i_3
            
            do
                if (r13.d s> 0)
                    result = sx.q((*rdx_2).d)
                    int64_t rcx_11
                    int64_t rdi_5
                    rdi_5, rcx_11 = __memfill_u32(r8_2, result.d, r13)
                
                r8_2 += r13 << 2
                rdx_2 -= 4
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)

return result
