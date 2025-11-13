// 函数: sub_142b49780
// 地址: 0x142b49780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
int32_t var_78 = 0

if ((*(arg2 + 8) & 0xffe0) != 0)
    *arg5 = 1
    int64_t rax_2
    
    if (not(test_bit(arg4, 9)))
        rax_2 = *(*arg3 + 0x10)
    else
        rax_2 = 0
    
    struct icu_64::number::impl::TokenConsumer::icu_64::numparse::impl::AffixPatternMatcherBuilder::VTable
        * const var_68 = &icu_64::numparse::impl::AffixPatternMatcherBuilder::`vftable'{for `icu_64::number::impl::TokenConsumer'}
    struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::AffixPatternMatcherBuilder::VTable
        * const var_60_1 = &icu_64::numparse::impl::AffixPatternMatcherBuilder::`vftable'{for `icu_64::numparse::impl::MutableMatcherCollection'}
    void var_48
    void* var_58_1 = &var_48
    int32_t var_50_1 = 3
    char var_4c_1 = 0
    int64_t var_30_1 = 0
    void* var_28_1 = arg2
    int64_t* var_20_1 = arg3
    int64_t var_18_1 = rax_2
    sub_142abbc30(arg2, &var_68, arg6)
    sub_142b48d20(&var_68, arg1)
    
    if (var_4c_1 != 0)
        sub_142a7dcd0(var_58_1)
    
    sub_142abb580(&var_68)
else
    *arg5 = 0
    memset(arg1, 0, 0x50)
    sub_142b48010(arg1)
    *arg1 = &icu_64::numparse::impl::AffixPatternMatcher::`vftable'{for `icu_64::numparse::impl::ArraySeriesMatcher'}
    arg1[7] = arg1 + 0x46
    arg1[8].d = 4
    *(arg1 + 0x44) = 0
    *(arg1 + 0x46) = 0

return arg1
