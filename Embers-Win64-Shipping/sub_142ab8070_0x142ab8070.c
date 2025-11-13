// 函数: sub_142ab8070
// 地址: 0x142ab8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void var_c8
sub_142b3f020(&var_c8)
char rsi = 1

if (arg3 != 0)
    rsi = -1

void* r9 = &var_c8
int32_t rax_3

if (sub_142ab7920(arg1, arg5) == 0)
    rax_3 = sub_142b3df20(arg1, rsi, 5, r9, arg5)
else
    rax_3 = sub_142b3dea0(*(arg1 + 0x1c8), rsi, 5, r9, arg5)

if ((*(arg4 + 8) & 1) == 0)
    *(arg4 + 8) &= 0x1f
else
    *(arg4 + 8) = 2

void* rcx_4 = &var_c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_9
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108

if (arg2 == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
        sub_142a71620(sub_142b409b0(rcx_4, &var_148), &var_108, rax_3, sub_142b3fee0(&var_c8))
    int16_t rcx_12 = rax_8[1].w
    int32_t r9_6
    
    if (rcx_12 s< 0)
        r9_6 = *(rax_8 + 0xc)
    else
        r9_6 = sx.d(rcx_12) s>> 5
    
    sub_142a48d00(arg4, rax_8, 0, r9_6)
    sub_142a47ff0(&var_108)
    rcx_9 = &var_148
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
        sub_142a71620(sub_142b409b0(rcx_4, &var_108), &var_148, 0, rax_3)
    int16_t rcx_6 = rax_5[1].w
    int32_t r9_3
    
    if (rcx_6 s< 0)
        r9_3 = *(rax_5 + 0xc)
    else
        r9_3 = sx.d(rcx_6) s>> 5
    
    sub_142a48d00(arg4, rax_5, 0, r9_3)
    sub_142a47ff0(&var_148)
    rcx_9 = &var_108
sub_142a47ff0(rcx_9)
int64_t result = sub_142b3f040(&var_c8)
__security_check_cookie(rax_1 ^ &var_188)
return result
