// 函数: sub_140954b10
// 地址: 0x140954b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140963c50()

if (result != 0)
    int64_t* result_1 = nullptr
    int32_t var_50_1 = 0
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_1407473e0(&var_28, arg2)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_1407473e0(&var_38, &var_28)
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_1407473e0(&var_48, &var_38)
    void*** rax = sub_140a84c80(0, 0x30, 0)
    
    if (rax != 0)
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1407473e0(&var_18, &var_48)
        sub_140947ff0(rax, arg1, sub_14096c9f0, &var_18)
    
    sub_140745b20(&var_48)
    sub_140745b20(&var_38)
    
    if (rax != 0)
        (*rax)[8](rax, &result_1)
    else if (var_50_1 != 0)
        int64_t* result_2 = result_1
        
        if (result_2 != 0)
            (*(*result_2 + 0x38))(result_2, 0)
            int64_t* result_3 = result_1
            
            if (result_3 != 0)
                result_1 = sub_140a84c80(result_3, 0, 0)
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        int64_t rax_5 = sub_140a84c80(rax, 0, 0)
        
        if (rax_5 != 0)
            sub_140a74f90(rax_5)
    
    sub_140745b20(&var_28)
    result = (*(*result + 0x30))(result, &result_1)
    
    if (var_50_1 == 0)
        result = result_1
    label_140954c9f:
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        int64_t* result_4 = result_1
        
        if (result_4 != 0)
            (*(*result_4 + 0x38))(result_4, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_50_2 = 0
            goto label_140954c9f

return result
