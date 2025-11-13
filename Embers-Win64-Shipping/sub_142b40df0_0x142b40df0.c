// 函数: sub_142b40df0
// 地址: 0x142b40df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188

if (*arg5 s<= 0)
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        * const var_158
    sub_142ac27c0(&var_158, 0)
    var_158 = &icu_64::number::impl::UFormattedNumberData::`vftable'{for `icu_64::FormattedValueNumberStringBuilderImpl'}
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_c0
    sub_142ab2be0(&var_c0)
    sub_142aa8000(arg2, &var_c0, arg5)
    
    if (*arg5 s<= 0)
        sub_142ab7ec0(arg1 + 0x148, &var_158, arg5)
        
        if (*arg5 s<= 0)
            *(arg4 + 0xc) = 0
            char var_150[0x90]
            
            if (sub_142b3fef0(&var_150, arg4, arg5) != 0)
                int16_t rax_3 = *(arg3 + 8)
                int32_t rcx_6
                
                if (rax_3 s< 0)
                    rcx_6 = *(arg3 + 0xc)
                else
                    rcx_6 = sx.d(rax_3) s>> 5
                
                if (rcx_6 != 0)
                    int32_t rcx_8
                    
                    if (rax_3 s< 0)
                        rcx_8 = *(arg3 + 0xc)
                    else
                        rcx_8 = sx.d(rax_3) s>> 5
                    
                    *(arg4 + 0xc) += rcx_8
                    int16_t rax_5 = *(arg3 + 8)
                    int32_t rax_7
                    
                    if (rax_5 s< 0)
                        rax_7 = *(arg3 + 0xc)
                    else
                        rax_7 = sx.d(rax_5) s>> 5
                    
                    *(arg4 + 0x10) += rax_7
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
                sub_142b409b0(&var_150, &var_78)
            int16_t rcx_10 = rax_8[1].w
            int32_t r9_1
            
            if (rcx_10 s< 0)
                r9_1 = *(rax_8 + 0xc)
            else
                r9_1 = sx.d(rcx_10) s>> 5
            
            sub_142a48d00(arg3, rax_8, 0, r9_1)
            sub_142a47ff0(&var_78)
    
    sub_142ab8680(&var_158)

__security_check_cookie(rax_1 ^ &var_188)
return arg3
