// 函数: sub_14123d970
// 地址: 0x14123d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_1412181f0(&result_1, arg1[1])
int32_t result = result_1
char var_2c
char var_18
char var_30

if (result != 0)
    if (var_18 == 0)
        if (result == 2)
            if (var_2c != 0)
                goto label_14123d9c4
            
            result.b = 0
            return result
        
    label_14123d9bd:
        char var_34
        
        if (var_34 == 0)
        label_14123d9c4:
            int32_t var_1c
            
            if (var_1c == 0)
            label_14123d9d6:
                
                if (var_1c != 2)
                    return sub_1405fba70(*arg1, 3) __tailcall
                
                char var_28
                char var_20
                
                if (var_28 == 0 && var_20 == 0)
                    return sub_1405fba70(*arg1, 3) __tailcall
            else if (sub_1411e7d10(*arg1).b != 0)
                goto label_14123d9d6
else if (var_30 == result.b && var_2c == result.b)
    goto label_14123d9bd
result.b = 0
return result
