// 函数: sub_142b6cf70
// 地址: 0x142b6cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_170 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
struct icu_64::LanguageBreakEngine::icu_64::DictionaryBreakEngine::VTable** result = arg1
struct icu_64::LanguageBreakEngine::VTable** var_168 = arg1
std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64>(
    arg1)
*result = &icu_64::DictionaryBreakEngine::`vftable'{for `icu_64::LanguageBreakEngine'}
sub_142a9db60(&result[1])
*result = &icu_64::CjkBreakEngine::`vftable'{for `icu_64::DictionaryBreakEngine'}
sub_142a9db60(&result[0x1a])
sub_142a9db60(&result[0x33])
sub_142a9db60(&result[0x4c])
sub_142a9db60(&result[0x65])
result[0x7e] = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158
sub_142b66fd0(&result[0x1a], sub_142a47a60(&var_158, 1, u"[\uac00-\ud7a3]", 0xffffffff), arg4)
sub_142a47ff0(&var_158)
sub_142b66fd0(&result[0x33], sub_142a47a60(&var_158, 1, u"[:Han:]", 0xffffffff), arg4)
sub_142a47ff0(&var_158)
sub_142b66fd0(&result[0x4c], sub_142a47a60(&var_158, 1, [[:Katakana:]\uff9e\uff9f]", 0xffffffff), 
    arg4)
sub_142a47ff0(&var_158)
sub_142b66fd0(&result[0x65], sub_142a47a60(&var_158, 1, u"[:Hiragana:]", 0xffffffff), arg4)
sub_142a47ff0(&var_158)
result[0x7f] = sub_142b6ad80(arg4)

if (*arg4 s<= 0)
    if (arg3 != 0)
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_118
        sub_142a9db60(&var_118)
        sub_142a9ebe0(&var_118, &result[0x33])
        sub_142a9ebe0(&var_118, &result[0x4c])
        sub_142a9ebe0(&var_118, &result[0x65])
        sub_142a9e7d0(&var_118, 0xff70)
        sub_142a9e7d0(&var_118, 0x30fc)
        sub_142a9dc70(&result[1], &var_118)
        sub_142a9eee0(&result[1])
        sub_142a9dbc0(&var_118)
    else
        sub_142a9dc70(&result[1], &result[0x1a])
        sub_142a9eee0(&result[1])

__security_check_cookie(rax_1 ^ &var_198)
return result
