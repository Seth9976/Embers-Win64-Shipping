// 函数: sub_1403dacb0
// 地址: 0x1403dacb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = *(arg1 + 0x154)

if ((rax_2.b & 1) == 0)
    png_error(arg1, "Out of place tIME chunk")
    noreturn

int32_t result

if (arg2 == 0 || (*(arg2 + 9) & 2) == 0)
    if ((rax_2.b & 4) != 0)
        *(arg1 + 0x154) = rax_2 | 8
    
    if (arg3 != 7)
        png_warning(arg1, "Incorrect tIME chunk length")
        result = sub_1403d8880(arg1, arg3)
    else
        int16_t var_27
        sub_1403cc480(arg1, &var_27, 7)
        sub_1403be770(arg1, &var_27, 7)
        result = sub_1403d8880(arg1, 0)
        
        if (result == 0)
            char var_21
            result.b = var_21
            char var_2a_1 = result.b
            int32_t var_25
            int32_t var_2e_1 = var_25
            int16_t var_30 = rol.w(var_27, 8)
            result = png_set_tIME(arg1, arg2, &var_30)
else
    png_warning(arg1, "Duplicate tIME chunk")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_58)
return result
