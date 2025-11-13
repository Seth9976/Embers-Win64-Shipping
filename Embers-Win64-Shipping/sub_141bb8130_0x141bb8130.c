// 函数: sub_141bb8130
// 地址: 0x141bb8130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t entry_zmm1

if (sub_140e6ae00(data_143e29f28, entry_zmm1) != 0)
    int64_t* var_18
    sub_140e65f00(data_143e29f28, &var_18)
    int64_t* rdi_1 = var_18
    int64_t* var_10
    
    if (rdi_1 != 0)
        int64_t rbx_1 = *rdi_1
        sub_141bb1400()
        
        if ((*(rbx_1 + 0x58))(rdi_1, &data_143f31920) != 0)
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp3_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
            
            return 1
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

return 0
