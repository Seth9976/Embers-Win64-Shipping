// 函数: sub_142a469a0
// 地址: 0x142a469a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
sub_142a46330()
void* var_230 = &data_144015410
sub_142a860a0(&data_144015410)
char var_218[0x1ff]

if (arg1 != 0)
    sub_142a4d590(arg1, &var_218, 0x1ff, arg2)
else
    sub_142a4cc30(sub_142a4ba50(), &var_218, 0x1ff, arg2)

char var_19 = 0
struct icu_64::UObject::icu_64::Locale::VTable** result

if (*arg2 s> 0)
    result = data_144015408
else
    int64_t* rcx_2 = data_144015400
    
    if (rcx_2 != 0)
        goto label_142a46a94
    
    int64_t* rax_3 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, arg2)
    data_144015400 = rax_3
    
    if (*arg2 s> 0)
        result = data_144015408
    else
        std::ios_base::width(rax_3, sub_140a4f210)
        sub_142a7db20(6, sub_142a46e80)
        rcx_2 = data_144015400
    label_142a46a94:
        struct icu_64::UObject::icu_64::Locale::VTable** result_1 = sub_142a86c30(rcx_2, &var_218)
        result = result_1
        
        if (result_1 != 0)
            data_144015408 = result
        else
            struct icu_64::UObject::icu_64::Locale::VTable** result_2 = j_sub_142a7dd00(0xe0)
            result = result_2
            struct icu_64::UObject::icu_64::Locale::VTable** result_3 = result_2
            
            if (result_2 == 0)
                result = nullptr
            else
                *result = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
                result[5] = &result[6]
                result[0x1a] = 0
                sub_142a46dc0(result)
            
            if (result != 0)
                sub_142a46540(result, &var_218, 0)
                sub_142a86f50(data_144015400, result[5], result, arg2)
                
                if (*arg2 s> 0)
                    result = data_144015408
                else
                    data_144015408 = result
            else
                *arg2 = 7
                result = data_144015408

sub_142a860d0(&data_144015410)
__security_check_cookie(rax_1 ^ &var_258)
return result
