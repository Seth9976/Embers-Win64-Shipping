// 函数: sub_142bdaf70
// 地址: 0x142bdaf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r8 = arg1
int32_t rcx = 0
int32_t arg_10 = 0

if (*(r8 + 4) u> 0)
    while (true)
        result = *(r8 + 0x10)
        int32_t r15_1 = 0
        uint64_t rdx_2 = zx.q(rcx) * 2
        
        if (result[rdx_2 + 1].d u>= 4)
            void** result_5 = result[rdx_2]
            void** result_6 = result_5
            
            while (true)
                result_6 = result_6[1]
                
                if (result_6 == result_5)
                    break
                
                result = zx.q(result_6[6].d - result_5[6].d)
                int32_t r14_2 = *(result_6 + 0x34) - *(result_5 + 0x34)
                int32_t result_1 = result.d
                
                if (result.d == 0 && r14_2 == 0)
                    continue
                
                void** result_3 = result_5
                
                while (true)
                    void** result_2 = result_3
                    result_3 = *result_3
                    
                    if (result_3 == result_5)
                        break
                    
                    int32_t r13_2 = result_2[6].d - result_3[6].d
                    int32_t r12_2 = *(result_2 + 0x34) - *(result_3 + 0x34)
                    
                    if (r13_2 == 0 && r12_2 == 0)
                        continue
                    
                    int32_t rax_1 = sub_142b98a90(result.d, r14_2, r13_2, r12_2)
                    int32_t arg_18 = rax_1
                    result = zx.q(result_1)
                    
                    if (rax_1 != 0)
                        result = result_2
                        result_1.q = result
                        
                        while (true)
                            void** result_4 = result_6
                            result_6 = result_6[1]
                            
                            if (result_6 == result)
                                r15_1 = 1
                            
                            int32_t rbp_2 = result_6[6].d - result_4[6].d
                            int32_t rbx_2 = *(result_6 + 0x34) - *(result_4 + 0x34)
                            
                            if (rbp_2 == 0 && rbx_2 == 0)
                                continue
                            
                            int32_t rax_2 = sub_142b98a90(r13_2, r12_2, rbp_2, rbx_2)
                            
                            if (rax_2 == 0)
                                result = result_1.q
                            else
                                if ((rax_2 ^ arg_18) s< 0)
                                    do
                                        result_2[3].d |= 4
                                        result_2 = result_2[1]
                                    while (result_2 != result_4)
                                    
                                    result_2[3].d |= 4
                                
                                arg_18 = rax_2
                                result_2 = result_4
                                result = result_1.q
                                r13_2 = rbp_2
                                r12_2 = rbx_2
                                
                                if (r15_1 != 0)
                                    break
                        
                        break
                
                r8 = arg1
                rcx = arg_10
                break
        
        rcx += 1
        arg_10 = rcx
        
        if (rcx u>= *(r8 + 4))
            break

return result
