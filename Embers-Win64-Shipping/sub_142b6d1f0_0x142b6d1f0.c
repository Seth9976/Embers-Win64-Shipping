// 函数: sub_142b6d1f0
// 地址: 0x142b6d1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::LanguageBreakEngine::icu_64::DictionaryBreakEngine::VTable** result = arg1
struct icu_64::LanguageBreakEngine::VTable** var_98 = arg1
std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64>(
    arg1)
*result = &icu_64::DictionaryBreakEngine::`vftable'{for `icu_64::LanguageBreakEngine'}
sub_142a9db60(&result[1])
*result = &icu_64::KhmerBreakEngine::`vftable'{for `icu_64::DictionaryBreakEngine'}
sub_142a9db60(&result[0x1a])
sub_142a9db60(&result[0x33])
sub_142a9db60(&result[0x4c])
sub_142a9db60(&result[0x65])
result[0x7e] = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
sub_142b66fd0(&result[0x1a], sub_142a47a60(&var_88, 1, [[:Khmr:]&[:LineBreak=SA:]]", 0xffffffff), 
    arg3)
sub_142a47ff0(&var_88)

if (*arg3 s<= 0)
    sub_142a9dc70(&result[1], &result[0x1a])
    sub_142a9eee0(&result[1])

sub_142b66fd0(&result[0x65], sub_142a47a60(&var_88, 1, [[:Khmr:]&[:LineBreak=SA:]&[:M:]]", 
    0xffffffff), arg3)
sub_142a47ff0(&var_88)
sub_142a9e7d0(&result[0x65], 0x20)
sub_142a9dc70(&result[0x33], &result[0x1a])
sub_142a9e9d0(&result[0x4c], 0x1780, 0x17b3)
sub_142aa0030(&result[0x33], 0x17d2)
sub_142a9eee0(&result[0x65])
sub_142a9eee0(&result[0x33])
sub_142a9eee0(&result[0x4c])
__security_check_cookie(rax_1 ^ &var_c8)
return result
