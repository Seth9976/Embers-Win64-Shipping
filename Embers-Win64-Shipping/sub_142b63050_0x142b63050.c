// 函数: sub_142b63050
// 地址: 0x142b63050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rdi = 0
int32_t var_88 = 0
__builtin_memset(arg1, 0, 0x18)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_80 = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_4

if (rax_2 == 0)
    rax_4 = nullptr
else
    rdi = 1
    int32_t var_88_1 = 1
    rax_4 = sub_142b661f0(rax_2, sub_142a47a60(&var_68, 1, u"[-,./[:whitespace:]]", 0x14), arg2)

*arg1 = rax_4

if ((rdi.b & 1) != 0)
    rdi &= 0xfffffffe
    sub_142a47ff0(&var_68)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_5 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_80_1 = rax_5
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_7

if (rax_5 == 0)
    rax_7 = nullptr
else
    rdi |= 2
    int32_t var_88_2 = rdi
    rax_7 = sub_142b661f0(rax_5, sub_142a47a60(&var_68, 1, u"[-.:[:whitespace:]]", 0x13), arg2)

arg1[1] = rax_7

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_142a47ff0(&var_68)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_8 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_80_2 = rax_8
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_10

if (rax_8 == 0)
    rax_10 = nullptr
else
    rdi |= 4
    int32_t var_88_3 = rdi
    rax_10 = sub_142b661f0(rax_8, sub_142a47a60(&var_68, 1, u"[:whitespace:]", 0xe), arg2)

arg1[2] = rax_10

if ((rdi.b & 4) != 0)
    sub_142a47ff0(&var_68)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi_1 = *arg1

if (rdi_1 == 0)
    goto label_142b63202

if (arg1[1] == 0 || arg1[2] == 0)
    if (rdi_1 == 0)
        goto label_142b63202
    
    sub_142a9dbc0(rdi_1)
    sub_142a47920(rdi_1)
label_142b63202:
    *arg1 = nullptr
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi_2 = arg1[1]
    
    if (rdi_2 != 0)
        sub_142a9dbc0(rdi_2)
        sub_142a47920(rdi_2)
    
    arg1[1] = 0
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi_3 = arg1[2]
    
    if (rdi_3 != 0)
        sub_142a9dbc0(rdi_3)
        sub_142a47920(rdi_3)
    
    arg1[2] = 0
    *arg2 = 7
else
    sub_142a9f940(rdi_1)
    sub_142a9f940(arg1[1])
    sub_142a9f940(arg1[2])

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
