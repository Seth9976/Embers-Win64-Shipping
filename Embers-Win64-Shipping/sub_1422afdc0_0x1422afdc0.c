// 函数: sub_1422afdc0
// 地址: 0x1422afdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t var_28 = __security_cookie ^ &var_b8
uint64_t result

if (arg1[0x18] != arg2 || arg1[0x19] != arg3)
    result.b = 0
else
    int64_t var_90_1 = 0
    result = (*(*arg1 + 0x6a8))(arg1, 0, 0)
    uint64_t result_1 = result
    
    if (result == 0)
        result.b = 0
    else if (sub_142222800(result, arg5).b == 0 || arg4 != 0)
        if (sub_142216be0(result_1).d u<= 1)
            result.b = 0
        else
            (*(*arg1 + 0x6e8))(arg1)
            int64_t var_98 = 0
            result = sub_1422a15b0(arg1, arg3, &var_98, 1)
            uint64_t result_2 = result
            
            if (result == 0)
                result.b = 0
            else
                int64_t r9_1 = *result
                int64_t rbx_1 = var_98
                result = (*(r9_1 + 0x6a8))(result, rbx_1, 0, r9_1)
                
                if (result == 0)
                    result.b = 0
                else if (*(result_1 + 0xa0) == result)
                    result.b = 1
                else if ((*(*result_2 + 0x3e8))(result_2, rbx_1) != 0)
                    float var_58[0x3][0x4]
                    uint128_t var_88[0x3]
                    
                    if (result_2 != arg1[0x18])
                        sub_140ad7d70(&arg1[0x38], &var_58, result_2 + 0x1c0)
                    else
                        sub_141f3cf60(arg1, &var_88)
                    sub_142227c50(result, result_1, &arg1[0x38])
                    result.b = 1
                else
                    *(result_1 + 0xa0)
                    *(result_1 + 0xa0) = 0
                    (*(*arg1 + 0x588))(arg1, 0)
                    result.b = 0
    else
        result.b = 0

__security_check_cookie(var_28 ^ &var_b8)
return result
