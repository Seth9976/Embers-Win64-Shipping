// 函数: sub_140d7bd70
// 地址: 0x140d7bd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x20) != 0)
    int64_t* rcx = *(arg1 - 0x18)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        if (sub_140d89510(arg1 - 0x28, arg2, arg4) != 0)
            void*** rax_4 = j_sub_140a82f30(0x60)
            void*** rcx_5
            
            if (rax_4 == 0)
                rcx_5 = nullptr
            else
                int64_t var_18 = *(arg1 - 0x18)
                void* rcx_3 = *(arg1 - 0x10)
                void* var_10_1 = rcx_3
                
                if (rcx_3 != 0)
                    *(rcx_3 + 8) += 1
                
                rcx_5 = sub_140d71950(rax_4, *(arg1 - 0x20), &var_18)
            
            if (arg2 != 0x2710)
                if (arg2 == 0x2712)
                    void* rax_11 = &rcx_5[0xa]
                    
                    if (rcx_5 == 0)
                        rax_11 = nullptr
                    
                    *arg3 = rax_11
                    return 0
                
                if (arg2 == 0x2713)
                    void* rax_10 = &rcx_5[6]
                    
                    if (rcx_5 == 0)
                        rax_10 = nullptr
                    
                    *arg3 = rax_10
                    return 0
                
                if (arg2 == 0x271e)
                    void* rax_9 = &rcx_5[7]
                    
                    if (rcx_5 == 0)
                        rax_9 = nullptr
                    
                    *arg3 = rax_9
                    return 0
                
                if (arg2 != 0x271f)
                    *arg3 = nullptr
                    rcx_5[5][2](&rcx_5[5])
                    return 0
                
                void* rax_8 = &rcx_5[8]
                
                if (rcx_5 == 0)
                    rax_8 = nullptr
                
                *arg3 = rax_8
                return 0
            
            void* rax_12 = &rcx_5[5]
            
            if (rcx_5 == 0)
                rax_12 = nullptr
            
            *arg3 = rax_12
        
        return 0

return 0x80040201
