// 函数: sub_142393a40
// 地址: 0x142393a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x348) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        result = *(arg1 + 0x340)
        void* rbx_1 = *(r12_1 + result)
        
        if (rbx_1 != 0 && *(rbx_1 + 9) == 0)
            result = sub_14239a450(rbx_1 + 0x20)
            *(rbx_1 + 0x38) = 0
            
            if (*(rbx_1 + 0x30) != 0)
                *(rbx_1 + 9) = 1
                sub_14239a450(rbx_1 + 0x20)
                void* rdx_1 = *(rbx_1 + 0x30)
                *(rbx_1 + 0x38) = 0
                int64_t* var_58
                sub_14237e7a0(&var_58, rdx_1)
                void** result_1
                result = result_1
                int32_t j_1
                
                for (int32_t j = j_1; j s< result[3].d; j = j_1)
                    void* rbx_2 = *(*var_58 + sx.q(j) * 0x18)
                    void arg_8
                    
                    if (rbx_2 != 0 && *sub_1408296b0(arg1 + 0x20, &arg_8, rbx_2) != 0xffffffff)
                        int64_t rax_3 = sx.q(*(rbx_2 + 0x34))
                        
                        if (rax_3.d s>= 0 && rax_3.d s< *(arg1 + 0x18))
                            void* rdi_3 = *(arg1 + 0x10) + 0xb8 + rax_3 * 0xd8
                            int32_t rcx_6 = *(rdi_3 + 0x18)
                            
                            if (i s>= rcx_6)
                                int32_t rax_5 = i - rcx_6
                                
                                if (rax_5 != 0xffffffff)
                                    uint64_t k_1 = zx.q(rax_5 + 1)
                                    uint64_t k
                                    
                                    do
                                        int32_t rbx_3 = *(rdi_3 + 0x18)
                                        sub_1405a4980(rdi_3, rbx_3 + 1)
                                        *(rdi_3 + 0x18) += 1
                                        void* r8_2 = rdi_3
                                        void* rax_7 = *(rdi_3 + 0x10)
                                        
                                        if (rax_7 != 0)
                                            r8_2 = rax_7
                                        
                                        int32_t rax_8 = rbx_3
                                        
                                        if (rbx_3 s< 0)
                                            rax_8 = rbx_3 + 0x1f
                                        
                                        int64_t rdx_5 = sx.q(rax_8 s>> 5)
                                        *(r8_2 + (rdx_5 << 2)) &= not.d(1 << (rbx_3.b & 0x1f))
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                            
                            void* rax_12 = *(rdi_3 + 0x10)
                            
                            if (rax_12 != 0)
                                rdi_3 = rax_12
                            
                            int32_t i_1 = i
                            
                            if (i s< 0)
                                i_1 = i + 0x1f
                            
                            void* rdx_6 = rdi_3 + (sx.q(i_1 s>> 5) << 2)
                            *rdx_6 |= 1 << (i.b & 0x1f)
                    
                    int32_t var_4c
                    int32_t var_40 = var_40 & not.d(var_4c)
                    void var_50
                    sub_14059bdd0(&var_50)
                    result = result_1
        
        i += 1
        r12_1 = &r12_1[1]
    while (i s< *(arg1 + 0x348))

return result
