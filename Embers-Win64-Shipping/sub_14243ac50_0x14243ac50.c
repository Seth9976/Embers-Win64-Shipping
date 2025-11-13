// 函数: sub_14243ac50
// 地址: 0x14243ac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx == 0)
    rcx = *(arg1 + 0xf0)
    
    if (rcx == 0)
        void* rcx_2 = data_143f5b298
        
        if (rcx_2 != 0)
            void* rax_2 = sub_1423de4b0(rcx_2, arg1)
            
            if (rax_2 != 0)
                int32_t rcx_3 = *(arg1 + 0x578)
                
                if (rcx_3 != 0 && rcx_3 - 1 s> 0)
                    void var_78
                    sub_1423fb9e0(&var_78, rax_2 + 0xd0, *(arg1 + 0x570), zx.d(*(arg1 + 0x569)))
                    int32_t var_54
                    
                    if (var_54 != 0)
                        if (sub_1424130d0(&var_78, u"listen") != 0)
                            sub_14094c030(&var_78)
                            return 2
                        
                        int32_t var_60
                        
                        if (var_60 != 0 && var_60 - 1 s> 0)
                            sub_14094c030(&var_78)
                            return 3
                    
                    sub_14094c030(&var_78)
                    return 0
                
                void* rcx_10 = *(rax_2 + 0x1a0)
                
                if (rcx_10 != 0 && *(rcx_10 + 0x64) != 0)
                    if (sub_1424130d0(rcx_10 + 0x40, u"listen") != 0)
                        return 2
                    
                    int32_t rax_11 = *(*(rax_2 + 0x1a0) + 0x58)
                    
                    if (rax_11 != 0 && rax_11 - 1 s> 0)
                        return 3
        
        return 0

return sub_142168a40(rcx) __tailcall
