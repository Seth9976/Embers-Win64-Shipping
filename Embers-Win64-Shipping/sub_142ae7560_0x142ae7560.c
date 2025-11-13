// 函数: sub_142ae7560
// 地址: 0x142ae7560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t i = 0

if (*(arg2 + 8) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int32_t j = 0
        int64_t rbp_1 = 0
        int64_t rbx_2 = *(r12_1 + *(arg2 + 0x10))
        
        if (*(arg1 + 0x20) == 0)
            int32_t rcx_1 = *(arg1 + 8)
            
            if (rcx_1 s> 0)
                int32_t* rax_3 = *(arg1 + 0x10)
                
                while (rbx_2.d != *rax_3)
                    j += 1
                    rbp_1 += 1
                    rax_3 = &rax_3[2]
                    
                    if (j s>= rcx_1)
                        goto label_142ae7665
                
            label_142ae7603:
                
                if (j s>= 0)
                    int32_t rcx_2 = *(arg1 + 8)
                    
                    if (j s< rcx_2)
                        int64_t r8_1 = *(*(arg1 + 0x10) + (rbp_1 << 3))
                        
                        if (j s< rcx_2 - 1)
                            int64_t rdx_2 = sx.q(j) << 3
                            
                            do
                                int64_t* rcx_3 = *(arg1 + 0x10)
                                rdx_2 += 8
                                j += 1
                                *(rcx_3 + rdx_2 - 8) = *(rcx_3 + rdx_2)
                            while (j s< *(arg1 + 8) - 1)
                        
                        *(arg1 + 8) -= 1
                        
                        if (r8_1 != 0)
                            int64_t rax_10 = *(arg1 + 0x18)
                            
                            if (rax_10 != 0)
                                rax_10(r8_1)
                    
                    r14.b = 1
        else if (*(arg1 + 8) s> 0)
            while ((*(arg1 + 0x20))(rbx_2, *(*(arg1 + 0x10) + (sx.q(j) << 3))) == 0)
                j += 1
                rbp_1 += 1
                
                if (j s>= *(arg1 + 8))
                    goto label_142ae7665
            
            goto label_142ae7603
        
    label_142ae7665:
        i += 1
        r12_1 = &r12_1[1]
    while (i s< *(arg2 + 8))

return zx.q(r14.b)
