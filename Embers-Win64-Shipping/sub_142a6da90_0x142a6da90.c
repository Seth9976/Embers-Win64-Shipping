// 函数: sub_142a6da90
// 地址: 0x142a6da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d0 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t* rsi = arg4
int64_t* r14 = nullptr
int32_t var_1d8 = 0
int64_t* rax_2 = sub_142ab2a40(arg4)

if (*rsi s<= 0)
    int32_t var_1c0_1 = 0
    char var_1bc_1 = 0
    struct icu_64::CacheKey<class icu_64::DateFmtBestPattern>::icu_64::LocaleCacheKey<class icu_64::DateFmtBestPattern>::VTable
        * const var_1c8 = &icu_64::LocaleCacheKey<class icu_64::DateFmtBestPattern>::`vftable'{for `icu_64::CacheKey<class icu_64::DateFmtBestPattern>'}
    struct icu_64::UObject::icu_64::Locale::VTable* var_1b8
    sub_142a456d0(&var_1b8, arg2)
    var_1c8 = &icu_64::DateFmtBestPatternKey::`vftable'{for `icu_64::LocaleCacheKey<class icu_64::DateFmtBestPattern>'}
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
    sub_142ae4580(&var_d8, arg3)
    
    if (*rsi s> 0)
        *arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        arg1[1].w = 2
    else
        int32_t var_1e8 = 0
        int64_t* var_1e0 = nullptr
        sub_142ab2200(rax_2, &var_1c8, &var_1e0, 0, &var_1e8)
        int64_t* rdi_1 = var_1e0
        int32_t rax_3 = var_1e8
        
        if (rax_3 s> 0)
            goto label_142a6db95
        
        if (rdi_1 != 0)
            r14 = rdi_1
            sub_142aa6d40(rdi_1)
            rax_3 = var_1e8
        label_142a6db95:
            
            if (rdi_1 != 0)
                sub_142aa6d70(rdi_1)
                rax_3 = var_1e8
        
        if (*rsi == 0 || rax_3 s> 0)
            *rsi = rax_3
        
        if (*rsi s> 0)
            *arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            arg1[1].w = 2
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
            sub_142a479b0(&var_98, &r14[3])
            sub_142aa6d70(r14)
            sub_142a47930(arg1, &var_98)
            sub_142a47ff0(&var_98)
    
    var_1c8 = &icu_64::DateFmtBestPatternKey::`vftable'{for `icu_64::LocaleCacheKey<class icu_64::DateFmtBestPattern>'}
    sub_142a47ff0(&var_d8)
    var_1c8 = &icu_64::LocaleCacheKey<class icu_64::DateFmtBestPattern>::`vftable'{for `icu_64::CacheKey<class icu_64::DateFmtBestPattern>'}
    sub_142a45a20(&var_1b8)
    var_1c8 =
        &icu_64::CacheKey<class icu_64::DateFmtBestPattern>::`vftable'{for `icu_64::CacheKeyBase'}
    sub_142ab1f20(&var_1c8)
else
    *arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    arg1[1].w = 2

__security_check_cookie(rax_1 ^ &var_218)
return arg1
