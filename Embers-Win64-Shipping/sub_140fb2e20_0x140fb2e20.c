// 函数: sub_140fb2e20
// 地址: 0x140fb2e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
sub_140fb64e0(arg1, arg2)

if (*result == 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    void var_18
    int64_t* rax_1 = sub_140fbc770(&var_18, arg2, &var_28)
    
    if (result != rax_1)
        *result = *rax_1
        *rax_1 = 0
        int64_t rcx_2 = rax_1[1]
        int64_t* rdi_1 = result[1]
        
        if (rcx_2 != rdi_1)
            rax_1[1] = 0
            result[1] = rcx_2
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

return result
