// 函数: sub_142b50a60
// 地址: 0x142b50a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char* var_118 = arg2
void var_100
uint64_t result = (*(*arg3 + 0x50))(arg3, &var_100, arg5)

if (*arg5 s<= 0)
    int32_t r15_1 = 0
    result = sub_142ac2da0(&var_100, 0, &var_118, arg3)
    
    while (result.b != 0)
        result = (*(*arg3 + 0x10))(arg3)
        
        if (result.d == 2)
            char* rdi_1 = var_118
            
            if (*arg5 s> 0)
                break
            
            result = sub_142a86c30(*(arg1 + 0x10), rdi_1)
            uint64_t result_1 = result
            
            if (result != 0)
            label_142b50cf9:
                
                if (result_1 != "<dummy>")
                    result = (*(*result_1 + 0x10))(result_1, rdi_1, arg3, zx.q(arg4), arg5)
            else
                int64_t rax_4 = -1
                
                do
                    rax_4 += 1
                while (rdi_1[rax_4] != 0)
                
                char rax_6
                
                if (rax_4 u< 5 || *rdi_1 != 0x6174656d || rdi_1[4] != 0x3a)
                    rax_6 = 0
                else
                    rax_6 = 1
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_13
                
                if (rax_6 == 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                    sub_142b51140(arg1, &var_98, rdi_1)
                    void* rax_9 = sub_142a4a210(&var_98)
                    
                    if (sub_142a86c30(*(*(arg1 + 8) + 0xf0), rax_9) == 0)
                        uint64_t result_3 = j_sub_142a7dd00(0x40)
                        result_1 = result_3
                        uint64_t result_5 = result_3
                        
                        if (result_3 == 0)
                            result_1 = 0
                        else
                            *result_1 =
                                &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
                            __builtin_memset(result_1 + 8, 0, 0x30)
                            *(result_1 + 0x38) = 0
                        
                        if (result_1 != 0)
                            goto label_142b50ca9
                        
                        *arg5 = 7
                        result = sub_142a47ff0(&var_98)
                    else
                        result_1 = "<dummy>"
                    label_142b50ca9:
                        rcx_13 = &var_98
                    label_142b50cb1:
                        sub_142a47ff0(rcx_13)
                        result = sub_142b4e3d0(arg1, rdi_1, arg5)
                        
                        if (*arg5 s<= 0)
                            result = sub_142a86f50(*(arg1 + 0x10), result, result_1, arg5)
                            
                            if (*arg5 s> 0)
                                break
                            
                            goto label_142b50cf9
                        
                        if (result_1 != "<dummy>" && result_1 != 0)
                            result = (**result_1)(result_1, 1)
                else
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
                    sub_142b507c0(arg1, &var_d8, rdi_1)
                    void* rax_7 = sub_142a4a210(&var_d8)
                    
                    if (sub_142a86c30(*(*(arg1 + 8) + 0xf8), rax_7) != 0)
                        result_1 = "<dummy>"
                    label_142b50bfa:
                        rcx_13 = &var_d8
                        goto label_142b50cb1
                    
                    uint64_t result_2 = j_sub_142a7dd00(0x40)
                    result_1 = result_2
                    uint64_t result_4 = result_2
                    
                    if (result_2 == 0)
                        result_1 = 0
                    else
                        *result_1 =
                            &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
                        __builtin_memset(result_1 + 8, 0, 0x30)
                        *(result_1 + 0x38) = 0
                    
                    if (result_1 != 0)
                        goto label_142b50bfa
                    
                    *arg5 = 7
                    result = sub_142a47ff0(&var_d8)
        
        if (*arg5 s> 0)
            break
        
        r15_1 += 1
        result = sub_142ac2da0(&var_100, r15_1, &var_118, arg3)

__security_check_cookie(rax_1 ^ &var_148)
return result
