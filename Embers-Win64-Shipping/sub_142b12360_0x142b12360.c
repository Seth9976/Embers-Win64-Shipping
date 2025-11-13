// 函数: sub_142b12360
// 地址: 0x142b12360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint32_t r8 = *(arg1 + 0x48)

if (r8 != 0xffffffff)
    void var_98
    sub_142ae7b00(&var_98, 0x40, r8, 0xa, 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
    Concurrency::agent::agent(&var_d8, &var_98)
    int16_t var_d0
    int32_t r9_2
    int32_t var_cc
    
    if (var_d0 s< 0)
        r9_2 = var_cc
    else
        r9_2 = sx.d(var_d0) s>> 5
    sub_142a48d00(arg2, &var_d8, 0, r9_2)
    sub_142a47ff0(&var_d8)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
