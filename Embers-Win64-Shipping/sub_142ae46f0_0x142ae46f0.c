// 函数: sub_142ae46f0
// 地址: 0x142ae46f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::DateFormat::icu_64::RelativeDateFormat::VTable** result = arg1
sub_142a6cb80(arg1, arg2)
*result = &icu_64::RelativeDateFormat::`vftable'{for `icu_64::DateFormat'}
result[0x2c] = 0
sub_142a479b0(&result[0x2d], arg2 + 0x168)
sub_142a479b0(&result[0x35], arg2 + 0x1a8)
result[0x3d] = 0
result[0x3e].d = *(arg2 + 0x1f0)
sub_142a456d0(&result[0x3f], arg2 + 0x1f8)
result[0x5b].d = *(arg2 + 0x2d8)
result[0x5c] = 0
result[0x5d].b = *(arg2 + 0x2e8)
*(result + 0x2e9) = *(arg2 + 0x2e9)
*(result + 0x2ea) = *(arg2 + 0x2ea)
*(result + 0x2eb) = *(arg2 + 0x2eb)
result[0x5e] = 0
int64_t* rcx_3 = *(arg2 + 0x160)

if (rcx_3 != 0)
    result[0x2c] = (*(*rcx_3 + 0x18))(rcx_3)

if (*(arg2 + 0x1e8) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 = j_sub_142a7dd00(0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rsi_1 = rax_8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = rax_8
    
    if (rax_8 == 0)
        rsi_1 = nullptr
    else
        sub_142a479b0(rax_8, *(arg2 + 0x1e8))
    
    result[0x3d] = rsi_1

int64_t rax_9 = sx.q(result[0x5b].d)

if (rax_9.d s> 0)
    int64_t rax_10 = sub_142a7dd00(rax_9 << 4)
    result[0x5c] = rax_10
    memcpy(rax_10, *(arg2 + 0x2e0), result[0x5b].d << 4)

int64_t* rcx_8 = *(arg2 + 0x2f0)

if (rcx_8 != 0)
    result[0x5e] = (*(*rcx_8 + 0x18))(rcx_8)

return result
