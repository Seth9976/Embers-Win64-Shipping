// 函数: sub_14226bb10
// 地址: 0x14226bb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141dcdc50(arg1) != 3)
    int64_t rax_2 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_2 != 0)
        int64_t* var_28
        sub_142435fa0(rax_2, &var_28)
        int32_t j_1
        
        if (j_1 s>= 0 && j_1 s< var_28[1].d)
            int32_t rbx_1 = 0
            int64_t* var_18
            sub_1424373a0(rax_2, &var_18)
            int32_t i_1
            int32_t i = i_1
            
            while (i s>= 0)
                int64_t* rdx_3 = var_18
                
                if (i s>= rdx_3[1].d)
                    break
                
                if (sub_140d3c6e0(*rdx_3 + (sx.q(i) << 3)) == arg1)
                    if (rbx_1 != 0xffffffff)
                        int32_t j = j_1
                        
                        while (j s>= 0)
                            int64_t* rdx_4 = var_28
                            
                            if (j s>= rdx_4[1].d)
                                break
                            
                            void* result = sub_140d3c6e0(*rdx_4 + (sx.q(j) << 3))
                            
                            if (result != 0 && sub_141ea17a0(result) == rbx_1)
                                return result
                            
                            j = j_1 + 1
                            j_1 = j
                    
                    break
                
                i = i_1 + 1
                i_1 = i
                rbx_1 += 1

return 0
