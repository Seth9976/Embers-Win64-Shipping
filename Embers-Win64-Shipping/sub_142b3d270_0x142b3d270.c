// 函数: sub_142b3d270
// 地址: 0x142b3d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2 = nullptr
int32_t rbx = 0
int32_t var_78 = 0
sub_142aa75d0(1, sub_142b3ce10)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_70 = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_4

if (rax_2 == 0)
    rax_4 = nullptr
else
    rbx = 1
    int32_t var_78_1 = 1
    rax_4 = sub_142b661f0(rax_2, Concurrency::agent::agent(&var_58, u"[:digit:]"), arg1)

data_144016b48 = rax_4

if ((rbx.b & 1) != 0)
    rbx &= 0xfffffffe
    sub_142a47ff0(&var_58)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1 = result

if (result != 0)
    rbx |= 2
    int32_t var_78_2 = rbx
    result = sub_142b661f0(result, Concurrency::agent::agent(&var_58, u"[:^S:]"), arg1)
    result_2 = result

data_144016b50 = result_2

if ((rbx.b & 2) != 0)
    result = sub_142a47ff0(&var_58)
    result_2 = data_144016b50

void* rcx_6 = data_144016b48

if (rcx_6 == 0 || result_2 == 0)
    *arg1 = 7
else
    sub_142a9f940(rcx_6)
    result = sub_142a9f940(data_144016b50)

__security_check_cookie(rax_1 ^ &var_98)
return result
