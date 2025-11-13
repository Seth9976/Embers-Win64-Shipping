// 函数: sub_142b41650
// 地址: 0x142b41650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t i_1 = zx.q(arg2)
struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_b8
sub_142ab2be0(&var_b8)
sub_142ab4a30(&var_b8, arg1)
sub_142ab3fe0(&var_b8)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142ab5320(&var_b8, &var_68)
int16_t rcx_4 = rax_2[1].w
int32_t r9_1

if (rcx_4 s< 0)
    r9_1 = *(rax_2 + 0xc)
else
    r9_1 = sx.d(rcx_4) s>> 5

sub_142a48d00(arg3, rax_2, 0, r9_1)
sub_142a47ff0(&var_68)

if (i_1.d s>= 1)
    uint64_t i
    
    do
        sub_142a48580(arg3, 0x30)
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_142ab2c10(&var_b8)
__security_check_cookie(rax_1 ^ &var_e8)
return &icu_64::IFixedDecimal::`vftable'
