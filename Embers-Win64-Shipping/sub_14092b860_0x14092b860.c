// 函数: sub_14092b860
// 地址: 0x14092b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x38) != 0)
    int64_t* rcx = *(arg1 + 0x1e8)
    char rax = (*(*rcx + 0x118))(rcx)
    
    if (rax != 0)
    label_14092b9a7:
        
        if ((*(arg2 + 0x3a) != 0
                && (*(arg2 + 0xe0) != 4 || (*(arg2 + 0x39) != 0 && *(arg2 + 0xac) s> 0)))
                || *(arg2 + 0x3f) != 0 || *(arg2 + 0x40) != 0)
            return 1
    else
        int64_t* rcx_1 = *(arg1 + 0x1e8)
        int64_t* var_28
        (*(*rcx_1 + 0x80))(rcx_1, &var_28)
        int64_t* rcx_2 = var_28
        int64_t* var_20
        
        if (rcx_2 != 0)
            int64_t* var_18
            (*(*rcx_2 + 0xf0))(rcx_2, &var_18, zx.q(*(arg2 + 0xb8)))
            int64_t* rcx_5 = var_18
            
            if (rcx_5 != 0)
                rax = (**rcx_5)(rcx_5, *(arg2 + 8))
            
            int64_t rbp
            
            if (rcx_5 == 0 || rax == 0)
                rbp.b = 0
            else
                rbp.b = 1
            
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp4_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t rdi_3 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (rdi_3 == 1)
                        (*(*var_20 + 8))(var_20, zx.q(rdi_3))
            
            if (rbp.b != 0)
                goto label_14092b9a7
        else if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rdi_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return 0
