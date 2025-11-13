// 函数: sub_142b59f60
// 地址: 0x142b59f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result
void* rbx_2 = (sx.q(arg2) << 6) + arg1

if ((*(rbx_2 + 8) & 1) == 0)
    *(rbx_2 + 8) &= 0x1f
else
    *(rbx_2 + 8) = 2

if (*arg5 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
    sub_142a47e10(&var_b8, *arg4, 0xffffffff)
    int64_t** rax_1 = sub_142a86c30(*(arg3 + 0xb8), &var_b8)
    
    if (rax_1 == 0)
        *arg5 = 2
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
        sub_142a47a60(&var_78, 0, &(*u"%variantleapcyclicNameSets")[8], 4)
        void* rax_2 = sub_142a86c30(*rax_1, &var_78)
        
        if (rax_2 == 0)
            sub_142a4ab40(rbx_2)
        else
            sub_142a49d00(rbx_2, rax_2)
        
        sub_142a47ff0(&var_78)
    
    result = sub_142a47ff0(&var_b8)

__security_check_cookie(result_1 ^ &var_e8)
return result
