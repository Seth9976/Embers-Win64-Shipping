// 函数: sub_142b41970
// 地址: 0x142b41970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_c8
sub_142ab2be0(&var_c8)
struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rcx_1 = &var_c8

if (arg2 == 0)
    sub_142ab4b30(rcx_1, 1)
label_142b419da:
    sub_142ab3060(&var_c8, arg1)
    sub_142ab3fe0(&var_c8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
        sub_142ab5320(&var_c8, &var_78)
    int16_t rcx_5 = rax_2[1].w
    int32_t r9_1
    
    if (rcx_5 s< 0)
        r9_1 = *(rax_2 + 0xc)
    else
        r9_1 = sx.d(rcx_5) s>> 5
    
    sub_142a48d00(arg3, rax_2, 0, r9_1)
    sub_142a47ff0(&var_78)
else
    sub_142ab4810(rcx_1, arg2, arg4)
    
    if (*arg4 s<= 0)
        goto label_142b419da

sub_142ab2c10(&var_c8)
__security_check_cookie(rax_1 ^ &var_f8)
return &icu_64::IFixedDecimal::`vftable'
