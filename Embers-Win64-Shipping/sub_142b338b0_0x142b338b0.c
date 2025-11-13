// 函数: sub_142b338b0
// 地址: 0x142b338b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rbp = sx.q(sub_142b34330(arg1))
struct icu_64::UObject::icu_64::NFSubstitution::VTable** result

if (rbp.d != 0xffffffff)
    int32_t rcx = 0
    int16_t rax_3 = arg1[3].w
    int32_t rdx_1
    
    if (rax_3 s< 0)
        rdx_1 = *(arg1 + 0x1c)
    else
        rdx_1 = sx.d(rax_3) s>> 5
    
    if (rdx_1 s< 0)
        if (rax_3 s< 0)
            rcx = *(arg1 + 0x1c)
        else
            rcx = sx.d(rax_3) s>> 5
    
    int32_t rdx_3
    
    if (rax_3 s< 0)
        rdx_3 = *(arg1 + 0x1c)
    else
        rdx_3 = sx.d(rax_3) s>> 5
    
    int32_t rdi_1
    
    if (sub_142a4a330(&arg1[2], &data_14366c060, 0, 3, rcx, rdx_3 - rcx) != rbp.d)
        int16_t rcx_3 = arg1[3].w
        int32_t rax_6
        
        if (rcx_3 s< 0)
            rax_6 = *(arg1 + 0x1c)
        else
            rax_6 = sx.d(rcx_3) s>> 5
        
        int16_t rbx_1
        
        if (rbp.d u>= rax_6)
            rbx_1 = -1
        else
            void* rcx_4 = arg1 + 0x1a
            
            if ((rcx_3.b & 2) == 0)
                rcx_4 = arg1[5]
            
            rbx_1 = *(rcx_4 + (rbp << 1))
        
        int32_t rax_7 = sub_142b342c0(&arg1[2], rbx_1, (rbp + 1).d)
        rdi_1 = rax_7
        
        if (rbx_1 != 0x3c)
            goto label_142b339ee
        
        if (rax_7 != 0xffffffff)
            int16_t rax_8 = arg1[3].w
            int32_t rax_10
            
            if (rax_8 s< 0)
                rax_10 = *(arg1 + 0x1c)
            else
                rax_10 = sx.d(rax_8) s>> 5
            
            if (rdi_1 s< rax_10 - 1 && sub_142a4a1a0(&arg1[2], rdi_1 + 1) == 0x3c)
                rdi_1 += 1
            
            goto label_142b339ee
        
        result = nullptr
    else
        rdi_1 = (rbp + 2).d
    label_142b339ee:
        
        if (rdi_1 == 0xffffffff)
            result = nullptr
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            sub_142a4afe0(&var_98)
            int32_t r8_2
            int32_t var_8c
            
            if (var_90_1 s< 0)
                r8_2 = var_8c
            else
                r8_2 = sx.d(var_90_1) s>> 5
            sub_142a49310(&var_98, 0, r8_2, &arg1[2], rbp.d, rdi_1 - rbp.d + 1)
            int32_t var_c0_2
            var_c0_2.q = &var_98
            int32_t var_c8_2
            var_c8_2.q = arg1[0xc]
            struct icu_64::UObject::icu_64::NFSubstitution::VTable** result_1 =
                sub_142b82c90(rbp.d, arg1, arg3, arg2, var_c8_2, var_c0_2, arg4)
            sub_142a49390(&arg1[2], rbp.d, rdi_1 - rbp.d + 1, 0, 0, 0)
            sub_142a47ff0(&var_98)
            result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_e8)
return result
