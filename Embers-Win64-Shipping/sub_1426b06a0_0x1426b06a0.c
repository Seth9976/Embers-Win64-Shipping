// 函数: sub_1426b06a0
// 地址: 0x1426b06a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(arg2 + 0x55) & 1) != 0)
    void* rbp_1 = *(arg2 + 0x48)
    
    if (rbp_1 != 0)
        int64_t rax = sx.q(*(rbp_1 + 0x60))
        int32_t r9 = 0
        
        if (rax.d s> 0)
            void* rbx_1 = *(rbp_1 + 0x58)
            int64_t rdi_1 = 0
            
            do
                void* const rax_6 = *(rbx_1 + 8)
                int32_t r8_1
                int64_t* r14_1
                
                if (rax_6 != 0)
                    int16_t r10_1 = *(arg2 + 0x50)
                    
                    if (*(rax_6 + 0x50) == r10_1)
                        return rax_6
                    
                    int64_t rcx = sx.q(*(rax_6 + 0x60))
                    r8_1 = 0
                    int64_t rdx = 0
                    
                    if (rcx.d s> 0)
                        r14_1 = *(rax_6 + 0x58)
                        int64_t* rcx_1 = r14_1
                        
                        do
                            if (*(*rcx_1 + 0x50) == r10_1)
                                return r14_1[sx.q(r8_1)]
                            
                            r8_1 += 1
                            rdx += 1
                            rcx_1 = &rcx_1[1]
                        while (rdx s< rcx)
                
                int64_t rax_2 = sx.q(*(rbx_1 + 0x18))
                r8_1 = 0
                int64_t rdx_1 = 0
                
                if (rax_2.d s> 0)
                    r14_1 = *(rbx_1 + 0x10)
                    int64_t* rax_3 = r14_1
                    
                    do
                        if (*(*rax_3 + 0x50) == *(arg2 + 0x50))
                            return r14_1[sx.q(r8_1)]
                        
                        r8_1 += 1
                        rdx_1 += 1
                        rax_3 = &rax_3[1]
                    while (rdx_1 s< rax_2)
                
                rdi_1 += 1
                rbx_1 += 0x30
            while (rdi_1 s< rax)
        
        int64_t rax_4 = sx.q(*(rbp_1 + 0x70))
        
        if (rax_4.d s> 0)
            int64_t* r11_3 = *(rbp_1 + 0x68)
            int64_t* rdx_2 = r11_3
            int64_t rcx_3 = 0
            
            do
                if (*(*rdx_2 + 0x50) == *(arg2 + 0x50))
                    return r11_3[sx.q(r9)]
                
                r9 += 1
                rcx_3 += 1
                rdx_2 = &rdx_2[1]
            while (rcx_3 s< rax_4)
        
        return nullptr

return arg2
