// 函数: sub_142a4fc30
// 地址: 0x142a4fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t result

if (*arg4 s<= 0)
    void var_f8
    sub_142a94b10(&var_f8, arg2, arg3)
    void var_d8
    sub_142a4cc30(arg1, &var_d8, 0x9d, arg4)
    int32_t rax_2 = *arg4
    
    if (rax_2 == 0xffffff84 || rax_2 == 0xf)
        *arg4 = 1
    else if (rax_2 s<= 0)
        sub_142a4e960(&var_d8, &var_f8, arg4)
    
    int32_t result_1
    int32_t result_2
    char var_dc
    
    if (*arg4 s<= 0)
        if (var_dc == 0)
            sub_142a8c3f0(arg2, arg3, result_2, arg4)
        else
            *arg4 = 0xf
        
        result_1 = result_2
    else
        result_1 = -1
        
        if (var_dc != 0)
            result_1 = result_2
    sub_142a94b40(&var_f8)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
