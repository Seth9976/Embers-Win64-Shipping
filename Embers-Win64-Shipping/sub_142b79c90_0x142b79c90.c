// 函数: sub_142b79c90
// 地址: 0x142b79c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_100 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t rax_3 = sub_142b7c070(arg1, sub_142b7c9e0(arg1, arg3), &var_108, arg4)

if (*arg4 s<= 0 && (var_100 & 0xffe0) == 0)
    *arg4 = 3
    *(arg1 + 0x30) = "missing relation string"
    
    if (*(arg1 + 0x28) != 0)
        sub_142b7c7c0(arg1)

int64_t rbp = sx.q(sub_142b7c9e0(arg1, rax_3))

if (*arg4 s<= 0)
    void* rax_5 = *(arg1 + 0x10)
    int16_t rcx_4 = *(rax_5 + 8)
    int32_t rcx_6
    
    if (rcx_4 s< 0)
        rcx_6 = *(rax_5 + 0xc)
    else
        rcx_6 = sx.d(rcx_4) s>> 5
    
    if (rbp.d s>= rcx_6)
    label_142b79ea6:
        
        if ((var_c0 & 0xffe0) == 0)
        label_142b79f1c:
            int64_t* rcx_26 = *(arg1 + 0x38)
            (*(*rcx_26 + 0x18))(rcx_26, zx.q(arg2), &var_c8, &var_108, &var_88, arg1 + 0x30, arg4)
            
            if (*arg4 s> 0)
                sub_142b7c7c0(arg1)
            
            *(arg1 + 0x48) = rbp.d
        else
            int32_t rax_16 = sub_142a486d0(&var_c8, 0)
            int32_t rax_17 = sub_142a486d0(&var_108, 0)
            int64_t* rcx_23 = *(arg1 + 8)
            int64_t r8_3 = *rcx_23
            char rax_18 = (*(r8_3 + 0x70))(rcx_23, zx.q(rax_16), r8_3)
            char rax_19
            
            if (rax_18 != 0)
                int64_t* rcx_24 = *(arg1 + 8)
                int64_t r8_4 = *rcx_24
                rax_19 = (*(r8_4 + 0x70))(rcx_24, zx.q(rax_17), r8_4)
            
            if (rax_18 != 0 && rax_19 != 0)
                goto label_142b79f1c
            
            if (*arg4 s<= 0)
                *arg4 = 3
                *(arg1 + 0x30) =
                    "in 'prefix|str', prefix and str must each start with an NFC boundary"
                
                if (*(arg1 + 0x28) != 0)
                    sub_142b7c7c0(arg1)
    else
        int16_t rdx_3 = *(rax_5 + 8)
        int32_t rcx_8
        
        if (rdx_3 s< 0)
            rcx_8 = *(rax_5 + 0xc)
        else
            rcx_8 = sx.d(rdx_3) s>> 5
        
        int16_t rcx_10
        
        if (rbp.d u>= rcx_8)
            rcx_10 = -1
        else
            void* rcx_9 = rax_5 + 0xa
            
            if ((rdx_3.b & 2) == 0)
                rcx_9 = *(rax_5 + 0x18)
            
            rcx_10 = *(rcx_9 + (rbp << 1))
        
        if (rcx_10 != 0x7c)
            goto label_142b79e48
        
        sub_142a48100(&var_c8, &var_108)
        int32_t rax_7 = sub_142b7c070(arg1, sub_142b7c9e0(arg1, (rbp + 1).d), &var_108, arg4)
        
        if (*arg4 s<= 0 && (var_100 & 0xffe0) == 0)
            *arg4 = 3
            *(arg1 + 0x30) = "missing relation string"
            
            if (*(arg1 + 0x28) != 0)
                sub_142b7c7c0(arg1)
        
        rbp = zx.q(sub_142b7c9e0(arg1, rax_7))
        
        if (*arg4 s<= 0)
            void* rcx_16 = *(arg1 + 0x10)
            int16_t rax_9 = *(rcx_16 + 8)
            int32_t rax_11
            
            if (rax_9 s< 0)
                rax_11 = *(rcx_16 + 0xc)
            else
                rax_11 = sx.d(rax_9) s>> 5
            
            if (rbp.d s>= rax_11)
                goto label_142b79ea6
            
            rcx_10 = sub_142a4a1a0(rcx_16, rbp.d)
        label_142b79e48:
            
            if (rcx_10 != 0x2f)
                goto label_142b79ea6
            
            int32_t rax_14 = sub_142b7c070(arg1, sub_142b7c9e0(arg1, (rbp + 1).d), &var_88, arg4)
            
            if (*arg4 s<= 0 && (var_80 & 0xffe0) == 0)
                *arg4 = 3
                *(arg1 + 0x30) = "missing relation string"
                
                if (*(arg1 + 0x28) != 0)
                    sub_142b7c7c0(arg1)
            
            rbp = zx.q(sub_142b7c9e0(arg1, rax_14))
            goto label_142b79ea6

sub_142a47ff0(&var_88)
sub_142a47ff0(&var_108)
sub_142a47ff0(&var_c8)
__security_check_cookie(rax_1 ^ &var_158)
return &icu_64::UObject::`vftable'
