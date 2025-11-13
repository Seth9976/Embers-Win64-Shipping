// 函数: sub_142a9b460
// 地址: 0x142a9b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result_1 = 0
int64_t result

if (*arg5 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    sub_142a47e10(&var_78, *(arg2 + 0x28), 0xffffffff)
    char var_70
    
    if ((var_70 & 1) == 0)
        int64_t* rax_3 = (*(*arg1 + 0xb0))(arg1, &var_78, zx.q(arg3), arg5, var_c8)
        
        if (rax_3 != 0)
            if (arg4 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_b0_1 = 2
                int64_t result_2 = (*(*arg1 + 0x30))(arg1, rax_3, &var_b8, arg5)
                result_1 = result_2
                
                if (result_2 != 0)
                    sub_142a9a5e0(&var_b8)
                    sub_142aa7250(&var_b8, arg4)
                
                sub_142a47ff0(&var_b8)
            else
                result_1 = sub_142a99cd0(arg1, rax_3, arg5)
            
            (**rax_3)(rax_3, 1)
    else
        *arg5 = 7
    
    sub_142a47ff0(&var_78)
    result = result_1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
