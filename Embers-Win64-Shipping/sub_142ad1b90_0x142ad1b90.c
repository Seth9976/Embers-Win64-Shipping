// 函数: sub_142ad1b90
// 地址: 0x142ad1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* result

if (arg2 != 1)
    result = sub_142a72980(arg1, arg2, arg3)
else
    int32_t rax_2 = sub_142a695b0(arg1, 0, arg3)
    
    if (*arg3 s> 0)
        result = nullptr
    else if (rax_2 != data_144016680)
        int64_t* rcx_3 = data_144016670
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        sub_142b54090(rcx_3, rax_2 + 1, &var_48, arg3)
        int32_t rbx_1 = var_48:4.d
        int32_t result_1 = var_48.d - sub_142b540f0(data_144016670, rax_2, arg3)
        result = zx.q(result_1 + 1)
        
        if (rbx_1 == 1 && var_40_1 == rbx_1)
            result = zx.q(result_1)
    else
        result = (*(*arg1 + 0xf0))(arg1, 1, 3)

__security_check_cookie(rax_1 ^ &var_68)
return result
