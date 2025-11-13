// 函数: sub_142b34180
// 地址: 0x142b34180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rbx = arg4
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t var_98 = 0

if (rbx s>= sub_142a4a1f0(arg2))
label_142b3426b:
    *arg5 = 0
    rbx = -1
else
    while (true)
        int32_t rdi_2 = sub_142a4a1f0(arg2) - rbx
        sub_142a4afe0(&var_88)
        int32_t r8_1
        int32_t var_7c
        
        if (var_80 s< 0)
            r8_1 = var_7c
        else
            r8_1 = sx.d(var_80) s>> 5
        sub_142a49310(&var_88, 0, r8_1, arg2, rbx, rdi_2)
        int32_t rax_5 = sub_142b35120(arg1, &var_88, arg3, &var_98)
        
        if (var_98 s> 0)
            goto label_142b3426b
        
        if (rax_5 != 0)
            *arg5 = rax_5
            break
        
        rbx += 1
        
        if (rbx s>= sub_142a4a1f0(arg2))
            goto label_142b3426b

sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rbx)
