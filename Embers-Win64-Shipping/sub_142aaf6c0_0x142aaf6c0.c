// 函数: sub_142aaf6c0
// 地址: 0x142aaf6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r9 = arg3
int32_t var_c8 = 0
int64_t* rax_2 = *(arg1 + 0x2a0)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_3
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8

if (rax_2 == 0)
    int64_t* rax_4 = *(arg1 + 0x170)
    
    if (rax_4 == 0)
    label_142aaf7a5:
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_60_1 = 2
        sub_142a47930(arg2, &var_68)
        rcx_3 = &var_68
    else
        var_a8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_a0_1 = 2
        
        while (true)
            void* rdx_3 = *rax_4
            
            if (rdx_3 == 0)
                sub_142a47ff0(&var_a8)
                goto label_142aaf7a5
            
            if (*(rdx_3 + 0x99) != 0)
                r9 -= 1
                
                if (r9 == 0xffffffff)
                    sub_142a48aa0(&var_a8, rdx_3, 0)
                    sub_142a47930(arg2, &var_a8)
                    rcx_3 = &var_a8
                    break
            
            rax_4 = &rax_4[1]
else
    int64_t r8 = *rax_2
    sub_142a47a60(&var_a8, 1, (*(r8 + 0x18))(rax_2, zx.q(r9), r8), 0xffffffff)
    sub_142a47930(arg2, &var_a8)
    rcx_3 = &var_a8
sub_142a47ff0(rcx_3)
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
