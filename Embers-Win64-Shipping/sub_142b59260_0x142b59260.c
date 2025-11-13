// 函数: sub_142b59260
// 地址: 0x142b59260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void var_138
sub_142a6a060(arg1 + 0x10, &var_138, 0x100, arg3)
int64_t* result

if (*arg3 s> 0)
    result = nullptr
else
    int64_t* result_2 = j_sub_142a7dd00(0x4f0)
    int64_t* result_1 = result_2
    int64_t* result_3 = result_2
    
    if (result_2 == 0)
        result_1 = result_2
    else
        result_1[1] = 0
        result_1[2] = 0
        *result_1 = &icu_64::SharedDateFormatSymbols::`vftable'{for `icu_64::SharedObject'}
        void* var_148_1 = &result_1[3]
        result_1[3] = &icu_64::DateFormatSymbols::`vftable'{for `icu_64::UObject'}
        result_1[0x2a] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        result_1[0x2b].w = 2
        sub_142a459c0(&result_1[0x43])
        result_1[0x5f] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        result_1[0x60].w = 2
        sub_142b5a060(&result_1[3], arg1 + 0x10, &var_138, arg3, 0)
    
    if (result_1 == 0)
        *arg3 = 7
        result = nullptr
    else if (*arg3 s<= 0)
        sub_142aa6d40(result_1)
        result = result_1
    else
        (**result_1)(result_1, 1)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_188)
return result
