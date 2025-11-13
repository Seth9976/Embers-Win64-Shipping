// 函数: sub_1420de970
// 地址: 0x1420de970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** i = *(arg1 + 0x148)
int64_t result = sx.q(*(arg1 + 0x150))

for (void* r12 = &i[result]; i != r12; i = &i[1])
    void* rdi_1 = *i
    
    if (rdi_1 != 0 && *(arg1 + 0xe0) != rdi_1)
        int32_t rbx_1 = 0
        int32_t j_1 = *(rdi_1 + 0xa0) - 1
        int64_t j = sx.q(j_1)
        
        if (j s>= 2)
            int32_t r14_1 = j_1 + 1
            
            do
                int64_t r9_1 = *(rdi_1 + 0x98)
                
                if (*(r9_1 + (j << 3)) == 0)
                    rbx_1 += 1
                else if (rbx_1 s> 0)
                    int32_t rax = *(rdi_1 + 0xa0)
                    int32_t rcx_2 = rax - j_1 - rbx_1
                    
                    if (rcx_2 != 1)
                        memmove(r9_1 + (sx.q(r14_1) << 3), r9_1 + (sx.q(rbx_1 + 1 + j_1) << 3), 
                            (rcx_2 - 1) << 3)
                        rax = *(rdi_1 + 0xa0)
                    
                    result = zx.q(rax - rbx_1)
                    *(rdi_1 + 0xa0) = result.d
                    rbx_1 = 0
                
                j_1 -= 1
                r14_1 -= 1
                j -= 1
            while (j s>= 2)
            
            if (rbx_1 s> 0)
                int32_t rax_4 = *(rdi_1 + 0xa0)
                int32_t rcx_7 = rax_4 - rbx_1
                
                if (rcx_7 != 2)
                    int64_t r9_2 = *(rdi_1 + 0x98)
                    memmove(r9_2 + 0x10, r9_2 + (sx.q(rbx_1 + 2) << 3), (rcx_7 - 2) << 3)
                    rax_4 = *(rdi_1 + 0xa0)
                
                result = zx.q(rax_4 - rbx_1)
                *(rdi_1 + 0xa0) = result.d

return result
