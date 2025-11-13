// 函数: sub_142af4030
// 地址: 0x142af4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t* rbx = nullptr
int32_t var_f8 = 0
int64_t* result = sub_142b6ada0(&var_f8)

if (var_f8 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    sub_142a47b70(&var_98, arg2)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    int64_t* result_1 = result
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_e0_1 = &var_58
    int64_t var_d8_1 = (zx.o(0)).q
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    char var_bc_1 = 0
    int16_t var_90
    int32_t var_8c
    
    if (sub_142b1e9d0(&result_1, 5, &var_f8) != 0)
        if ((var_90.b & 0x11) == 0)
            void var_8e
            rbx = &var_8e
            int16_t* var_80
            
            if ((var_90.b & 2) == 0)
                rbx = var_80
        
        int32_t rcx_4
        
        if (var_90 s< 0)
            rcx_4 = var_8c
        else
            rcx_4 = sx.d(var_90) s>> 5
        
        sub_142b1a300(result, rbx, &rbx[sx.q(rcx_4)], 0, 1, &result_1, &var_f8)
    
    if (var_d8_1 != 0)
        sub_142a4a600(var_e0_1, ((var_c8_1 - var_d8_1) s>> 1).d)
    
    if (var_f8 s> 0)
        rbx.b = 0
    else
        bool cond:1_1
        
        if ((var_50_1.b & 1) == 0)
            int32_t r8_4
            int32_t var_4c
            
            if (var_50_1 s< 0)
                r8_4 = var_4c
            else
                r8_4 = sx.d(var_50_1) s>> 5
            int32_t rax_11
            
            if (var_90 s< 0)
                rax_11 = var_8c
            else
                rax_11 = sx.d(var_90) s>> 5
            
            if ((var_90.b & 1) == 0 && r8_4 == rax_11)
                cond:1_1 = sub_142a490e0(&var_58, &var_98, r8_4) != 0
                goto label_142af41ad
            
            rbx.b = 1
        else
            cond:1_1 = (var_90.b & 1) != 0
        label_142af41ad:
            
            if (cond:1_1)
                rbx.b = 0
            else
                rbx.b = 1
    
    sub_142a47ff0(&var_58)
    sub_142a47ff0(&var_98)
    result = zx.q(rbx.b)
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
