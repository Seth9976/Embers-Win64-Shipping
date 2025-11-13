// 函数: sub_14097ee80
// 地址: 0x14097ee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -1

if (arg1[4] != 0)
    int64_t* rcx = arg1[5]
    
    if (rcx != 0 && (*(*rcx + 0x370))(rcx).d s> 0 && arg1[7] != 0
            && (*(*arg1 + 0x120))(arg1, arg2) != 0)
        int32_t i = 0
        
        if (arg1[0xd].d s> 0)
            int64_t rsi_1 = 0
            
            do
                int64_t* r14_2 = arg1[0xc] + rsi_1
                int64_t* rcx_2 = *r14_2
                
                if ((**rcx_2)(rcx_2, arg2) != 0)
                    for (int64_t* j = arg1[1]; j != &j[sx.q(arg1[2].d) * 2]; j = &j[2])
                        if (j[1].d != 0 && *j != 0)
                            if (*(r14_2 + 0x15) != 0 || *(r14_2 + 0x14) != 0)
                                int64_t var_28 = *r14_2
                                void* rax_5 = r14_2[1]
                                void* var_20_1 = rax_5
                                
                                if (rax_5 != 0)
                                    *(rax_5 + 8) += 1
                                
                                sub_140954cd0(&arg1[1], &var_28, 0)
                            
                            break
                    
                    sub_140974be0(&arg1[0xc], i, 1, 1)
                    break
                
                i += 1
                rsi_1 += 0x18
            while (i s< arg1[0xd].d)
        
        int64_t* rcx_8 = arg1[7]
        rbx = (*(*rcx_8 + 0x48))(rcx_8, arg2).d

int64_t result
result.b = rbx == 0
return result
