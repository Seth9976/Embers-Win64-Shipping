// 函数: sub_142adedf0
// 地址: 0x142adedf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* result
int64_t* var_180

if (arg2 != *(arg1 + 0x150))
label_142adef5c:
    result = __RTDynamicCast(arg2, 0, &class icu_64::NumberFormat `RTTI Type Descriptor', 
        &class icu_64::RuleBasedNumberFormat `RTTI Type Descriptor', 0)
    struct icu_64::UObject::icu_64::FieldPosition::VTable* var_198
    
    if (result != 0)
        var_198 = &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
        int32_t var_190_1 = 0xffffffff
        int64_t var_18c_1 = 0
        (*(*result + 0x78))(result, zx.q(arg4), arg3, &var_198)
        result = sub_142aa8290(&var_198)
    else if (arg2 != 0)
        var_198 = &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
        int32_t var_190_2 = 0xffffffff
        int64_t var_18c_2 = 0
        int64_t* rax_5 = __RTDynamicCast((*(*arg2 + 0x18))(arg2), 0, 
            &class icu_64::Format `RTTI Type Descriptor', 
            &class icu_64::NumberFormat `RTTI Type Descriptor', 0)
        var_180 = rax_5
        (*(*rax_5 + 0xd8))(rax_5, zx.q(arg5))
        (*(*rax_5 + 0xd0))(rax_5, zx.q(arg6))
        (*(*rax_5 + 0x78))(rax_5, zx.q(arg4), arg3, &var_198)
        (**rax_5)(rax_5, 1)
        result = sub_142aa8290(&var_198)
else
    int32_t* rbx_1
    
    if (arg6 != 0xa)
        if (arg6 != 2 || arg5 != 2)
            goto label_142adef5c
        
        rbx_1 = *(arg1 + 0x348)
        goto label_142adeea2
    
    if (arg5 == 1)
        rbx_1 = *(arg1 + 0x328)
    else if (arg5 == 2)
        rbx_1 = *(arg1 + 0x330)
    else if (arg5 != 3)
        if (arg5 != 4)
            goto label_142adef5c
        
        rbx_1 = *(arg1 + 0x340)
    else
        rbx_1 = *(arg1 + 0x338)
    
label_142adeea2:
    
    if (rbx_1 == 0)
        goto label_142adef5c
    
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        * const var_128
    sub_142ac27c0(&var_128, 0)
    var_128 = &icu_64::number::impl::UFormattedNumberData::`vftable'{for `icu_64::FormattedValueNumberStringBuilderImpl'}
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_90
    sub_142ab2be0(&var_90)
    sub_142ab4b30(&var_90, arg4)
    var_180.d = 0
    sub_142ab7ec0(rbx_1, &var_128, &var_180)
    
    if (var_180.d s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
        void var_120
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
            sub_142b409b0(&var_120, &var_168)
        int16_t rcx_5 = rax_2[1].w
        int32_t r9_1
        
        if (rcx_5 s< 0)
            r9_1 = *(rax_2 + 0xc)
        else
            r9_1 = sx.d(rcx_5) s>> 5
        
        sub_142a48d00(arg3, rax_2, 0, r9_1)
        sub_142a47ff0(&var_168)
    
    result = sub_142ab8680(&var_128)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
