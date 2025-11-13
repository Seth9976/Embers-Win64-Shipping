// 函数: sub_140941ba0
// 地址: 0x140941ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x118))() == 0)
    int64_t* var_28
    (*(*arg1 + 0x80))(arg1, &var_28)
    int64_t* rcx_1 = var_28
    int64_t* var_20
    
    if (rcx_1 != 0)
        int32_t rdi_1 = 0
        
        while (true)
            int64_t var_18
            (*(*rcx_1 + 0xf0))(arg3, &var_18, zx.q(rdi_1))
            int64_t rdx_2 = var_18
            int64_t* var_10
            
            if (rdx_2 != 0 && (**arg2)(arg2, rdx_2) != 0)
                if (var_10 != 0)
                    var_10[1].d -= 1
                    
                    if (var_10[1].d == 1)
                        (**var_10)(var_10)
                        int32_t temp6_1 = *(var_10 + 0xc)
                        *(var_10 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*var_10 + 8))(var_10, 1)
                
                if (var_20 != 0)
                    var_20[1].d -= 1
                    
                    if (var_20[1].d == 1)
                        (**var_20)(var_20)
                        int32_t rbx_3 = *(var_20 + 0xc)
                        *(var_20 + 0xc) -= 1
                        
                        if (rbx_3 == 1)
                            (*(*var_20 + 8))(var_20, zx.q(rbx_3))
                
                return 1
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp3_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
            
            rdi_1 += 1
            
            if (rdi_1 s>= 4)
                break
            
            rcx_1 = var_28
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rbx_4 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rbx_4))

return 0
