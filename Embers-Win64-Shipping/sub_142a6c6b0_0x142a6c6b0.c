// 函数: sub_142a6c6b0
// 地址: 0x142a6c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result

if (*arg3 s<= 0)
    int64_t rdi_1 = 0
    char const (** const rbx_1)[0xa] = &data_14363ee70
    
    do
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
        sub_142a47fc0(&var_b8, 0x40)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
            sub_142a47a60(&var_78, 1, calendar=", 0xffffffff)
        int16_t rcx_2 = rax_1[1].w
        int32_t r9_2
        
        if (rcx_2 s< 0)
            r9_2 = *(rax_1 + 0xc)
        else
            r9_2 = sx.d(rcx_2) s>> 5
        
        sub_142a48d00(&var_b8, rax_1, 0, r9_2)
        sub_142a47ff0(&var_78)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
            sub_142a47e10(&var_78, *rbx_1, 0xffffffff)
        int16_t rcx_6 = rax_2[1].w
        int32_t r9_5
        
        if (rcx_6 s< 0)
            r9_5 = *(rax_2 + 0xc)
        else
            r9_5 = sx.d(rcx_6) s>> 5
        
        sub_142a48d00(&var_b8, rax_2, 0, r9_5)
        sub_142a47ff0(&var_78)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = j_sub_142a7dd00(0x40)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_c8_1 = rax_3
        
        if (rax_3 != 0)
            rax_3 = sub_142a479b0(rax_3, &var_b8)
        
        sub_142a86f50(*arg2, rax_3, arg1, arg3)
        result = sub_142a47ff0(&var_b8)
        rdi_1 += 1
        rbx_1 = &(&data_14363ee70)[rdi_1]
    while (*rbx_1 != 0)

__security_check_cookie(result_1 ^ &var_f8)
return result
