// 函数: sub_142225bf0
// 地址: 0x142225bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x47]

if ((*(result + 0x30) & 4) != 0)
    result = sx.q(arg1[0x23].d)
    
    if (result.d s> 0)
        int32_t r10_1 = *(arg1 + 0x114)
        int64_t result_2 = result
        int64_t r11_1 = arg1[0x1e]
        int16_t* rdx_1 = arg1[0x1f]
        int64_t rsi_1 = sx.q(arg1[6].d)
        int64_t rcx = 0
        
        do
            int64_t result_3 = sx.q(zx.d(*rdx_1) * r10_1) + r11_1
            int32_t r8_1 = *(rsi_1 + result_3)
            int64_t r12_1 = rsi_1 + result_3
            result = zx.q(r8_1) & 0xf0000000
            
            if (result.d == 0x40000000 && *(r12_1 + 4) == 0)
                if (result_3 != 0 && (result.d != 0x40000000 || (r8_1 & 0x3fff) != 0x3fff))
                    result = result_3
                    int64_t result_1 = 0
                    int64_t result_6 = result_3
                    int64_t r14_1 = 0
                    int64_t rcx_1 = r12_1
                    rdx_1.b = 0
                    
                    while (true)
                        if (rdx_1.b == 1)
                            result_1 = result
                            r14_1 = rcx_1
                            break
                        
                        int32_t rcx_3 = *rcx_1 & 0x3fff
                        
                        if (rcx_3 == 0x3fff)
                            break
                        
                        rdx_1.b = 1
                        result = sx.q(r10_1 * rcx_3) + r11_1
                        rcx_1 = rsi_1 + result
                    
                    if (result_1 != 0)
                        while (result_3 != result_1)
                            int64_t result_5 = 0
                            int64_t rbp_1 = 0
                            
                            if (result_1 != 0 && r14_1 != 0)
                                int64_t result_4 = result_1
                                int64_t rax_6 = r14_1
                                rdx_1.b = 0
                                
                                while (true)
                                    if (rdx_1.b == 1)
                                        result_5 = result_4
                                        rbp_1 = rax_6
                                        break
                                    
                                    int32_t rax_8 = *rax_6 & 0x3fff
                                    
                                    if (rax_8 == 0x3fff)
                                        break
                                    
                                    rdx_1.b = 1
                                    result_4 = sx.q(rax_8 * *(arg1 + 0x114)) + arg1[0x1e]
                                    rax_6 = sx.q(arg1[6].d) + result_4
                            
                            result, rdx_1 = (*(*arg1 + 0x258))(arg1, result_6, r12_1, result_1, 
                                r14_1, result_5, rbp_1)
                            result_6 = result_1
                            r12_1 = r14_1
                            result_1 = result_5
                            r14_1 = rbp_1
                            
                            if (result_5 == 0)
                                break
                
                break
            
            rcx += 1
            rdx_1 = &rdx_1[1]
        while (rcx s< result_2)

return result
