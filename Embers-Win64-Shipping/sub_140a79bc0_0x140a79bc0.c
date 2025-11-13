// 函数: sub_140a79bc0
// 地址: 0x140a79bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_130 = 2
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a508d0(arg1 + 8, sub_142a45710(&var_f8, "en", nullptr, nullptr, nullptr), &var_138)
sub_142a45a20(&var_f8)
*arg2 = 0
arg2[1] = 0
int32_t rbx_2
int32_t var_12c

if (var_130 s< 0)
    rbx_2 = var_12c
else
    rbx_2 = sx.d(var_130) s>> 5

if (rbx_2 s> 0)
    if (rbx_2 + 1 s> 0)
        arg2[1].d = rbx_2 + 1
        sub_140594770(arg2)
    else if (rbx_2 + 1 s< 0 && rbx_2 != 0xffffffff)
        arg2[1].d = rbx_2 + 1
        sub_1405a50a0(arg2)
    
    char rax_5 = var_130.b
    void* rdx_2
    
    if ((rax_5 & 0x11) == 0)
        void var_12e
        rdx_2 = &var_12e
        void* var_120
        
        if ((rax_5 & 2) == 0)
            rdx_2 = var_120
    else
        rdx_2 = nullptr
    
    int64_t rbx_3 = sx.q(rbx_2) * 2
    memcpy(*arg2, rdx_2, rbx_3.d)
    *(rbx_3 + *arg2) = 0

sub_142a47ff0(&var_138)
__security_check_cookie(rax_1 ^ &var_168)
return arg2
