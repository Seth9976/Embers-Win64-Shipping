// 函数: sub_142ad5850
// 地址: 0x142ad5850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char rbx = 0
int32_t var_78 = 0
struct icu_64::UObject::icu_64::TimeZone::VTable** rax_2 = j_sub_142a7dd00(0xa0)
struct icu_64::UObject::icu_64::TimeZone::VTable** var_68 = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** rax_4

if (rax_2 == 0)
    rax_4 = nullptr
else
    rbx = 1
    int32_t var_78_1 = 1
    rax_4 = sub_142ac3f60(rax_2, 0x1b77400, sub_142a47a60(&var_58, 1, u"CHINA_ZONE", 0xffffffff))

data_144016740 = rax_4

if ((rbx & 1) != 0)
    sub_142a47ff0(&var_58)

int64_t result = sub_142aa75d0(8, sub_142ad62a0)
__security_check_cookie(rax_1 ^ &var_98)
return result
