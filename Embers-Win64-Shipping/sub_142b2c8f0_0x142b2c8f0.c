// 函数: sub_142b2c8f0
// 地址: 0x142b2c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_20 = rax
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (rax == 0)
    result = nullptr
else
    result = sub_142a9db60(rax)

if (result == 0)
    return nullptr

void* rcx_1 = *(&data_1440169b0 + (sx.q(arg1) << 3))
void* rbx_1 = &data_144016a70
void* rdx = &data_144016a70

if (rcx_1 != 0)
    rdx = rcx_1

sub_142a9ebe0(result, rdx)
void* rcx_3 = *(&data_1440169b0 + (sx.q(arg2) << 3))
void* rdx_1 = &data_144016a70

if (rcx_3 != 0)
    rdx_1 = rcx_3

sub_142a9ebe0(result, rdx_1)
void* rcx_5 = *(&data_1440169b0 + (sx.q(arg3) << 3))

if (rcx_5 != 0)
    rbx_1 = rcx_5

sub_142a9ebe0(result, rbx_1)
sub_142a9f940(result)
return result
