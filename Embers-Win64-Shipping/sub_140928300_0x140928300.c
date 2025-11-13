// 函数: sub_140928300
// 地址: 0x140928300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
(*(*arg1 + 0xf0))(arg1, &var_18)
int64_t r8 = var_18

if (r8 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* var_28
    (*(*arg1 + 0xe0))(arg1, &var_28, r8)
    int64_t* rcx_1 = var_28
    int64_t* var_20
    
    if (rcx_1 == 0)
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp4_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        *arg2 = 0
        arg2[1] = 0
    else
        (*(*rcx_1 + 0x30))(rcx_1, arg2)
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp5_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
