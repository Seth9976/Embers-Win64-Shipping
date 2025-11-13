// 函数: sub_142ad68c0
// 地址: 0x142ad68c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rbx = 0
int32_t var_1a8 = 0
int64_t var_190
__builtin_memcpy(&var_190, 
    "\x00\x00\x60\x2c\x0c\xc0\x80\xc2\x00\x00\x00\xa3\x4e\x85\x80\xc2\x00\x00\x80\x3f\xe2\x9d\x7a\xc2\x"
"fe\xff\xff\xff\xff\xff\xff\xff", 
    0x20)
struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_2 = j_sub_142a7dd00(0x50)
struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_198 = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable** r12

if (rax_2 == 0)
    r12 = nullptr
else
    rbx = 1
    int32_t var_1a8_1 = 1
    r12 = sub_142b4ae10(rax_2, sub_142a47a60(&var_168, 1, u"GMT+8", 0xffffffff), 0x1b77400, 0)

if ((rbx.b & 1) != 0)
    rbx &= 0xfffffffe
    sub_142a47ff0(&var_168)

struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_5 = j_sub_142a7dd00(0x160)
struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_198_1 = rax_5
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable** r15

if (rax_5 == 0)
    r15 = nullptr
else
    rbx |= 2
    int32_t var_1a8_2 = rbx
    r15 = sub_142b4aef0(rax_5, sub_142a47a60(&var_128, 1, Korean 1897", 0xffffffff), 0x1808580, 0, 
        &var_190, 1, 1)

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    sub_142a47ff0(&var_128)

struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_8 = j_sub_142a7dd00(0x160)
struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_198_2 = rax_8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e8
struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable** r14

if (rax_8 == 0)
    r14 = nullptr
else
    rbx |= 4
    int32_t var_1a8_3 = rbx
    int64_t var_188
    r14 = sub_142b4aef0(rax_8, sub_142a47a60(&var_e8, 1, Korean 1898-1911", 0xffffffff), 0x1b77400, 
        0, &var_188, 1, 1)

if ((rbx.b & 4) != 0)
    rbx &= 0xfffffffb
    sub_142a47ff0(&var_e8)

struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_11 = j_sub_142a7dd00(0x160)
struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_198_3 = rax_11
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable** rsi

if (rax_11 == 0)
    rsi = nullptr
else
    rbx |= 8
    int32_t var_1a8_4 = rbx
    int64_t var_180
    rsi = sub_142b4aef0(rax_11, sub_142a47a60(&var_a8, 1, Korean 1912-", 0xffffffff), 0x1ee6280, 0, 
        &var_180, 1, 1)

if ((rbx.b & 8) != 0)
    rbx &= 0xfffffff7
    sub_142a47ff0(&var_a8)

int32_t var_1a0 = 0
struct icu_64::UObject::icu_64::TimeZone::VTable** rax_14 = j_sub_142a7dd00(0x70)
struct icu_64::UObject::icu_64::TimeZone::VTable** var_198_4 = rax_14
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
struct icu_64::BasicTimeZone::icu_64::RuleBasedTimeZone::VTable** rdi_5

if (rax_14 == 0)
    rdi_5 = nullptr
else
    rbx |= 0x10
    int32_t var_1a8_5 = rbx
    rdi_5 = sub_142b55440(rax_14, sub_142a47a60(&var_68, 1, u"KOREA_ZONE", 0xffffffff), r12)

if ((rbx.b & 0x10) != 0)
    sub_142a47ff0(&var_68)

sub_142b555b0(rdi_5, r15, &var_1a0)
sub_142b555b0(rdi_5, r14, &var_1a0)
sub_142b555b0(rdi_5, rsi, &var_1a0)
sub_142b557d0(rdi_5, &var_1a0)

if (var_1a0 s> 0)
    if (rdi_5 != 0)
        (*rdi_5)->__offset(0x0).q(rdi_5, 1)
    
    data_1440167c0 = 0
else
    data_1440167c0 = rdi_5

int64_t result = sub_142aa75d0(0xb, sub_142ad6c20)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
