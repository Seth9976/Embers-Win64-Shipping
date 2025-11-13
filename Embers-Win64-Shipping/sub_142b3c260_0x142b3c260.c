// 函数: sub_142b3c260
// 地址: 0x142b3c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
struct icu_64::number::impl::ConstantMultiFieldModifier::icu_64::number::impl::CurrencySpacingEnabledModifier::VTable
    ** result = arg1
struct icu_64::number::impl::Modifier::icu_64::number::impl::ConstantMultiFieldModifier::VTable** 
    var_230 = arg1
sub_142b3c1e0(arg1, arg2, arg3, arg4, arg5)
*result = &icu_64::number::impl::CurrencySpacingEnabledModifier::`vftable'{for `icu_64::number::impl::ConstantMultiFieldModifier'}
sub_142a9db60(&result[0x26])
result[0x3f] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x40].w = 2
sub_142a9db60(&result[0x47])
result[0x60] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x61].w = 2
int32_t rax_3 = sub_142b3fee0(arg2)
int32_t rcx_4
void* rdx

if (rax_3 s> 0)
    rcx_4 = sub_142b3fee0(arg2) - 1
    
    if (*arg2 == 0)
        rdx = &arg2[0x58]
    else
        rdx = *(arg2 + 0x58)

char var_248
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_228
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_1e8
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_118

if (rax_3 s<= 0 || *(sx.q(*(arg2 + 0x80) + rcx_4) + rdx) != 7)
    sub_142aa0650(&result[0x26])
    sub_142a4ab40(&result[0x3f])
else
    int32_t rax_8 = sub_142b3f8d0(arg2)
    var_248.q = arg7
    sub_142b3d0f0(&var_1e8, arg6, 0, 0, var_248)
    
    if (sub_142a9f280(&var_1e8, zx.q(rax_8)) == 0)
        sub_142aa0650(&result[0x26])
        sub_142a4ab40(&result[0x3f])
    else
        var_248.q = arg7
        sub_142a9dc70(&result[0x26], sub_142b3d0f0(&var_118, arg6, 1, 0, var_248))
        sub_142a9dbc0(&var_118)
        sub_142a9f940(&result[0x26])
        sub_142a48050(&result[0x3f], sub_142b3d080(&var_228, arg6, 0, arg7))
        sub_142a47ff0(&var_228)
    
    sub_142a9dbc0(&var_1e8)

int32_t rax_12 = sub_142b3fee0(arg3)
void* rcx_21

if (rax_12 s> 0)
    if (*arg3 == 0)
        rcx_21 = &arg3[0x58]
    else
        rcx_21 = *(arg3 + 0x58)

if (rax_12 s<= 0 || *(sx.q(*(arg3 + 0x80)) + rcx_21) != 7)
    sub_142aa0650(&result[0x47])
    sub_142a4ab40(&result[0x60])
else
    int32_t rax_14 = sub_142b3f8d0(arg3)
    var_248.q = arg7
    sub_142b3d0f0(&var_1e8, arg6, 0, 1, var_248)
    
    if (sub_142a9f280(&var_1e8, zx.q(rax_14)) == 0)
        sub_142aa0650(&result[0x47])
        sub_142a4ab40(&result[0x60])
    else
        var_248.q = arg7
        sub_142a9dc70(&result[0x47], sub_142b3d0f0(&var_118, arg6, 1, 1, var_248))
        sub_142a9dbc0(&var_118)
        sub_142a9f940(&result[0x47])
        sub_142a48050(&result[0x60], sub_142b3d080(&var_228, arg6, 1, arg7))
        sub_142a47ff0(&var_228)
    
    sub_142a9dbc0(&var_1e8)

__security_check_cookie(rax_1 ^ &var_268)
return result
