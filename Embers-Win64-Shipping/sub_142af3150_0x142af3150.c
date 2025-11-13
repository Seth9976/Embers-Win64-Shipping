// 函数: sub_142af3150
// 地址: 0x142af3150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b0 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* var_1a8 = arg1
int32_t rbx = 0
int32_t var_1c8 = 0
void* r15 = &arg1[0xd]
memset(r15, 0, 0x1a0)
void (* r14)() = &arg1[0x41]
int64_t (* var_1d8)(struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg1) = sub_142a9dbc0
int64_t i_4 = 0xa
`eh vector constructor iterator'(r14, 0xc8, 0xa)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158
sub_142b661f0(&arg1[0x13b], sub_142a47a60(&var_158, 1, u"[acefnrtuUx]", 0xffffffff), arg2)
sub_142a47ff0(&var_158)
arg1[0x154] = 0
arg1[0x155] = 0
int64_t i_5 = 0xd
__builtin_memset(arg1, 0, 0x68)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_3 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0 = rax_3
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198

if (rax_3 != 0)
    rbx = 1
    int32_t var_1c8_1 = 1
    rax_3 = sub_142b661f0(rax_3, 
        sub_142a47a60(&var_198, 1, [\p{alphabetic}\p{M}\p{Nd}\p{Pc}\u200c\u200d]", 0xffffffff), arg2)

arg1[1] = rax_3

if ((rbx.b & 1) != 0)
    rbx &= 0xfffffffe
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_5 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_1 = rax_5

if (rax_5 != 0)
    rbx |= 2
    int32_t var_1c8_2 = rbx
    rax_5 = sub_142b661f0(rax_5, sub_142a47a60(&var_198, 1, u"[\p{WhiteSpace}]", 0xffffffff), arg2)

arg1[4] = rax_5

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_7 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_2 = rax_7

if (rax_7 != 0)
    rbx |= 4
    int32_t var_1c8_3 = rbx
    rax_7 =
        sub_142b661f0(rax_7, sub_142a47a60(&var_198, 1, [\p{Grapheme_Extend}]", 0xffffffff), arg2)

arg1[6] = rax_7

if ((rbx.b & 4) != 0)
    rbx &= 0xfffffffb
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_9 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_3 = rax_9

if (rax_9 != 0)
    rbx |= 8
    int32_t var_1c8_4 = rbx
    rax_9 = sub_142b661f0(rax_9, 
        sub_142a47a60(&var_198, 1, [[:Zl:][:Zp:][:Cc:][:Cf:]-[:Grapheme_Extend:]]", 0xffffffff), arg2)

arg1[7] = rax_9

if ((rbx.b & 8) != 0)
    rbx &= 0xfffffff7
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_11 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_4 = rax_11

if (rax_11 != 0)
    rbx |= 0x10
    int32_t var_1c8_5 = rbx
    rax_11 = sub_142b661f0(rax_11, sub_142a47a60(&var_198, 1, [\p{Hangul_Syllable_Type=L}]", 
        0xffffffff), arg2)

arg1[8] = rax_11

if ((rbx.b & 0x10) != 0)
    rbx &= 0xffffffef
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_13 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_5 = rax_13

if (rax_13 != 0)
    rbx |= 0x20
    int32_t var_1c8_6 = rbx
    rax_13 = sub_142b661f0(rax_13, sub_142a47a60(&var_198, 1, [\p{Hangul_Syllable_Type=V}]", 
        0xffffffff), arg2)

arg1[0xb] = rax_13

if ((rbx.b & 0x20) != 0)
    rbx &= 0xffffffdf
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_15 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_6 = rax_15

if (rax_15 != 0)
    rbx |= 0x40
    int32_t var_1c8_7 = rbx
    rax_15 = sub_142b661f0(rax_15, sub_142a47a60(&var_198, 1, [\p{Hangul_Syllable_Type=T}]", 
        0xffffffff), arg2)

arg1[0xc] = rax_15

if ((rbx.b & 0x40) != 0)
    rbx &= 0xffffffbf
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_17 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_7 = rax_17

if (rax_17 != 0)
    rbx |= 0x80
    int32_t var_1c8_8 = rbx
    rax_17 = sub_142b661f0(rax_17, sub_142a47a60(&var_198, 1, [\p{Hangul_Syllable_Type=LV}]", 
        0xffffffff), arg2)

arg1[9] = rax_17

if (rbx.b s< 0)
    rbx &= 0xffffff7f
    sub_142a47ff0(&var_198)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_19 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_8 = rax_19

if (rax_19 != 0)
    rbx |= 0x100
    int32_t var_1c8_9 = rbx
    rax_19 = sub_142b661f0(rax_19, sub_142a47a60(&var_198, 1, [\p{Hangul_Syllable_Type=LVT}]", 
        0xffffffff), arg2)

arg1[0xa] = rax_19

if (test_bit(rbx, 8))
    sub_142a47ff0(&var_198)

if (arg1[1] == 0 || arg1[4] == 0 || arg1[6] == 0 || arg1[7] == 0 || arg1[8] == 0 || arg1[0xb] == 0
    || arg1[0xc] == 0 || arg1[9] == 0 || arg1[0xa] == 0)
label_142af3754:
    
    for (int64_t i = 0; i s< 0xd; i += 1)
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rbx_1 = arg1[i]
        
        if (rbx_1 != 0)
            sub_142a9dbc0(rbx_1)
            sub_142a47920(rbx_1)
        
        arg1[i] = 0
    
    if (*arg2 s<= 0)
        *arg2 = 7
else if (*arg2 s<= 0)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_21 = j_sub_142a7dd00(0xc8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_1c0_9 = rax_21
    
    if (rax_21 != 0)
        rax_21 = sub_142a9d940(rax_21, 0, 0x10ffff)
    
    arg1[5] = rax_21
    
    if (rax_21 == 0)
        goto label_142af3754
    
    sub_142aa0040(rax_21, 0xac00, 0xd7a4)
    sub_142aa00c0(arg1[5], arg1[7])
    sub_142aa00c0(arg1[5], arg1[8])
    sub_142aa00c0(arg1[5], arg1[0xb])
    sub_142aa00c0(arg1[5], arg1[0xc])
    int64_t* rdi_10 = arg1
    int64_t i_3 = 0xd
    int64_t i_1
    
    do
        void* rcx_38 = *rdi_10
        
        if (rcx_38 != 0)
            sub_142a9eee0(rcx_38)
            sub_142af3870(r15, *rdi_10)
            i_3 = i_5
        
        r15 += 0x20
        rdi_10 = &rdi_10[1]
        i_1 = i_3
        i_3 -= 1
        i_5 = i_3
    while (i_1 != 1)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_118
    sub_142a9dc70(&arg1[0x73], 
        sub_142b661f0(&var_118, sub_142a47a60(&var_198, 1, [^\*\?\+\[\(\)\{\}\^\$\|\\\.]", 
            0xffffffff), 
        arg2))
    sub_142a9dbc0(&var_118)
    sub_142a47ff0(&var_198)
    sub_142a9e9d0(&arg1[0x5a], 0x30, 0x39)
    sub_142a9e9d0(r14, 0x41, 0x5a)
    sub_142a9e9d0(r14, 0x61, 0x7a)
    arg1[0x154] = &arg1[0x5a]
    int64_t i_2
    
    do
        sub_142a9eee0(r14)
        r14 += 0xc8
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    arg1[0x155] = sub_142aeaaf0(nullptr, nullptr, 0, arg2)
    
    if (*arg2 s> i_4.d)
        goto label_142af3754

__security_check_cookie(rax_1 ^ &var_1f8)
return arg1
