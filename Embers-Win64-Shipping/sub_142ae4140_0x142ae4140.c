// 函数: sub_142ae4140
// 地址: 0x142ae4140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
char** result = __security_cookie ^ &var_c8
char** result_3 = result

if (*arg3 s<= 0)
    int32_t var_a8 = 0
    result = sub_142a68a40(arg2, arg3)
    int64_t* result_5 = result
    char** result_1 = result
    
    if (result == 0 && *arg3 s<= result.d)
        *arg3 = 7
    
    if (*arg3 s<= 0)
        result = sub_142a641c0(nullptr, sub_141a50850(arg2), arg3)
        char** result_4 = result
        char** result_2 = result
        
        if (*arg3 s<= 0)
            result = sub_142a625a0(result, "calendar", result, arg3)
            
            if (*arg3 s<= 0)
                char** rbx_1 = nullptr
                int64_t var_a0_1 = 0
                
                if ((*(*result_5 + 0xb0))(result_5) == 0)
                label_142ae429b:
                    *arg3 = 0
                    char** rax_11 = sub_142a62230(result_4, "gregorian", rbx_1, arg3)
                    rbx_1 = rax_11
                    char** var_a0_3 = rax_11
                    result = sub_142a62230(rax_11, "DateTimePatterns", rax_11, arg3)
                else
                    if (*(*(*result_5 + 0xb0))(result_5) == 0)
                        goto label_142ae429b
                    
                    void* rax_7 = (*(*result_5 + 0xb0))(result_5)
                    void* r8_2 = "gregorian" - rax_7
                    uint32_t i
                    uint32_t rdx_2
                    
                    do
                        rdx_2 = zx.d(*rax_7)
                        i = zx.d(*(rax_7 + r8_2))
                        
                        if (rdx_2 != i)
                            break
                        
                        rax_7 += 1
                    while (i != 0)
                    
                    if (rdx_2 - i == 0)
                        goto label_142ae429b
                    
                    char** rax_10 =
                        sub_142a62230(result_4, (*(*result_5 + 0xb0))(result_5), nullptr, arg3)
                    rbx_1 = rax_10
                    char** var_a0_2 = rax_10
                    result = sub_142a62230(rax_10, "DateTimePatterns", rax_10, arg3)
                    
                    if (rbx_1 == 0 || *arg3 == 2)
                        goto label_142ae429b
                
                if (*arg3 s<= 0)
                    result = sub_142a63b10(rbx_1)
                    
                    if (result.d s> 8)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                        sub_142a48100(arg1 + 0x1108, 
                            sub_142a47a60(&var_78, 1, sub_142a63b20(rbx_1, 8, &var_a8, arg3), 
                                var_a8))
                        sub_142a4a210(arg1 + 0x1108)
                        result = sub_142a47ff0(&var_78)
                    else
                        *arg3 = 3
                
                if (rbx_1 != 0)
                    result = sub_142a5f860(rbx_1)
        
        if (result_4 != 0)
            result = sub_142a5f860(result_4)
    
    if (result_5 != 0)
        result = (**result_5)(result_5, 1)

__security_check_cookie(result_3 ^ &var_c8)
return result
