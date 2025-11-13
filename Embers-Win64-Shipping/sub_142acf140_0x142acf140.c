// 函数: sub_142acf140
// 地址: 0x142acf140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rbx = arg1
char r9 = 0

if (arg1 s< 0)
    r9 = 1
    arg1 = neg.d(arg1)

int32_t r8_2 = arg1 s/ 0x3e8
int32_t r11_2 = r8_2 s/ 0x3c
r8_2.b -= r11_2.b * 0x3c
char r10_2 = (r11_2 s/ 0x3c).b
r11_2.b -= r10_2 * 0x3c
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
sub_142acf600(r10_2, r11_2.b, r8_2.b, r9, &var_58)
struct icu_64::UObject::icu_64::TimeZone::VTable** rax_7 = j_sub_142a7dd00(0xa0)
struct icu_64::UObject::icu_64::TimeZone::VTable** var_60 = rax_7
struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** result

if (rax_7 == 0)
    result = nullptr
else
    result = sub_142ac3f60(rax_7, rbx, &var_58)

sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_98)
return result
