// 函数: sub_142b7ff90
// 地址: 0x142b7ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_180 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t* rdi = arg2
arg2.b = 1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_f8
sub_142b661f0(&var_f8, sub_142a47a60(&var_138, arg2.b, u"[:Nd:]", 0xffffffff), rdi)
sub_142a47ff0(&var_138)

if (*rdi s<= 0)
    void var_178
    sub_142b18760(&var_178, &var_f8)
    
    while (sub_142b18960(&var_178) != 0)
        int32_t var_170
        int32_t rax_4 = sub_142a959a0(*(arg1 + 0x20), var_170)
        
        if (rax_4 != 0xc0 && rax_4 != 0xffffffff)
            int32_t rax_5 = sub_142b7ce30(arg1, rax_4, rdi)
            
            if (*rdi s> 0)
                break
            
            if (rax_5 s> 0x7ffff)
                *rdi = 0xf
                break
            
            int32_t rbx_5 = (rax_5 << 5 | sub_142a53ce0(var_170)) << 8 | 0xca
            sub_142b8d880(*(arg1 + 0x20), var_170, rbx_5, rdi)
    
    sub_142b187a0(&var_178)

sub_142a9dbc0(&var_f8)
__security_check_cookie(rax_1 ^ &var_1a8)
return &icu_64::UObject::`vftable'
