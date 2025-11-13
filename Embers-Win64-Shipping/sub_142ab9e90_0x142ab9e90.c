// 函数: sub_142ab9e90
// 地址: 0x142ab9e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_2 = sub_142a86c30(**(arg1 + 8), arg2)
void* rsi = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
char rax_4

if (rax_2 == 0)
    int16_t rax_3 = *(arg2 + 8)
    int32_t r8_1
    
    if (rax_3 s< 0)
        r8_1 = *(arg2 + 0xc)
    else
        r8_1 = sx.d(rax_3) s>> 5
    
    rax_4 = sub_142a48fb0(arg2, 0, r8_1, u"other", 0, 5)
    
    if (rax_4 != 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
            sub_142a47a60(&var_68, 1, other", 5)
        rsi = sub_142a86c30(**(arg1 + 8), rax_5)
        sub_142a47ff0(&var_68)

if (rax_2 != 0 || (rax_4 != 0 && rsi != 0))
    sub_142a48100(arg3, rsi)
else
    sub_142a48050(arg3, Concurrency::agent::agent(&var_68, u"0.## "))
    sub_142a47ff0(&var_68)

__security_check_cookie(rax_1 ^ &var_a8)
return arg3
