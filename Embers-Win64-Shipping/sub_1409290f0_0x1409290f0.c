// 函数: sub_1409290f0
// 地址: 0x1409290f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s< 4; i += 1)
    int64_t* var_18
    (*(*arg1 + 0xf0))(arg1, &var_18, zx.q(i))
    int64_t* rcx_1 = var_18
    int64_t* var_10
    
    if (rcx_1 != 0 && (**rcx_1)(rcx_1, arg2) != 0)
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                int64_t r8_2 = *var_10
                (*r8_2)(var_10, arg3, r8_2)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_3 = *var_10
                    (*(r8_3 + 8))(var_10, 1, r8_3)
        
        return zx.q(i)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

return 0xffffffff
