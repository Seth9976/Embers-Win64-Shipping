// 函数: sub_14062f760
// 地址: 0x14062f760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && arg1 != 0)
            int64_t rax_4 = sub_1423de540(data_143f5b298, arg1, 0)
            
            if (rax_4 != 0)
                int64_t* result = nullptr
                int64_t var_28 = 0
                int32_t var_20_1 = 0
                int32_t var_18_1 = 0xffffffff
                sub_140d3cc80(sub_141c122a0(), &var_28, 1, 0x10, 0)
                int32_t r8_1 = var_20_1
                int32_t i = var_18_1 + 1
                int64_t rdx_3 = var_28
                int32_t i_1 = i
                
                if (i s< r8_1)
                    while (*(rdx_3 + (sx.q(i) << 3)) == 0)
                        int32_t i_2 = i + 1
                        i_1 = i_2
                        i = i_2
                        
                        if (i_2 s>= r8_1)
                            break
                
                while (i s>= 0)
                    if (i s>= r8_1)
                        break
                    
                    int64_t* result_1 = *(rdx_3 + (sx.q(i) << 3))
                    
                    if ((*(*result_1 + 0x150))(result_1) == rax_4)
                        void* rax_10 = sub_141c122a0()
                        
                        if (rax_10 != 0)
                            int64_t rdx_4 = sx.q(*(arg2 + 0x38))
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s<= rdx_4.d
                                    && *(*(arg2 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                                void* rax_13 = result_1[2]
                                
                                if (rdx_4.d s<= *(rax_13 + 0x38)
                                        && *(*(rax_13 + 0x30) + (rdx_4 << 3)) == arg2 + 0x30)
                                    char rax_15
                                    
                                    if (arg3 != 0)
                                        rax_15 = sub_141bae2b0(result_1)
                                    
                                    if (arg3 == 0 || rax_15 != 0)
                                        rdx_3 = var_28
                                        result = result_1
                                        break
                    
                    r8_1 = var_20_1
                    i = i_1 + 1
                    rdx_3 = var_28
                    i_1 = i
                    
                    if (i s< r8_1)
                        while (*(rdx_3 + (sx.q(i) << 3)) == 0)
                            int32_t i_3 = i + 1
                            i_1 = i_3
                            i = i_3
                            
                            if (i_3 s>= r8_1)
                                break
                
                if (rdx_3 != 0)
                    sub_140a74f90(rdx_3)
                
                return result

return nullptr
