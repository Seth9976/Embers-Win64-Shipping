// 函数: sub_142b68e10
// 地址: 0x142b68e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_68
int16_t var_58[0x20]
int16_t* result = sub_142b1e1a0(*(arg1 + 8), arg2, &var_58, &var_68)

if (result != 0)
    if (result != &var_58)
        sub_142a4aa20(arg3, 0, result, var_68)
    else
        int32_t rdi_1 = var_68
        sub_142a4afe0(arg3)
        int16_t rax_2 = *(arg3 + 8)
        int32_t r8_2
        
        if (rax_2 s< 0)
            r8_2 = *(arg3 + 0xc)
        else
            r8_2 = sx.d(rax_2) s>> 5
        
        sub_142a49390(arg3, 0, r8_2, &var_58, 0, rdi_1)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_98)
return result
