// 函数: sub_142a97c80
// 地址: 0x142a97c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_208 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
struct icu_64::UObject::icu_64::Locale::VTable* var_118
struct icu_64::UObject::icu_64::Locale::VTable** rax_2 = sub_142a554c0(arg2, &var_118, 0, arg5)
struct icu_64::UObject::icu_64::Locale::VTable* var_1f8
Concurrency::multi_link_registry<class Concurrency::ITarget<uint64_t> >::~multi_link_registry<class Concurrency::ITarget<uint64_t> >(
    arg1, sub_142a554c0(arg2, &var_1f8, 1, arg5), rax_2)
sub_142a45a20(&var_1f8)
sub_142a45a20(&var_118)
*arg1 = &icu_64::SimpleFilteredSentenceBreakIterator::`vftable'{for `icu_64::BreakIterator'}
struct icu_64::SimpleFilteredSentenceBreakData::VTable** rax_4 = j_sub_142a7dd00(0x20)
struct icu_64::SimpleFilteredSentenceBreakData::VTable** var_200 = rax_4

if (rax_4 != 0)
    *rax_4 = &icu_64::SimpleFilteredSentenceBreakData::`vftable'
    rax_4[1] = arg3
    rax_4[2] = arg4
    rax_4[3].d = 1

arg1[0x29] = rax_4
arg1[0x2a] = arg2
arg1[0x2b] = 0
__security_check_cookie(rax_1 ^ &var_228)
return arg1
