// 函数: sub_142a6d2a0
// 地址: 0x142a6d2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result_2 = nullptr
int32_t var_58 = 0
int32_t* var_68 = &var_58
char var_40[0x8]
struct icu_64::DateFormat::icu_64::Win32DateFormat::VTable** result_1

if (sub_142a46470(arg3, "compat", &var_40, 8) s> 0)
    int64_t rcx_1 = 0
    
    while (true)
        char rax_3 = var_40[rcx_1]
        rcx_1 += 1
        
        if (rax_3 != *(rcx_1 + 0x14363d4bf))
            break
        
        if (rcx_1 == 5)
            struct icu_64::UObject::icu_64::Format::VTable** rax_4 = j_sub_142a7dd00(0x2a0)
            struct icu_64::UObject::icu_64::Format::VTable** var_50_1 = rax_4
            
            if (rax_4 == 0)
                result_1 = nullptr
            else
                result_1 = sub_142ae5de0(rax_4, arg1, arg2, arg3, &var_58)
            
            if (var_58 s<= 0)
                goto label_142a6d362_1
            
            if (result_1 != 0)
                (*result_1)->__offset(0x0).q(result_1, 1)
            
            goto label_142a6d379

label_142a6d379:
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result

if (arg2 == 0xffffffff || (arg2 - 4).b s>= 0)
label_142a6d3dc:
    struct icu_64::UObject::icu_64::Format::VTable** rax_10 = j_sub_142a7dd00(0x360)
    struct icu_64::UObject::icu_64::Format::VTable** var_50_3 = rax_10
    
    if (rax_10 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142ad7300(rax_10, arg1, arg2, arg3, &var_58)
    
    if (var_58 s<= 0)
    label_142a6d362:
        result = result_1
    else
        if (result_1 != 0)
            (*result_1)->__offset(0x0).q(result_1, 1)
        
        var_58 = 0
        struct icu_64::UObject::icu_64::Format::VTable** rax_13 = j_sub_142a7dd00(0x360)
        struct icu_64::UObject::icu_64::Format::VTable** var_50_4 = rax_13
        
        if (rax_13 != 0)
            result_2 = sub_142ad7140(rax_13, arg3, &var_58)
        
        if (var_58 s> 0)
            if (result_2 != 0)
                (*result_2)->__offset(0x0).q(result_2, 1)
            
            result = nullptr
        else
            result = result_2
else
    struct icu_64::UObject::icu_64::Format::VTable** rax_7 = j_sub_142a7dd00(0x2f8)
    struct icu_64::UObject::icu_64::Format::VTable** var_50_2 = rax_7
    
    if (rax_7 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142ae4880(rax_7, arg1, arg2 - 4, arg3, &var_58)
    
    if (var_58 s> 0)
        if (result_1 != 0)
            (*result_1)->__offset(0x0).q(result_1, 1)
        
        var_58 = 0
        goto label_142a6d3dc
    
label_142a6d362_1:
    result = result_1

__security_check_cookie(rax_1 ^ &var_88)
return result
