// 函数: sub_142a96050
// 地址: 0x142a96050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result = arg1
struct icu_64::UObject::icu_64::BreakIterator::VTable** var_80 = arg1
sub_142a54db0(arg1)
*result = &icu_64::RuleBasedBreakIterator::`vftable'{for `icu_64::BreakIterator'}
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_60 = 2
sub_142a722c0(&result[0x43], &var_68)
sub_142a47ff0(&var_68)
sub_142a97200(result, arg3)
int64_t* rax_2 = j_sub_142a7dd00(0x90)
int64_t* var_78 = rax_2

if (rax_2 != 0)
    rax_2 = sub_142b0eb80(rax_2, arg2, arg3)

result[0x3b] = rax_2

if (*arg3 s<= 0 && rax_2 == 0)
    *arg3 = 7

__security_check_cookie(rax_1 ^ &var_a8)
return result
