// 函数: sub_140ca8ec0
// 地址: 0x140ca8ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 1) != 0)
    return 

int32_t rax = *(arg1 + 0xc0)
uint32_t r13_1 = zx.d(*(arg2 + 2))
int32_t r15_1 = *(arg1 + 0xc0)
int32_t rcx = rax

if (r15_1 != rax)
    int32_t r10_1 = 0
    int32_t rdx = 1
    int32_t r11_1 = 0
    int32_t rdi_1 = 0
    int32_t r14_1 = 1
    int32_t r9_1 = 0
    
    if (rax s> 0)
        do
            int32_t rbp_1 = rdi_1
            
            if (r9_1 s< r15_1 - r13_1 || r9_1 s>= r15_1)
                if (r11_1 != r9_1)
                    void* rax_1 = *(arg1 + 0xb8)
                    void* rcx_1 = arg1 + 0x98
                    
                    if (rax_1 != 0)
                        rcx_1 = rax_1
                    
                    int64_t rax_2 = sx.q(r10_1)
                    int32_t r8_1 = *(rcx_1 + (rax_2 << 2))
                    void* rbx_1 = rcx_1 + (rax_2 << 2)
                    
                    if ((*(rcx_1 + (sx.q(rdi_1) << 2)) & r14_1) == 0)
                        *rbx_1 = not.d(rdx) & r8_1
                    else
                        *rbx_1 = r8_1 | rdx
                
                r11_1 += 1
                int32_t temp0_1 = rdx
                int32_t temp1_1 = rdx
                rdx *= 2
                
                if (temp0_1 == neg.d(temp1_1))
                    rdx = 1
                    r10_1 += 1
            
            rcx = *(arg1 + 0xc0)
            rax = r14_1 * 2
            r9_1 += 1
            r14_1 = 1
            
            if (rax != 0)
                r14_1 = rax
            
            rdi_1 += 1
            
            if (rax != 0)
                rdi_1 = rbp_1
        while (r9_1 s< rcx)

*(arg1 + 0xc0) = rcx - r13_1
