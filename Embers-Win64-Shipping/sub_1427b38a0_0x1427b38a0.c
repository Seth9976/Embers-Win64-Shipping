// 函数: sub_1427b38a0
// 地址: 0x1427b38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x58))

if (rcx.d != 0)
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    int64_t r12
    r12.b = **(arg1 + 0x50) != arg2
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx)
            int64_t* rcx_1 = *(arg1 + 0x50) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx_1 != arg2
                
                if (zx.d(r12.b) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_1 = &rcx_1[1]
            while (rbx_1 s< rcx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r12.b != 0)
            if (r14_1 != r9_1.d)
                int64_t rcx_2 = *(arg1 + 0x50)
                memmove(rcx_2 + (sx.q(r14_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
            
            r14_1 += rbp_2
        
        r12.b ^= 1
    while (rbx_1 s< rcx)
    
    *(arg1 + 0x58) = r14_1
    
    if (rcx.d != r14_1)
        sub_14093d4c0(arg2 + 0x28)
        sub_140599090(arg1 + 0x30)
        int64_t rax_6
        rax_6.b = 1
        return rax_6

uint64_t rax
rax.b = 0
return rax
