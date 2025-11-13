// 函数: sub_142225dd0
// 地址: 0x142225dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x238)

if ((*(result + 0x40) & 0x10) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x1dc) s> 0)
        do
            result = sx.q(*(arg1 + 0x118))
            uint64_t rcx = 0
            
            if (result.d s> 0)
                int32_t r10_1 = *(arg1 + 0x114)
                int64_t result_1 = result
                int64_t r11_1 = *(arg1 + 0xf0)
                int64_t rsi_1 = sx.q(*(arg1 + 0x30))
                int16_t* rdx_1 = *(arg1 + 0xf8)
                
                do
                    int64_t result_2 = sx.q(zx.d(*rdx_1) * r10_1) + r11_1
                    int32_t r8_1 = *(rsi_1 + result_2)
                    void* r15_1 = rsi_1 + result_2
                    result = zx.q(r8_1) & 0xf0000000
                    
                    if (result.d == 0x40000000 && *(r15_1 + 4) == i)
                        if (result_2 != 0 && (result.d != 0x40000000 || (r8_1 & 0x3fff) != 0x3fff))
                            int64_t r14_1 = 0
                            void* rdi_1 = nullptr
                            rcx.b = 0
                            result = result_2
                            void* rdx_2 = r15_1
                            
                            while (true)
                                if (rcx.b == 1)
                                    r14_1 = result
                                    rdi_1 = rdx_2
                                    break
                                
                                rcx = zx.q(*rdx_2) & 0x3fff
                                
                                if (rcx.d == 0x3fff)
                                    break
                                
                                int32_t rax_4 = r10_1 * rcx.d
                                rcx.b = 1
                                result = sx.q(rax_4) + r11_1
                                rdx_2 = rsi_1 + result
                            
                            if (r14_1 != 0)
                                sub_142226030(result_2, r15_1, r14_1, rdi_1, 
                                    *(r15_1 + 0xc) f- *(rdi_1 + 0xc), r15_1)
                                int64_t j
                                
                                do
                                    j = 0
                                    void* rbp_1 = nullptr
                                    
                                    if (r14_1 != 0 && rdi_1 != 0)
                                        int64_t j_1 = r14_1
                                        void* rax_6 = rdi_1
                                        void* rdx_3
                                        rdx_3.b = 0
                                        
                                        while (true)
                                            if (rdx_3.b == 1)
                                                j = j_1
                                                rbp_1 = rax_6
                                                break
                                            
                                            int32_t rcx_4 = *rax_6 & 0x3fff
                                            
                                            if (rcx_4 == 0x3fff)
                                                break
                                            
                                            rdx_3.b = 1
                                            j_1 = sx.q(*(arg1 + 0x114) * rcx_4) + *(arg1 + 0xf0)
                                            rax_6 = sx.q(*(arg1 + 0x30)) + j_1
                                    
                                    int64_t j_2
                                    void* r9_2
                                    float zmm0
                                    
                                    if (j == 0)
                                        j_2 = r14_1
                                        zmm0 = *(r15_1 + 0xc) f- *(rdi_1 + 0xc)
                                        r9_2 = rdi_1
                                    else
                                        j_2 = j
                                        zmm0 = *(rdi_1 + 0xc) f- *(rbp_1 + 0xc)
                                        r9_2 = rbp_1
                                    
                                    result = sub_142226030(result_2, r15_1, j_2, r9_2, zmm0, rdi_1)
                                    result_2 = r14_1
                                    r15_1 = rdi_1
                                    r14_1 = j
                                    rdi_1 = rbp_1
                                while (j != 0)
                        
                        break
                    
                    rcx += 1
                    rdx_1 = &rdx_1[1]
                while (rcx s< result_1)
            
            i += 1
        while (i s< *(arg1 + 0x1dc))

return result
