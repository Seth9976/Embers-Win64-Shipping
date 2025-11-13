// 函数: sub_14214d810
// 地址: 0x14214d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x140)

if (rcx != 0)
    int64_t* var_18
    sub_141ccdd90(rcx, &var_18)
    int64_t* rcx_1 = var_18
    int64_t* var_10
    
    if (rcx_1 != 0)
        char rax_1 = (*(*rcx_1 + 0xb0))(rcx_1)
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                int64_t rdx_2 = *var_10
                (*rdx_2)(var_10, rdx_2)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        return zx.q(rax_1)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp2_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

int64_t* result
result.b = 0
return result
