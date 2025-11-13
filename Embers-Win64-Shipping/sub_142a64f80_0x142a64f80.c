// 函数: sub_142a64f80
// 地址: 0x142a64f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rsi
rsi.b = 1
_tzset()
char* rax_2 = sub_142a4bdf0(0)
int32_t rbp = x1bf47908::close::operator[]::environment_strings_traits::close() * 0xfffffc18
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
sub_142a47e10(&var_98, rax_2, 0xffffffff)
int16_t var_90
int32_t var_8c
int32_t rax_5

if (var_90 s< 0)
    rax_5 = var_8c
else
    rax_5 = sx.d(var_90) s>> 5

if (rax_5 == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    sub_142a48050(&var_98, sub_142a47a60(&var_58, 1, u"Etc/Unknown", rax_5 + 0xb))
    sub_142a47ff0(&var_58)
    rsi.b = 0

int32_t var_b8 = 0
struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result =
    sub_142a64ce0(&var_98, &var_b8)
sub_142a7dcd0(rax_2)
int32_t rdi_2

if (var_90 s< 0)
    rdi_2 = var_8c
else
    rdi_2 = sx.d(var_90) s>> 5

if (result == 0)
    goto label_142a650a6

if (rbp != (*result)->__offset(0x38).q(result) && rdi_2 - 3 u<= 1)
    (*result)->__offset(0x0).q(result, 1)
    result = nullptr
label_142a650a6:
    
    if (rsi.b != 0)
        struct icu_64::UObject::icu_64::TimeZone::VTable** rax_13 = j_sub_142a7dd00(0xa0)
        struct icu_64::UObject::icu_64::TimeZone::VTable** var_b0_1 = rax_13
        
        if (rax_13 == 0)
            result = nullptr
        else
            result = sub_142ac3f60(rax_13, rbp, &var_98)
    
    if (result == 0)
        if (data_144015838 != 2 && sub_142a85f00(&data_144015838) != 0)
            sub_142a66300()
            sub_142a85e80(&data_144015838)
        
        result = (*(data_144015798 + 0x58))(&data_144015798)

sub_142a47ff0(&var_98)
__security_check_cookie(rax_1 ^ &var_d8)
return result
