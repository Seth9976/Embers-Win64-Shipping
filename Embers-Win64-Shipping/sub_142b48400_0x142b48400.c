// 函数: sub_142b48400
// 地址: 0x142b48400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::CombinedCurrencyMatcher::VTable
    ** var_170 = arg1
*arg1 = &icu_64::numparse::impl::CombinedCurrencyMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
sub_142b46240(arg2, &arg1[2], arg5)
sub_142b46280(arg2, &arg1[0xa])
arg1[0x12].b = not.b((arg4 u>> 0xd).b) & 1
void* rsi = &arg1[0x13]
int64_t (* var_188)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
    sub_142a47ff0
`eh vector constructor iterator'(rsi, 0x40, 6)
sub_142a479b0(&arg1[0x43], sub_142aac4f0(arg3, 2, 0, arg5))
sub_142a479b0(&arg1[0x4b], sub_142aac4f0(arg3, 2, 1, arg5))
struct icu_64::UObject::icu_64::Locale::VTable* var_118
int64_t rdx_5 = sub_142a5d0b0(arg3, &var_118)[5]
void* var_168 = &arg1[0x53]
arg1[0x53] = arg1 + 0x2a5
arg1[0x54].d = 0x28
*(arg1 + 0x2a4) = 0
int32_t i = 0
arg1[0x5a].d = 0
*(arg1 + 0x2a5) = 0
sub_142a8cbd0(&arg1[0x53], rdx_5, 0xffffffff, arg5)
sub_142a45a20(&var_118)
int32_t* rax_6 = sub_140902e90(arg2)
arg1[1].d = *rax_6
*(arg1 + 0xc) = rax_6[1].w
*(arg1 + 0xe) = 0

if (arg1[0x12].b == 0)
    do
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158
        sub_142a48050(rsi, sub_142b46300(arg2, &var_158, i, arg5))
        sub_142a47ff0(&var_158)
        i += 1
        rsi += 0x40
    while (i s< 6)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
