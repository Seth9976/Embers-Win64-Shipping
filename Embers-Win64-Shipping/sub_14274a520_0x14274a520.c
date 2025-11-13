// 函数: sub_14274a520
// 地址: 0x14274a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int16_t rdx = *rax
*(arg1 + 0x10) = &rax[2]
int16_t i_4 = rax[2]
void* result = &rax[3]
*(arg1 + 0x10) = result

if (0 u< i_4)
    if (*(arg1 + 0xa8) == 0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i
        
        do
            result += 4
            i = i_2
            i_2 -= 1
        while (i != 1)
        *(arg1 + 0x10) = result
        return result
    
    int64_t rdi_1 = zx.q(rdx) * 0x70
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        int16_t* rax_3 = *(arg1 + 0x10)
        int64_t r8_1 = 0
        int32_t* rcx = *(arg1 + 0x20)
        uint32_t rdx_1 = zx.d(*rax_3)
        *(arg1 + 0x10) = &rax_3[1]
        
        for (int32_t j = *rcx; rdx_1 s>= j; j = rcx[r8_1])
            r8_1 += 1
            rdx_1 -= j
        
        uint64_t r8_2 = zx.q(rax_3[1])
        int32_t r10_1 = *(sx.q(rdx_1) + *(*(arg1 + 0x18) + (r8_1 << 3)))
        *(arg1 + 0x10) = &rax_3[2]
        int64_t rax_7 = *(arg1 + 0x50)
        int32_t rcx_3 = *(arg1 + 0xa8)
        uint128_t* r8_3 = *(*(rdi_1 + rax_7 + 8) + (r8_2 << 3))
            + ((sx.q(*(rdi_1 + rax_7 + 0x14)) + sx.q(*(arg1 + 0xa4))) << 2)
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_3)
        uint64_t rax_13 = zx.q((temp2_1 + (temp1_1 & 3)) s>> 2)
        int32_t temp3_1 = rax_13.d
        
        if (temp3_1 != 0)
            uint128_t zmm0 = _mm_shuffle_epi32(zx.o(r10_1), 0)
            
            if (temp3_1 s> 0)
                uint128_t* rcx_4 = r8_3
                uint64_t j_2 = zx.q(rax_13.d)
                uint64_t j_1
                
                do
                    *rcx_4 = zmm0
                    rcx_4 = &rcx_4[1]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rcx_3 = *(arg1 + 0xa8)
        
        result = zx.q((rax_13 << 2).d)
        
        if (result.d s< rcx_3)
            void* rdx_6 = r8_3 + (sx.q(result.d) << 2)
            
            do
                *rdx_6 = r10_1
                rdx_6 += 4
                result = zx.q(result.d + 1)
            while (result.d s< *(arg1 + 0xa8))
        
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
