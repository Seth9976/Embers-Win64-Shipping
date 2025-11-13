// 函数: sub_142a588f0
// 地址: 0x142a588f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* result

if (*arg3 s> 0)
    result = nullptr
else if (arg2 == 1)
    int64_t* result_1 = nullptr
    int64_t* rax_2 = sub_142ab2a40(arg3)
    
    if (*arg3 s<= 0)
        int32_t var_110_1 = 0
        char var_10c_1 = 0
        struct icu_64::CacheKey<class icu_64::SharedNumberFormat>::icu_64::LocaleCacheKey<class icu_64::SharedNumberFormat>::VTable
            * const var_118 = &icu_64::LocaleCacheKey<class icu_64::SharedNumberFormat>::`vftable'{for `icu_64::CacheKey<class icu_64::SharedNumberFormat>'}
        struct icu_64::UObject::icu_64::Locale::VTable* var_108
        sub_142a456d0(&var_108, arg1)
        
        if (*arg3 s<= 0)
            int32_t var_138 = 0
            int64_t* result_3 = nullptr
            sub_142ab2200(rax_2, &var_118, &result_3, 0, &var_138)
            int64_t* result_2 = result_3
            int32_t rax_3 = var_138
            
            if (rax_3 s> 0)
                goto label_142a589c5
            
            if (result_2 != 0)
                result_1 = result_2
                sub_142aa6d40(result_2)
                rax_3 = var_138
            label_142a589c5:
                
                if (result_2 != 0)
                    sub_142aa6d70(result_2)
                    rax_3 = var_138
            
            if (*arg3 == 0 || rax_3 s> 0)
                *arg3 = rax_3
        
        var_118 = &icu_64::LocaleCacheKey<class icu_64::SharedNumberFormat>::`vftable'{for `icu_64::CacheKey<class icu_64::SharedNumberFormat>'}
        sub_142a45a20(&var_108)
        var_118 = &icu_64::CacheKey<class icu_64::SharedNumberFormat>::`vftable'{for `icu_64::CacheKeyBase'}
        sub_142ab1f20(&var_118)
    
    result = result_1
else
    *arg3 = 0x10
    result = nullptr

__security_check_cookie(rax_1 ^ &var_168)
return result
