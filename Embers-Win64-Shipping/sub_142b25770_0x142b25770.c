// 函数: sub_142b25770
// 地址: 0x142b25770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void var_e8
sub_142b74060(&var_e8, arg3, 0, arg1 + 0x60)

if (sub_142b743d0(&var_e8, arg1 + 0x60) != 0)
    char i
    
    do
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        void* rax_5 = sub_142a48580(sub_142a479b0(&var_68, arg1 + 0x18), arg2)
        int64_t var_b8
        int16_t rcx_4 = var_b8.w
        int32_t r9_2
        
        if (rcx_4 s< 0)
            r9_2 = var_b8:4.d
        else
            r9_2 = sx.d(rcx_4) s>> 5
        
        void var_c0
        void* rax_6 = sub_142a48d00(rax_5, &var_c0, 0, r9_2)
        sub_142a9e730(*(arg1 + 0x10), rax_6)
        sub_142a47ff0(&var_68)
        i = sub_142b743d0(&var_e8, arg1 + 0x60)
    while (i != 0)

sub_142b74110(&var_e8)
__security_check_cookie(rax_1 ^ &var_118)
return &icu_64::UObject::`vftable'
