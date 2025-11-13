// 函数: sub_142b31310
// 地址: 0x142b31310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_310 = -2
void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void* result = sub_142aa6a40(arg7)

if (*arg7 s<= 0)
    if (arg6 != 0)
        if ((*(arg6 + 8) & 1) == 0)
            *(arg6 + 8) &= 0x1f
        else
            *(arg6 + 8) = 2
    
    struct icu_64::CollationRuleParser::Sink::icu_64::CollationBuilder::VTable* var_2c8
    int32_t* r9 = sub_142b2e870(&var_2c8, result, arg7)
    int32_t var_328 = 0
    struct icu_64::UObject::icu_64::CollationRuleParser::Importer::VTable* var_320 = &icu_64::x57af27cf::BundleImporter::operator[]::BundleImporter::`vftable'{for `icu_64::CollationRuleParser::Importer'}
    int32_t* var_330_1 = arg7
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rax_2 =
        sub_142b31e60(&var_2c8, arg2, &var_328, r9, arg5)
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rbx_1 = rax_2
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** var_318_1 = rax_2
    char* var_1a8
    
    if (*arg7 s<= 0)
        sub_142a46dc0(&rax_2[0xd])
        struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rdx_4 = rbx_1
        rbx_1 = nullptr
        int64_t var_318_2 = 0
        sub_142aa1eb0(arg1, rdx_4, arg7)
        
        if (arg3 != 0xffffffff)
            (*(*arg1 + 0xb0))(arg1, 5, zx.q(arg3), arg7)
        
        if (arg4 != 0xffffffff)
            (*(*arg1 + 0xb0))(arg1, 4, zx.q(arg4), arg7)
    else if (var_1a8 != 0 && arg6 != 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_308
        sub_142a48050(arg6, sub_142a47e10(&var_308, var_1a8, 0xffffffff))
        sub_142a47ff0(&var_308)
    
    if (rbx_1 != 0)
        (*rbx_1)->__offset(0x0).q(rbx_1, 1)
    
    var_320 = &icu_64::x57af27cf::BundleImporter::operator[]::BundleImporter::`vftable'{for `icu_64::CollationRuleParser::Importer'}
    sub_142b796d0(&var_320)
    var_2c8 = &icu_64::CollationBuilder::`vftable'{for `icu_64::CollationRuleParser::Sink'}
    int64_t* var_280
    
    if (var_280 != 0)
        (**var_280)(var_280, 1)
    
    struct icu_64::UObject::icu_64::UVector64::VTable* var_80
    sub_142aeb120(&var_80)
    struct icu_64::UObject::icu_64::UVector32::VTable* var_a0
    sub_142ae7c50(&var_a0)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_270
    sub_142a9dbc0(&var_270)
    result = sub_142b796e0(&var_2c8)

__security_check_cookie(rax_1 ^ &var_358)
return result
