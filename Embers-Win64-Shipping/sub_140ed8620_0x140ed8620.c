// 函数: sub_140ed8620
// 地址: 0x140ed8620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
char result = sub_140ed1a90(arg1, &var_18)

if (*(arg1 + 0xf8) != 0)
    int64_t* rcx = *(arg1 + 0xf0)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0xf8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0xf0)
            
            result = (*(*rcx_1 + 0x50))(rcx_1, &var_18)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
