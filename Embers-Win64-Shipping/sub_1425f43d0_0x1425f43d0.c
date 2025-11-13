// 函数: sub_1425f43d0
// 地址: 0x1425f43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int64_t rcx_1 = sx.q(*(arg1 + 0x48))

if (rcx_1.d != 0)
    int32_t rdi_1 = 0
    int32_t r15_1 = 0
    int64_t r14
    r14.b = **(arg1 + 0x40) != arg2
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_1)
            int64_t* rcx_2 = *(arg1 + 0x40) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx_2 != arg2
                
                if (zx.d(r14.b) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_2 = &rcx_2[1]
            while (rbx_1 s< rcx_1)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r14.b != 0)
            if (r15_1 != r9_1.d)
                int64_t rcx_3 = *(arg1 + 0x40)
                memmove(rcx_3 + (sx.q(r15_1) << 3), rcx_3 + (r9_1 << 3), rbp_2 << 3)
            
            r15_1 += rbp_2
        
        r14.b ^= 1
    while (rbx_1 s< rcx_1)
    
    *(arg1 + 0x48) = r15_1

int32_t rbx_2 = *(arg1 + 0x48)
int64_t result = LeaveCriticalSection(arg1 + 0x18)

if (rbx_2 s> 0)
    return result

return sub_1425f4310(arg1) __tailcall
