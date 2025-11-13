// 函数: sub_141d5ab20
// 地址: 0x141d5ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1
int32_t r14 = 0
int64_t rcx = sx.q(*(arg1 + 0x30))
void* const* result

if (rcx.d != 0)
    int64_t rbx_1 = 0
    int32_t rdi_1 = 0
    int32_t r15_1 = 0
    int64_t r12
    r12.b = **(r8 + 0x28) != arg2
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx)
            int64_t rcx_1 = *(r8 + 0x28) + (rbx_1 << 3)
            
            do
                result.b = *rcx_1 != arg2
                
                if (zx.d(r12.b) != result.d)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_1 += 8
            while (rbx_1 s< rcx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r12.b != 0)
            if (r15_1 != r9_1.d)
                int64_t rcx_2 = *(r8 + 0x28)
                memmove(rcx_2 + (sx.q(r15_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
                r8 = arg1
            
            r15_1 += rbp_2
        
        r12.b ^= 1
    while (rbx_1 s< rcx)
    
    r14 = rcx.d - r15_1
    *(r8 + 0x30) = r15_1

result.b = r14 s> 0
return result
