// 函数: sub_142a73d20
// 地址: 0x142a73d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_258 = -2
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
struct icu_64::UObject::VTable** result

if (*arg4 s> 0)
    result = nullptr
else if ((arg2 & 0xfffffc40) != 0)
    *arg4 = 0x1030b
    result = nullptr
else if (arg2.b s>= 0)
    struct icu_64::UObject::icu_64::RegexPattern::VTable** rax_2 = j_sub_142a7dd00(0xd8)
    struct icu_64::UObject::icu_64::RegexPattern::VTable** var_250_1 = rax_2
    struct icu_64::UObject::VTable** result_1
    
    if (rax_2 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142a73860(rax_2)
    
    if (result_1 != 0)
        int32_t rax_4 = result_1[0xf].d
        
        if (rax_4 s<= 0)
            result_1[3].d = arg2
            struct icu_64::RegexCompile::VTable* var_248
            sub_142aeb4b0(&var_248, result_1, arg4)
            sub_142aeb9f0(&var_248, arg1, arg3, arg4)
            
            if (*arg4 s> 0)
                *result_1 = &icu_64::RegexPattern::`vftable'{for `icu_64::UObject'}
                sub_142a74570(result_1)
                sub_142a47ff0(&result_1[5])
                sub_142a47900(result_1)
                sub_142a47920(result_1)
                result_1 = nullptr
            
            sub_142aeb5b0(&var_248)
            result = result_1
        else
            *arg4 = rax_4
            *result_1 = &icu_64::RegexPattern::`vftable'{for `icu_64::UObject'}
            sub_142a74570(result_1)
            sub_142a47ff0(&result_1[5])
            sub_142a47900(result_1)
            sub_142a47920(result_1)
            result = nullptr
    else
        *arg4 = 7
        result = nullptr
else
    *arg4 = 0x10305
    result = nullptr

__security_check_cookie(rax_1 ^ &var_278)
return result
