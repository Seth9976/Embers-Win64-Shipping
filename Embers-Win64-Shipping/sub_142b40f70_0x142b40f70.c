// 函数: sub_142b40f70
// 地址: 0x142b40f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188

if (*arg5 s<= 0)
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        * const var_118
    sub_142ac27c0(&var_118, 0)
    var_118 = &icu_64::number::impl::UFormattedNumberData::`vftable'{for `icu_64::FormattedValueNumberStringBuilderImpl'}
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_80
    sub_142ab2be0(&var_80)
    sub_142aa8000(arg2, &var_80, arg5)
    
    if (*arg5 s<= 0)
        sub_142ab7ec0(arg1 + 0x148, &var_118, arg5)
        
        if (*arg5 s<= 0)
            void var_158
            char var_110[0x90]
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
                sub_142b409b0(&var_110, &var_158)
            int16_t rcx_5 = rax_2[1].w
            int32_t r9_1
            
            if (rcx_5 s< 0)
                r9_1 = *(rax_2 + 0xc)
            else
                r9_1 = sx.d(rcx_5) s>> 5
            
            sub_142a48d00(arg3, rax_2, 0, r9_1)
            sub_142a47ff0(&var_158)
            
            if (arg4 != 0)
                sub_142abb0d0(&var_158, arg4, arg5)
                sub_142b3f5b0(&var_110, &var_158)
                Concurrency::details::TransmogrifiedPrimary::~TransmogrifiedPrimary(&var_158)
    
    sub_142ab8680(&var_118)

__security_check_cookie(rax_1 ^ &var_188)
return arg3
