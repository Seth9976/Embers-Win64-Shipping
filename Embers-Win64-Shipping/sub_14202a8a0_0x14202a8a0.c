// 函数: sub_14202a8a0
// 地址: 0x14202a8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg2 + 0x28))(arg2) != 0)
    int64_t* var_18
    sub_1424373a0(arg1, &var_18)
    int32_t i_1
    int32_t i = i_1
    
    while (i s>= 0)
        int64_t* rdx_1 = var_18
        
        if (i s>= rdx_1[1].d)
            break
        
        void* result = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
        
        if (result != 0)
            void* rcx_4 = *(result + 0x228)
            
            if (rcx_4 != 0)
                int64_t* rcx_5 = *(rcx_4 + 0x258)
                
                if (rcx_5 != 0)
                    int64_t rdx_2 = *rcx_5
                    
                    if ((*(rdx_2 + 0x28))(rcx_5, rdx_2) != 0)
                        int64_t* rcx_6 = *(*(result + 0x228) + 0x258)
                        
                        if ((**rcx_6)(rcx_6, arg2) != 0)
                            return result
        
        i = i_1 + 1
        i_1 = i

return 0
