// 函数: sub_142a5bca0
// 地址: 0x142a5bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result
int32_t* rbx = arg3

if (*arg3 s<= 0)
    void* r8 = arg1[0x2e]
    
    if (r8 != 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
        sub_142abf490(&var_58, arg2, *(r8 + 8), 0, rbx)
        (*(*arg1 + 0x228))(arg1, &var_58, rbx)
        result = sub_142a47ff0(&var_58)
    else
        *rbx = 7

__security_check_cookie(result_1 ^ &var_98)
return result
