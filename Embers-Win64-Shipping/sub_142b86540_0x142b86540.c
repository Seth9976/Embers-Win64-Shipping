// 函数: sub_142b86540
// 地址: 0x142b86540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rdi = arg3
struct icu_64::ResourceSink::xdd41f32b::PluralTableSink::operator[]::PluralTableSink::VTable* const 
    var_100 =
    &xdd41f32b::PluralTableSink::operator[]::PluralTableSink::`vftable'{for `icu_64::ResourceSink'}
void* var_f8 = arg3
void* rbx = arg3
int64_t i_2 = 8
int64_t i

do
    sub_142a4ab40(rbx)
    rbx += 0x40
    i = i_2
    i_2 -= 1
while (i != 1)
char** rax_2 = sub_142a641c0("icudt64l-curr", *(arg1 + 0x28), arg4)
char** var_e8 = rax_2

if (*arg4 s<= i_2.d)
    sub_142a61e60(rax_2, "CurrencyUnitPatterns", &var_100, arg4)
    
    if (*arg4 s<= i_2.d)
        for (int32_t i_1 = 0; i_1 s< 6; )
            if ((*(rdi + 8) & 1) == 0)
                char var_108 = 0
                int32_t var_104 = 0
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 = sub_142a47f60(
                    &var_98, 
                    sub_142aaa8a0(arg2 + 0x18, *(arg1 + 0x28), &var_108, sub_142b450a0(i_1), 
                        &var_104, arg4), 
                    var_104)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
                sub_142a58a40(rdi, Concurrency::agent::agent(&var_d8, &data_14367e500), rax_5)
                sub_142a47ff0(&var_d8)
                sub_142a47ff0(&var_98)
            
            i_1 += 1
            rdi += 0x40

if (rax_2 != 0)
    sub_142a5f860(rax_2)

sub_142ac3f40(&var_100)
__security_check_cookie(rax_1 ^ &var_138)
return &icu_64::UObject::`vftable'
