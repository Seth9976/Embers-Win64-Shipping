// 函数: sub_141c905d0
// 地址: 0x141c905d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t r8_1 = r9_1 * 2
                uint64_t rdx_1 = zx.q(r8_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int32_t* r10_1 = arg1 + (sx.q(r8_1) + 2) * 0x18
                    int64_t rcx = sx.q(rdx_1.d) * 3
                    int32_t rax_8 = *r10_1
                    int32_t rax_9 = rax_8 - *(arg1 + (rcx << 3))
                    
                    if (rax_8 == *(arg1 + (rcx << 3)))
                        rax_9 = r10_1[1] - *(arg1 + (rcx << 3) + 4)
                    
                    if (rax_9 s< 0)
                        rdx_1 = zx.q(r8_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r9_2 = arg1 + sx.q(r9_1) * 0x18
                int64_t rcx_2 = sx.q(rdx_1.d) * 3
                int32_t rax_13 = *r9_2
                result = zx.q(rax_13 - *(arg1 + (rcx_2 << 3)))
                int128_t* r8_2 = arg1 + (rcx_2 << 3)
                
                if (rax_13 == *(arg1 + (rcx_2 << 3)))
                    result = zx.q(r9_2[1] - *(r8_2 + 4))
                
                if (result.d s>= 0)
                    break
                
                if (r9_2 != r8_2)
                    zmm3 = *r9_2
                    zmm2 = *(r9_2 + 0x10)
                    *r9_2 = *r8_2
                    *(r9_2 + 0x10) = r8_2[1].q
                    *r8_2 = zmm3
                    r8_2[1].q = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r9_1 = rdx_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_1 = arg1 + result * 0x18
    
    do
        if (arg1 != rdi_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rdi_1
            arg1[1].q = rdi_1[1].q
            *rdi_1 = zmm3
            rdi_1[1].q = zmm2
        
        int32_t r9_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r9_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* rbx_1 = arg1 + (sx.q(result_1) + 2) * 0x18
                    int64_t rdx_2 = sx.q(result.d) * 3
                    int32_t rcx_9 = *rbx_1
                    int32_t rcx_10 = rcx_9 - *(arg1 + (rdx_2 << 3))
                    
                    if (rcx_9 == *(arg1 + (rdx_2 << 3)))
                        rcx_10 = *(rbx_1 + 4) - *(arg1 + (rdx_2 << 3) + 4)
                    
                    if (rcx_10 s< 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_4 = arg1 + sx.q(r9_3) * 0x18
                int64_t rdx_4 = sx.q(result.d) * 3
                int32_t rcx_14 = *r9_4
                int32_t rcx_15 = rcx_14 - *(arg1 + (rdx_4 << 3))
                void* r8_3 = arg1 + (rdx_4 << 3)
                
                if (rcx_14 == *(arg1 + (rdx_4 << 3)))
                    rcx_15 = *(r9_4 + 4) - *(r8_3 + 4)
                
                if (rcx_15 s>= 0)
                    break
                
                if (r9_4 != r8_3)
                    zmm3 = *r9_4
                    zmm2 = *(r9_4 + 0x10)
                    *r9_4 = *r8_3
                    *(r9_4 + 0x10) = *(r8_3 + 0x10)
                    *r8_3 = zmm3
                    *(r8_3 + 0x10) = zmm2
                
                r9_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0x18
    while (i s> 0)

return result
