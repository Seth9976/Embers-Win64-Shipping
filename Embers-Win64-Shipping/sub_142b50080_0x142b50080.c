// 函数: sub_142b50080
// 地址: 0x142b50080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_2 = result

if (*arg4 s<= 0)
    char var_b8[0x90]
    sub_142b50700(arg3, &var_b8)
    int32_t result_1 = 0
    __builtin_memset(&arg1[1], 0, 0x30)
    arg1[7] = 0
    sub_142a61e60(arg2, &var_b8, arg1, &result_1)
    result = zx.q(result_1)
    
    if (result.d s<= 0)
        *arg4 = result.d

__security_check_cookie(result_2 ^ &var_e8)
return result
