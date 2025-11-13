// 函数: sub_142adf060
// 地址: 0x142adf060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::DateTimePatternGenerator::VTable** arg_8 = arg1
int64_t var_38 = -2
*arg1 = &icu_64::DateTimePatternGenerator::`vftable'{for `icu_64::UObject'}
sub_142a459c0(&arg1[1])
int64_t (* var_48)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) = sub_142a47ff0
`eh vector constructor iterator'(&arg1[0x21], 0x40, 0x10)
int64_t (* var_48_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
    sub_142a47ff0
`eh vector constructor iterator'(&arg1[0xa1], 0x40, 0x30)
arg1[0x221] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x222].w = 2
arg1[0x229] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x22a].w = 2
arg1[0x231] = 0
arg1[0x232] = 0
arg1[0x233] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x234].w = 2
arg1[0x23f].d = 0
struct icu_64::FormatParser::VTable** rax = j_sub_142a7dd00(0xc90)
struct icu_64::FormatParser::VTable** rdi = rax
struct icu_64::FormatParser::VTable** arg_20 = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &icu_64::FormatParser::`vftable'
    int64_t (* var_48_2)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
        sub_142a47ff0
    `eh vector constructor iterator'(&rdi[1], 0x40, 0x32)
    rdi[0x191] = 0

arg1[0x1d] = rdi
struct icu_64::FormatParser::VTable** rax_1 = j_sub_142a7dd00(0x98)
arg_20 = rax_1

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = &icu_64::DateTimeMatcher::`vftable'
    rax_1[1] = &icu_64::PtnSkeleton::`vftable'
    __builtin_memset(&rax_1[0xa], 0, 0x40)

arg1[0x1e] = rax_1
struct icu_64::FormatParser::VTable** rax_2 = j_sub_142a7dd00(0x10)
arg_20 = rax_2

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = &icu_64::DistanceInfo::`vftable'

arg1[0x1f] = rax_2
struct icu_64::FormatParser::VTable** rax_3 = j_sub_142a7dd00(0x1b0)
arg_20 = rax_3

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = &icu_64::PatternMap::`vftable'
    void* rcx_4 = &rax_3[1]
    int64_t i_1 = 6
    int64_t i
    
    do
        __builtin_memset(rcx_4, 0, 0x40)
        rcx_4 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    __builtin_memset(rcx_4, 0, 0x20)
    rax_3[0x35].b = 1

arg1[0x20] = rax_3

if (arg1[0x1d] == 0 || arg1[0x1e] == 0 || arg1[0x1f] == 0 || rax_3 == 0)
    *arg3 = 7
    arg1[0x23f].d = 7
else
    sub_142ae2da0(arg1, arg2, arg3)

return arg1
