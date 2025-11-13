// 函数: sub_142abd9a0
// 地址: 0x142abd9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_ee0 = -2
void var_fa8
int64_t rax_1 = __security_cookie ^ &var_fa8
struct icu_64::UObject::icu_64::Locale::VTable* var_c28
sub_142a5d0b0(arg2, &var_c28)
struct icu_64::number::impl::AffixPatternProvider::VTable* var_e18 = &icu_64::number::impl::PropertiesAffixPatternProvider::`vftable'{for `icu_64::number::impl::AffixPatternProvider'}
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e10 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_e08 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_dd0 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_dc8 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d90 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_d88 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d50 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_d48 = 2
char var_d0f = 1
struct icu_64::number::impl::AffixPatternProvider::VTable* var_6b8 = &icu_64::number::impl::CurrencyPluralInfoAffixProvider::`vftable'{for `icu_64::number::impl::AffixPatternProvider'}
int64_t (* var_f88)(struct icu_64::number::impl::AffixPatternProvider::VTable** arg1) =
    sub_142a5b560
void var_6b0
`eh vector constructor iterator'(&var_6b0, 0x110, 6)
char var_50 = 1
void* rdx_1 = arg1[6]
struct icu_64::number::impl::AffixPatternProvider::VTable** r14

if (rdx_1 != 0)
    sub_142ac22a0(&var_6b8, rdx_1, arg1, arg4)
    r14 = &var_6b8
else
    sub_142ac2430(&var_e18, arg1, arg4)
    r14 = &var_e18

struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
    ** result

if (*arg4 s> 0)
    result = nullptr
else
    void var_e78
    sub_142b46420(&var_e78, arg1, &var_c28, arg4)
    void var_f28
    void var_d08
    sub_142b46180(&var_d08, sub_142ab6700(&var_f28, &var_e78), &var_c28, arg2, arg4)
    int32_t rdi = 1
    
    if (*(arg1 + 0x1cc) == 0)
        rdi = arg1[0x3a].d
    
    void var_f58
    sub_142b3bef0(&var_f58, arg1)
    
    if (*arg4 s> 0)
        result = nullptr
    else
        int32_t rax_3
        rax_3.b = arg1[0x39].b == 0
        int32_t rcx_9 = rax_3 | 0x10
        
        if (*(arg1 + 0x1c9) == 0)
            rcx_9 = rax_3
        
        int32_t rbx_2 = rcx_9 | 0x400
        
        if (*(arg1 + 0x2f4) == 0)
            rbx_2 = rcx_9
        
        int32_t rbx_3
        
        if (rdi != 1)
            rbx_3 = rbx_2 | 0x80
        else
            rbx_3 = rbx_2 | 0x30c
        
        if (sub_142b3c0b0(&var_f58) s<= 0)
            rbx_3 |= 0x20
        
        if (arg3 == 0)
            (*r14)->_purecall(r14)
            noreturn
        
        int32_t rbx_4 = rbx_3 | 2
        int32_t rdi_2 = rbx_4 | 0x2000
        
        if (arg3 != 0)
            rdi_2 = rbx_4
        
        int32_t var_f70 = rdi_2
        struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
            ** rax_6 = j_sub_142a7dd00(0x1010)
        struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
            ** var_f48_1 = rax_6
        
        if (rax_6 == 0)
            result = nullptr
        else
            result = sub_142abc8b0(rax_6, rdi_2)
        
        struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
            ** result_1 = result
        int32_t r12_1
        r12_1.b = rdi == 1
        struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::SymbolMatcher::VTable
            * var_ed8
        sub_142b476d0(&var_ed8, r12_1 + 1)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_ed0
        sub_142a48050(&result[0x10], &var_ed0)
        int64_t var_e90
        result[0x18] = var_e90
        sub_142a47ff0(&var_ed0)
        void* var_f08 = &var_d08
        void* var_f00_1 = arg2
        void* var_ef8_1 = &result[0xf]
        struct icu_64::UObject::icu_64::Locale::VTable** var_ef0_1 = &var_c28
        int32_t r12_2 = var_f70
        int32_t var_ee8_1 = r12_2
        void var_b48()
        sub_142b48b20(&var_b48, &var_f08)
        sub_142abd1c0(&result[0x168], &var_b48)
        sub_142abcbf0(&var_b48)
        sub_142b48aa0(&var_b48, &result[0x168])
        sub_142abcf60(&result[0x107], &var_b48)
        void var_a28
        `eh vector vbase constructor iterator'(&var_a28, 0x50, 6)
        `eh vector vbase constructor iterator'(&var_b48, 0x20, 9)
        int32_t* var_f88_1
        var_f88_1.d = r12_2
        sub_142b48ff0(&result[0x107], r14, result, &result[0xf], var_f88_1.d, arg4)
        
        if (arg3 == 0)
            (*r14)->_purecall(r14)
            noreturn
        
        sub_142b48400(&var_b48, &var_d08, arg2, r12_2, arg4)
        (*result)->vFunc_1(result, sub_142abd2b0(&result[0xac], &var_b48))
        sub_142abcc70(&var_b48)
        
        if (rdi != 1)
            (*r14)->_purecall(r14, 0xfffffffd, arg4)
            noreturn
        
        sub_142b47800(&var_ed8, arg2)
        sub_142a48050(&result[0x2f], &var_ed0)
        result[0x37] = var_e90
        (*result)->vFunc_1(result, &result[0x2e])
        sub_142a47ff0(&var_ed0)
        sub_142b47790(&var_ed8, arg2)
        sub_142a48050(&result[0x1a], &var_ed0)
        result[0x22] = var_e90
        (*result)->vFunc_1(result, &result[0x19])
        sub_142a47ff0(&var_ed0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e58
        sub_142a479b0(&var_e58, &arg1[0x31])
        char var_e50
        
        if ((var_e50 & 1) == 0 && sub_142a9f1b0(sub_1408f3520(&result[0xf]), &var_e58) == 0)
            sub_142b47830(&var_ed8, &var_e58)
            sub_142a48050(&result[0x39], &var_ed0)
            result[0x41] = var_e90
            (*result)->vFunc_1(result, &result[0x38])
            sub_142a47ff0(&var_ed0)
        
        (*result)->vFunc_1(result, &result[0xf])
        sub_142b46aa0(&var_b48, arg2, &var_f58, var_f70)
        (*result)->vFunc_1(result, sub_142abd3a0(&result[0x61], &var_b48))
        sub_142abcd40(&var_b48)
        
        if (*(arg1 + 0x1d4) == 0 || arg1[0xc].d s> 0)
            sub_142b47c20(&var_b48, arg2, &var_f58)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b40
            sub_142a48050(&result[0x7b], &var_b40)
            struct icu_64::numparse::impl::NumberParseMatcher::VTable* var_b00
            sub_142abd3a0(&result[0x83], &var_b00)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a38
            sub_142a48050(&result[0x9c], &var_a38)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_9f8
            sub_142a48050(&result[0xa4], &var_9f8)
            (*result)->vFunc_1(result, &result[0x7a])
            sub_142a47ff0(&var_9f8)
            sub_142a47ff0(&var_a38)
            sub_142abcd40(&var_b00)
            sub_142a47ff0(&var_b40)
        
        var_f70.q = &icu_64::numparse::impl::RequireNumberValidator::`vftable'{for `icu_64::numparse::impl::ValidationMatcher'}
        (*result)->vFunc_1(result, &result[0x1fd])
        
        if (rdi == 1)
            var_f70.q = &icu_64::numparse::impl::RequireAffixValidator::`vftable'{for `icu_64::numparse::impl::ValidationMatcher'}
            (*result)->vFunc_1(result, &result[0x1f9])
        
        if (arg3 != 0)
            var_f70.q = &icu_64::numparse::impl::RequireCurrencyValidator::`vftable'{for `icu_64::numparse::impl::ValidationMatcher'}
            (*result)->vFunc_1(result, &result[0x1fa])
        
        if (arg1[8].b != 0)
            char rdx_40
            
            if (*(arg1 + 0x41) != 0 || *(arg1 + 0x54) != 0)
                rdx_40 = 1
            else
                rdx_40 = 0
            
            charNode::charNode(&var_f70, rdx_40)
            char var_f68
            result[0x1fc].b = var_f68
            (*result)->vFunc_1(result)
        
        int32_t var_f40
        sub_142abe770(&var_f40, arg1)
        int64_t var_f38
        
        if (var_f40 != 0 || var_f38 != 0)
            MRECmpImpl::MRECmpImpl(&var_f28, sub_142ab6a50(&var_f70, &var_f40))
            void var_f20
            sub_142ab6bb0(&result[0x1ff], &var_f20)
            (*result)->vFunc_1(result, &result[0x1fe])
            sub_142ab6b80(&var_f20)
        
        result[0xe].b = 1
        sub_142ab6b80(&var_f40)
        sub_142a47ff0(&var_e58)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c68
    sub_142a47ff0(&var_c68)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_ca8
    sub_142a47ff0(&var_ca8)
    char var_cdc
    int64_t var_ce8
    
    if (var_cdc != 0)
        sub_142a7dcd0(var_ce8)
    sub_142ab6900(&var_d08)
    sub_142ab6900(&var_e78)

`eh vector vbase constructor iterator'(&var_6b0, 0x110, 6)
sub_142ab8850(&var_6b8)
sub_142a47ff0(&var_d50)
sub_142a47ff0(&var_d90)
sub_142a47ff0(&var_dd0)
sub_142a47ff0(&var_e10)
sub_142ab8850(&var_e18)
sub_142a45a20(&var_c28)
__security_check_cookie(rax_1 ^ &var_fa8)
return result
