// 函数: sub_1420c2d70
// 地址: 0x1420c2d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141e5f980()

if (result != 0)
    void var_18
    int64_t rdi_1 = *sub_141e60b50(result, &var_18, arg1, arg2, arg3)
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    if (rdi_1 != 0)
        result.b = 1
        return result

result.b = 0
return result
