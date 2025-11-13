// 函数: sub_142a6d5f0
// 地址: 0x142a6d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable** result = nullptr
char rbp = 0
int32_t var_98 = 0
struct icu_64::UObject::icu_64::DateTimePatternGenerator::VTable** rax_2 =
    sub_142ae0dc0(arg1 + 0x10, arg3)
struct icu_64::UObject::icu_64::DateTimePatternGenerator::VTable** var_80 = rax_2

if (*arg3 s<= 0)
    struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable** result_2 =
        j_sub_142a7dd00(0x58)
    struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable** result_1 = result_2
    struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable** result_4 = result_2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
            sub_142ae1730(rax_2, &var_78, arg1 + 0xf0, arg3)
        rbp = 1
        int32_t var_98_1 = 1
        result_1[1] = 0
        result_1[2] = 0
        *result_1 = &icu_64::DateFmtBestPattern::`vftable'{for `icu_64::SharedObject'}
        sub_142a479b0(&result_1[3], rax_3)
    
    struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable** result_3 = result_1
    
    if (result_1 == 0 && *arg3 s<= result_1.d)
        *arg3 = 7
    
    if ((rbp & 1) != 0)
        sub_142a47ff0(&var_78)
    
    if (*arg3 s<= 0)
        result_3 = nullptr
        int64_t var_90_1 = 0
        sub_142aa6d40(result_1)
        result = result_1
    
    if (result_3 != 0)
        struct icu_64::SharedObject::icu_64::DateFmtBestPattern::VTable* r8_1 = *result_3
        r8_1->__offset(0x0).q(result_3, 1, r8_1)

if (rax_2 != 0)
    struct icu_64::UObject::icu_64::DateTimePatternGenerator::VTable* r8_2 = *rax_2
    r8_2->__offset(0x0).q(rax_2, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_b8)
return result
