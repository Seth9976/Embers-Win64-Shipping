// 函数: sub_142b49cc0
// 地址: 0x142b49cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char rdi = 0
int32_t var_64 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
void* rbx

if (arg1 != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142b498a0(arg1, &var_58)
    rdi = 1
    int32_t var_64_1 = 1
    bool cond:0_1
    
    if ((rax_2[1].b & 1) == 0)
        int16_t rax_4 = rax_2[1].w
        int32_t r8_2
        
        if (rax_4 s< 0)
            r8_2 = *(rax_2 + 0xc)
        else
            r8_2 = sx.d(rax_4) s>> 5
        
        int16_t rax_5 = *(arg2 + 8)
        int32_t rax_7
        
        if (rax_5 s< 0)
            rax_7 = *(arg2 + 0xc)
        else
            rax_7 = sx.d(rax_5) s>> 5
        
        if ((*(arg2 + 8) & 1) == 0 && r8_2 == rax_7)
            cond:0_1 = sub_142a490e0(rax_2, arg2, r8_2) == 0
            goto label_142b49d62
        
        rbx.b = 0
    else
        cond:0_1 = (*(arg2 + 8) & 1) == 0
    label_142b49d62:
        
        if (cond:0_1)
            rbx.b = 0
        else
            rbx.b = 1
else if ((*(arg2 + 8) & 1) != 0)
    rbx.b = 1
else
    rbx.b = 0

if ((rdi & 1) != 0)
    sub_142a47ff0(&var_58)

__security_check_cookie(rax_1 ^ &var_88)
return zx.q(rbx.b)
