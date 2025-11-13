// 函数: sub_142ab9cb0
// 地址: 0x142ab9cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = __security_cookie ^ &var_c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_2 = result

if (*arg4 s<= 0)
    int32_t var_a8 = 0xffffffff
    
    if (arg2 != 0)
        result = sub_142a86e70(*arg2, &var_a8)
        
        if (result != 0)
            while (true)
                void* rbp_1 = result[2]
                void* rbx_1 = result[1]
                result = j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_1 = result
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_3
                
                if (result == 0)
                    result_3 = nullptr
                else
                    result = sub_142a479b0(result, rbx_1)
                    result_3 = result
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_4 = result_3
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_5 = result_4
                
                if (result_3 == 0 && *arg4 s<= result_3.d)
                    *arg4 = 7
                
                if (*arg4 s<= 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                        sub_142a479b0(&var_78, rbp_1)
                    result_4 = nullptr
                    int64_t var_a0_1 = 0
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
                        j_sub_142a7dd00(0x40)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_88_1 = rax_2
                    
                    if (rax_2 != 0)
                        rax_2 = sub_142a479b0(rax_2, rax_1)
                    
                    sub_142a86f50(*arg3, rax_2, result_3, arg4)
                    result = sub_142a47ff0(&var_78)
                    
                    if (*arg4 s<= 0)
                        result = sub_142a86e70(*arg2, &var_a8)
                        
                        if (result == 0)
                            break
                        
                        continue
                
                if (result_4 == 0)
                    break
                
                result = (*result_4)->__offset(0x0).q(result_4, 1)
                break

__security_check_cookie(result_2 ^ &var_c8)
return result
