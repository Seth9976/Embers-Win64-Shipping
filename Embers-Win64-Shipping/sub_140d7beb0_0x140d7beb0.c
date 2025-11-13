// 函数: sub_140d7beb0
// 地址: 0x140d7beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x20) != 0)
    int64_t* rcx = *(arg1 - 0x18)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t var_18
        
        if (arg2 == 0x2719)
            void*** rax_15 = j_sub_140a82f30(0x60)
            void*** rcx_11
            
            if (rax_15 == 0)
                rcx_11 = nullptr
            else
                var_18 = *(arg1 - 0x18)
                void* rcx_9 = *(arg1 - 0x10)
                void* var_10_2 = rcx_9
                
                if (rcx_9 != 0)
                    *(rcx_9 + 8) += 1
                
                rcx_11 = sub_140d71950(rax_15, *(arg1 - 0x20), &var_18)
            
            void* rax_17 = &rcx_11[0xb]
            
            if (rcx_11 == 0)
                rax_17 = nullptr
            
            *arg3 = rax_17
            return 0
        
        char rax_4
        
        if (*(arg1 - 0x20) != 0)
            int64_t* rcx_1 = *(arg1 - 0x18)
            rax_4 = (*(*rcx_1 + 0x10))(rcx_1)
        
        int32_t rdi_1
        
        if (*(arg1 - 0x20) == 0 || rax_4 == 0)
            rdi_1 = -0x7ffbfdff
        else
            rdi_1 = 0
            
            if (sub_140d89510(arg1 - 0x28, arg2, arg4) != 0)
                void*** rax_6 = j_sub_140a82f30(0x60)
                void*** rcx_6
                
                if (rax_6 == 0)
                    rcx_6 = nullptr
                else
                    var_18 = *(arg1 - 0x18)
                    void* rcx_4 = *(arg1 - 0x10)
                    void* var_10_1 = rcx_4
                    
                    if (rcx_4 != 0)
                        *(rcx_4 + 8) += 1
                    
                    rcx_6 = sub_140d71950(rax_6, *(arg1 - 0x20), &var_18)
                
                if (arg2 == 0x2710)
                    void* rax_13 = &rcx_6[5]
                    
                    if (rcx_6 == 0)
                        rax_13 = nullptr
                    
                    *arg3 = rax_13
                else if (arg2 == 0x2712)
                    void* rax_12 = &rcx_6[0xa]
                    
                    if (rcx_6 == 0)
                        rax_12 = nullptr
                    
                    *arg3 = rax_12
                else if (arg2 == 0x2713)
                    void* rax_11 = &rcx_6[6]
                    
                    if (rcx_6 == 0)
                        rax_11 = nullptr
                    
                    *arg3 = rax_11
                else if (arg2 == 0x271e)
                    void* rax_10 = &rcx_6[7]
                    
                    if (rcx_6 == 0)
                        rax_10 = nullptr
                    
                    *arg3 = rax_10
                else if (arg2 == 0x271f)
                    void* rax_9 = &rcx_6[8]
                    
                    if (rcx_6 == 0)
                        rax_9 = nullptr
                    
                    *arg3 = rax_9
                else
                    *arg3 = nullptr
                    rcx_6[5][2](&rcx_6[5])
        
        return zx.q(rdi_1)

return 0x80040201
