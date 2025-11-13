// 函数: sub_142a979d0
// 地址: 0x142a979d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
struct icu_64::FilteredBreakIteratorBuilder::icu_64::SimpleFilteredBreakIteratorBuilder::VTable** 
    var_b8 = arg1
*arg1 = &icu_64::SimpleFilteredBreakIteratorBuilder::`vftable'{for `icu_64::FilteredBreakIteratorBuilder'}
void* var_c8 = &arg1[1]
sub_142ae6ec0(&arg1[1], sub_140a4f210, sub_142a4b070, 1, arg3)
arg1[1] = &icu_64::UStringSet::`vftable'{for `icu_64::UVector'}

if (*arg3 s<= 0)
    char** rbx_1 = nullptr
    var_c8.d = 0
    char** rax_3 = sub_142a641c0("icudt64l-brkitr", sub_141a50850(arg2), &var_c8)
    char** var_b0_1 = rax_3
    int32_t rax_4 = var_c8.d
    
    if (rax_4 s> 0 || rax_4 == 0xffffff81)
        *arg3 = rax_4
    else
        char** rax_5 = sub_142a62230(rax_3, "exceptions", nullptr, &var_c8)
        char** var_a8_1 = rax_5
        int32_t rax_6 = var_c8.d
        
        if (rax_6 s> 0 || rax_6 == 0xffffff81)
            *arg3 = rax_6
        label_142a97b99:
            
            if (rax_5 != 0)
                sub_142a5f860(rax_5)
        else
            char** rax_7 = sub_142a62230(rax_5, "SentenceBreak", nullptr, &var_c8)
            char** var_a0_1 = rax_7
            int32_t rax_8 = var_c8.d
            
            if (rax_8 s<= 0 && rax_8 != 0xffffff81)
                var_c8.d = *arg3
                
                while (true)
                    char** rax_10 = sub_142a63800(rax_7, rbx_1, &var_c8)
                    rbx_1 = rax_10
                    char** var_98_1 = rax_10
                    int32_t rax_11 = var_c8.d
                    
                    if (rax_10 == 0)
                        if (rax_11 s<= 0)
                            break
                    else if (rax_11 s<= 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        sub_142a93930(&var_88, rbx_1, arg3)
                        sub_142a980d0(&arg1[1], &var_88, arg3)
                        sub_142a47ff0(&var_88)
                        rax_11 = var_c8.d
                        
                        if (rax_11 s<= 0)
                            continue
                    
                    if (rax_11 == 8)
                        break
                    
                    if (*arg3 s<= 0)
                        *arg3 = rax_11
                    
                    break
                
                if (rbx_1 != 0)
                    sub_142a5f860(rbx_1)
                
                if (rax_7 != 0)
                    sub_142a5f860(rax_7)
                
                goto label_142a97b99
            
            *arg3 = rax_8
            
            if (rax_7 != 0)
                sub_142a5f860(rax_7)
            
            if (rax_5 != 0)
                sub_142a5f860(rax_5)
    
    if (rax_3 != 0)
        sub_142a5f860(rax_3)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
