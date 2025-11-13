// 函数: sub_142b25970
// 地址: 0x142b25970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void var_108
sub_142b74060(&var_108, arg4, 0, arg1 + 0x60)

if (sub_142b743d0(&var_108, arg1 + 0x60) != 0)
    char i
    
    do
        void var_e0
        sub_142a48100(arg1 + 0x18, &var_e0)
        int16_t rax_4 = *(arg1 + 0x20)
        int32_t r8_1
        
        if (rax_4 s< 0)
            r8_1 = *(arg1 + 0x24)
        else
            r8_1 = sx.d(rax_4) s>> 5
        
        sub_142a49810(arg1 + 0x18, 0, r8_1)
        int32_t var_9c
        int32_t rax_5 = sub_142aa60d0(arg2, var_9c)
        
        if (rax_5.b u>= 0xc0 && (rax_5.b & 0xf) == 9)
            sub_142b25770(arg1, arg3, *(arg2 + 0x18) + 4 + (zx.q(rax_5) u>> 0xd << 1))
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        void* rax_9 = sub_142a48580(sub_142a479b0(&var_88, arg1 + 0x18), arg3)
        sub_142a9e730(*(arg1 + 0x10), rax_9)
        sub_142a47ff0(&var_88)
        
        if ((*(arg1 + 0x20) & 1) == 0)
            *(arg1 + 0x20) &= 0x1f
        else
            *(arg1 + 0x20) = 2
        
        i = sub_142b743d0(&var_108, arg1 + 0x60)
    while (i != 0)

sub_142b74110(&var_108)
__security_check_cookie(rax_1 ^ &var_138)
return &icu_64::UObject::`vftable'
