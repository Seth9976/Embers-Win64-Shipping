// 函数: sub_142b7d400
// 地址: 0x142b7d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_b0 = 2
uint16_t var_d8 = (arg2 u>> 0x10).w
int16_t var_d0 = arg2.w
sub_142a48d70(sub_142a48d70(&var_b8, &var_d8, 0, 1), &var_d0, 0, 1)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_70 = 2
void* rax_5 = sub_142b10f50(arg3, 1, &var_78, arg4)
int16_t rcx_3 = *(rax_5 + 8)
int32_t r9_2

if (rcx_3 s< 0)
    r9_2 = *(rax_5 + 0xc)
else
    r9_2 = sx.d(rcx_3) s>> 5

sub_142a48d00(&var_b8, rax_5, 0, r9_2)
int32_t rbx_1

if (*arg4 s<= 0)
    int16_t rax_6 = *(arg1 + 0x160)
    int32_t r8_2
    
    if (rax_6 s< 0)
        r8_2 = *(arg1 + 0x164)
    else
        r8_2 = sx.d(rax_6) s>> 5
    
    int32_t var_ac
    int32_t rcx_5 = var_ac
    int16_t rdx_3 = var_b0
    uint64_t r9_4
    
    if (rdx_3 s< 0)
        r9_4 = zx.q(rcx_5)
    else
        r9_4 = zx.q(sx.d(rdx_3) s>> 5)
    
    char r11_1 = var_b0.b
    
    if ((r11_1 & 1) != 0)
        rbx_1 = -1
    else
        int32_t rax_8
        
        if (rdx_3 s< 0)
            rax_8 = rcx_5
        else
            rax_8 = sx.d(rdx_3) s>> 5
        
        int32_t r10_1 = 0
        
        if (rax_8 s< 0)
            r10_1 = rax_8
        
        if (r9_4.d s< 0)
            rbx_1 = -1
        else
            int32_t rax_9 = rax_8 - r10_1
            
            if (r9_4.d s> rax_9)
                r9_4 = zx.q(rax_9)
            
            if (r9_4.d s<= 0)
                rbx_1 = -1
            else
                void var_ae
                void* rdx_4 = &var_ae
                void* var_a0
                
                if ((r11_1 & 2) == 0)
                    rdx_4 = var_a0
                rbx_1 = sub_142a4a330(arg1 + 0x158, rdx_4, r10_1, r9_4, 0, r8_2)
                rcx_5 = var_ac
                rdx_3 = var_b0
    
    if (rbx_1 s< 0)
        int16_t rax_11 = *(arg1 + 0x160)
        
        if (rax_11 s< 0)
            rbx_1 = *(arg1 + 0x164)
        else
            rbx_1 = sx.d(rax_11) s>> 5
        
        if (rdx_3 s>= 0)
            rcx_5 = sx.d(rdx_3) s>> 5
        
        sub_142a48d00(arg1 + 0x158, &var_b8, 0, rcx_5)
else
    rbx_1 = -1

sub_142a47ff0(&var_78)
sub_142a47ff0(&var_b8)
__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx_1)
