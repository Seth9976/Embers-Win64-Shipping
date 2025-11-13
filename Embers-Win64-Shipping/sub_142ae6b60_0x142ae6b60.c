// 函数: sub_142ae6b60
// 地址: 0x142ae6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_d8 = arg2
int32_t var_e8 = 0
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
int32_t var_e8_1 = 1
sub_142a48100(arg2, arg4 + 8)

if (sub_142a98a20(arg2, arg1 + 0x250) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_c0_1 = 2
    sub_142a48100(&var_c8, arg4 + 8)
    int32_t r8_1
    int32_t var_bc
    
    if (var_c0_1 s< 0)
        r8_1 = var_bc
    else
        r8_1 = sx.d(var_c0_1) s>> 5
    char rax_4 = var_c0_1.b
    void* rdx_3
    
    if ((rax_4 & 0x11) == 0)
        void var_be
        rdx_3 = &var_be
        void* var_b0
        
        if ((rax_4 & 2) == 0)
            rdx_3 = var_b0
    else
        rdx_3 = nullptr
    
    if (sub_142b64c20(arg3, rdx_3, r8_1) == 0)
        int32_t rax_6 = sub_142a64620(&var_c8)
        int32_t rbx_1 = 0
        
        if (rax_6 s<= 0)
        label_142ae6cdc:
            GetTimeZoneInformation(arg3)
        else
            while (true)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                sub_142a657c0(&var_88, &var_c8, rbx_1)
                int16_t var_80
                int32_t r8_4
                int32_t var_7c
                
                if (var_80 s< 0)
                    r8_4 = var_7c
                else
                    r8_4 = sx.d(var_80) s>> 5
                void* rdx_5
                
                if ((var_80.b & 0x11) == 0)
                    void var_7e
                    rdx_5 = &var_7e
                    void* var_70
                    
                    if ((var_80.b & 2) == 0)
                        rdx_5 = var_70
                else
                    rdx_5 = nullptr
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_8 = &var_88
                
                if (sub_142b64c20(arg3, rdx_5, r8_4) != 0)
                    sub_142a47ff0(rcx_8)
                    break
                
                sub_142a47ff0(rcx_8)
                rbx_1 += 1
                
                if (rbx_1 s>= rax_6)
                    goto label_142ae6cdc
    
    sub_142a47ff0(&var_c8)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
