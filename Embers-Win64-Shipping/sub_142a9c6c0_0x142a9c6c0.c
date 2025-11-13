// 函数: sub_142a9c6c0
// 地址: 0x142a9c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* result = nullptr
int32_t var_110 = 0
char var_10c = 0
struct icu_64::CacheKey<struct icu_64::CollationCacheEntry>::icu_64::LocaleCacheKey<struct icu_64::CollationCacheEntry>::VTable
    * const var_118 = &icu_64::LocaleCacheKey<struct icu_64::CollationCacheEntry>::`vftable'{for `icu_64::CacheKey<struct icu_64::CollationCacheEntry>'}
struct icu_64::UObject::icu_64::Locale::VTable* var_108
sub_142a456d0(&var_108, &arg1[0x1e])

if (*arg2 s<= 0)
    int32_t var_138 = 0
    int64_t* result_2 = nullptr
    sub_142ab2200(*arg1, &var_118, &result_2, arg1, &var_138)
    int64_t* result_1 = result_2
    int32_t rax_2 = var_138
    
    if (rax_2 s> 0)
        goto label_142a9c76a
    
    if (result_1 != 0)
        result = result_1
        sub_142aa6d40(result_1)
        rax_2 = var_138
    label_142a9c76a:
        
        if (result_1 != 0)
            sub_142aa6d70(result_1)
            rax_2 = var_138
    
    if (*arg2 == 0 || rax_2 s> 0)
        *arg2 = rax_2

var_118 = &icu_64::LocaleCacheKey<struct icu_64::CollationCacheEntry>::`vftable'{for `icu_64::CacheKey<struct icu_64::CollationCacheEntry>'}
sub_142a45a20(&var_108)
var_118 =
    &icu_64::CacheKey<struct icu_64::CollationCacheEntry>::`vftable'{for `icu_64::CacheKeyBase'}
sub_142ab1f20(&var_118)
__security_check_cookie(rax_1 ^ &var_168)
return result
