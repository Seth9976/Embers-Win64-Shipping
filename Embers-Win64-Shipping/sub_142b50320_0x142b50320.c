// 函数: sub_142b50320
// 地址: 0x142b50320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142b50530(arg1, arg2, arg3)
int64_t* result = (*(*arg1 + 0x20))(arg1, arg2, arg3)
int64_t* result_2 = result
int64_t* result_1 = result

if (*arg3 s<= 0)
    result = (*(*result + 0x30))(result_2, arg3)
    
    if (result != 0)
        while (*arg3 s<= 0)
            sub_142b50130(arg1, result, arg3)
            result = (*(*result_2 + 0x30))(result_2, arg3)
            
            if (result == 0)
                break

if (result_2 == 0)
    return result

return (**result_2)(result_2, 1)
