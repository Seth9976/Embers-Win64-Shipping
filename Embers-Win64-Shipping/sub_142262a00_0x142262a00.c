// 函数: sub_142262a00
// 地址: 0x142262a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char rax = *(arg2 + 0x719)

if ((rax & 0x20) == 0)
    return 

int64_t rdx = sx.q(*(arg1 + 0x1d0))

if (rdx.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = arg2 != **(arg1 + 0x1c8)
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rdx)
            int64_t* rcx_2 = (rbx_1 << 4) + *(arg1 + 0x1c8)
            
            do
                int32_t rax_2
                rax_2.b = arg2 != *rcx_2
                
                if (zx.d(r15.b) != rax_2)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_2 = &rcx_2[2]
            while (rbx_1 s< rdx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rax_3 = *(arg1 + 0x1c8)
                memmove((sx.q(r12_1) << 4) + rax_3, (r9_1 << 4) + rax_3, rbp_2 << 4)
            
            r12_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rdx)
    
    *(arg1 + 0x1d0) = r12_1
    rax = *(arg2 + 0x719)

*(arg2 + 0x719) = rax & 0xdf
