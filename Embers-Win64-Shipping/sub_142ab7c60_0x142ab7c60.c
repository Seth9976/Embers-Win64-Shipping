// 函数: sub_142ab7c60
// 地址: 0x142ab7c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = -2
int32_t var_28 = 0

if (*arg4 s<= 0)
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        ** rax_1 = j_sub_142a7dd00(0xe0)
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        ** rdi_1 = rax_1
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        ** arg_20 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        sub_142ac27c0(rax_1, 0)
        *rdi_1 = &icu_64::number::impl::UFormattedNumberData::`vftable'{for `icu_64::FormattedValueNumberStringBuilderImpl'}
        sub_142ab2be0(&rdi_1[0x13])
    
    if (rdi_1 != 0)
        sub_142ab2ce0(&rdi_1[0x13], arg3)
        sub_142ab7ec0(arg1, rdi_1, arg4)
        
        if (*arg4 s> 0)
            (*rdi_1)->__offset(0x0).q(rdi_1, 1)
            *arg2 = &icu_64::number::FormattedNumber::`vftable'{for `icu_64::FormattedValue'}
            arg2[2].d = *arg4
            arg2[1] = 0
        else
            *arg2 = &icu_64::number::FormattedNumber::`vftable'{for `icu_64::FormattedValue'}
            arg2[1] = rdi_1
            arg2[2].d = 0
    else
        *arg4 = 7
        *arg2 = &icu_64::number::FormattedNumber::`vftable'{for `icu_64::FormattedValue'}
        arg2[2].d = 7
        arg2[1] = 0
else
    *arg2 = &icu_64::number::FormattedNumber::`vftable'{for `icu_64::FormattedValue'}
    arg2[1] = 0
    arg2[2].d = 1

return arg2
