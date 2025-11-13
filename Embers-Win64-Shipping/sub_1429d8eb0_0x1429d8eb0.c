// 函数: sub_1429d8eb0
// 地址: 0x1429d8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0
int32_t i_1 = 0

if (*result s> 0)
    int64_t r12_1 = 0
    
    do
        int32_t* rdx_1 = *(arg1 + 0x68)
        int64_t rcx = sx.q(*(r12_1 + *(arg1 + 0x58) + 4))
        int64_t rax_1 = *(arg1 + 0x78)
        int32_t rbp_1 = *(rax_1 + (rcx << 2) + 0xc)
        int32_t* r10_1 = rax_1 + (rcx << 2)
        int32_t j_2 = *(rdx_1 + r12_1)
        
        if (j_2 s> 0)
            int32_t rcx_2 = 1
            int32_t* r15_2 = *(arg1 + 0x90) + (sx.q(*(rdx_1 + r12_1 + 4)) << 2) - r10_1
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                int32_t rdx_2 = *(r15_2 + r10_1)
                
                if (rdx_2 != 0xffffffff)
                    void* r9_1 = *(arg1 + 0x10)
                    int32_t rdi_1 = rdx_2 * 2
                    int64_t rbx_1 = sx.q(rdi_1) << 2
                    int32_t* r8_2 = *(r9_1 + 0x90) + rbx_1
                    *r8_2 = 2
                    int32_t rax_4
                    
                    if (rdx_2 != 0)
                        rax_4 = r8_2[-2] + r8_2[-1]
                    else
                        rax_4 = 0
                    
                    r8_2[1] = rax_4
                    int32_t rax_6 = *(r9_1 + 0x10)
                    
                    if (rax_6 s< 2)
                        rax_6 = 2
                    
                    *(r9_1 + 0x10) = rax_6
                    void* r9_2 = *(arg1 + 0x10)
                    int64_t rdx_3 = sx.q(rdi_1 + 1)
                    int32_t* rdi_2 = *(r9_2 + 0xa8) + (sx.q(*(*(r9_2 + 0x90) + (rdx_3 << 2))) << 2)
                    int32_t r8_4 = 0
                    int64_t r9_3 = 0
                    int16_t* r14_1 = *(r9_2 + 0xc0) + (sx.q(*(*(r9_2 + 0x90) + (rdx_3 << 2))) << 1)
                    int32_t rax_12 = *r10_1
                    
                    if (rax_12 != 0xffffffff)
                        *rdi_2 = rax_12
                        r8_4 = 1
                        r9_3 = 1
                        *r14_1 = rcx_2.w - (zx.q(rcx_2 s/ 3) * 3).w
                    
                    if (rbp_1 != 0xffffffff)
                        rdi_2[r9_3] = rbp_1
                        r14_1[r9_3] = rcx_2.w - (zx.q(rcx_2 s/ 3) * 3).w
                        r8_4 += 1
                    
                    *(rbx_1 + *(*(arg1 + 0x10) + 0x90)) = r8_4
                
                rcx_2 += 1
                r10_1 = &r10_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = i_1
        
        result = *(arg1 + 8)
        i += 1
        r12_1 += 8
        i_1 = i
    while (i s< *result)

return result
