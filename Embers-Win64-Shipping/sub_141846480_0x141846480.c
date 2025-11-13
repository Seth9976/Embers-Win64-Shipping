// 函数: sub_141846480
// 地址: 0x141846480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_18 = arg3

for (int64_t* i = *arg2; i != 0; i = i[3])
    result = i[1]
    void* r15_1 = *i
    
    if (result != 0)
        int64_t* j = *arg1
        
        if (j != 0)
            int64_t* j_1 = nullptr
            
            if (arg3 != 0)
                j = arg1[1]
            
            if (j != 0)
                void* rsi_1 = r15_1 + result
                
                do
                    int64_t rcx = *j
                    
                    if (rcx u< rsi_1)
                        int64_t rdi_2 = j[1] + rcx
                        
                        if (r15_1 u< rdi_2)
                            int64_t* j_2
                            
                            if (arg3 != 0)
                                j_2 = j[2]
                            else
                                j_2 = j[3]
                            
                            if (r15_1 u> rcx)
                                if (rsi_1 u>= rdi_2)
                                    result = r15_1 - rcx
                                else
                                    void** rax_2 = j_sub_140a82f30(0x20)
                                    void** rcx_4 = rax_2
                                    
                                    if (rax_2 == 0)
                                        rcx_4 = nullptr
                                    else
                                        *rax_2 = rsi_1
                                        rax_2[1] = rdi_2 - rsi_1
                                        rax_2[3] = 0
                                    
                                    rcx_4[2] = j
                                    rcx_4[3] = j[3]
                                    void* rax_4 = j[3]
                                    
                                    if (rax_4 == 0)
                                        arg3 = arg_18
                                        arg1[1] = rcx_4
                                        result = r15_1 - *j
                                        j[3] = rcx_4
                                    else
                                        arg3 = arg_18
                                        *(rax_4 + 0x10) = rcx_4
                                        result = r15_1 - *j
                                        j[3] = rcx_4
                                
                                j[1] = result
                            else if (rsi_1 u< rdi_2)
                                *j = rsi_1
                                j[1] = rdi_2 - rsi_1
                            else
                                void* rcx_1 = j[2]
                                int64_t* rax = j[3]
                                
                                if (rcx_1 == 0)
                                    *arg1 = rax
                                else
                                    *(rcx_1 + 0x18) = rax
                                
                                void* rcx_2 = j[3]
                                int64_t rax_1 = j[2]
                                
                                if (rcx_2 == 0)
                                    arg1[1] = rax_1
                                else
                                    *(rcx_2 + 0x10) = rax_1
                                
                                j[2] = 0
                                j[3] = 0
                                result = j_sub_140a74f90(j)
                                arg3 = arg_18
                            
                            j = j_2
                        else
                            result = j[3]
                            
                            if (j_1 == result)
                                break
                            
                            j_1 = j
                            j = result
                    else
                        result = j[2]
                        
                        if (j_1 == result)
                            break
                        
                        j_1 = j
                        j = result
                while (j != 0)

return result
