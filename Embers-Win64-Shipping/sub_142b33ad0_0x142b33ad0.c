// 函数: sub_142b33ad0
// 地址: 0x142b33ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_108
int64_t result = __security_cookie ^ &var_108
int64_t result_1 = result

if (*arg5 s<= 0)
    sub_142a48100(&arg1[2], arg3)
    struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_1 =
        sub_142b338b0(arg1, arg2, arg4, arg5)
    arg1[0xa] = rax_1
    int32_t r15_1 = 0
    
    if (rax_1 != 0)
        arg1[0xb] = sub_142b338b0(arg1, arg2, arg4, arg5)
    else
        arg1[0xb] = 0
    
    int32_t rcx_4 = 0
    int16_t rax_3 = arg1[3].w
    int32_t rdx_4
    
    if (rax_3 s< 0)
        rdx_4 = *(arg1 + 0x1c)
    else
        rdx_4 = sx.d(rax_3) s>> 5
    
    if (rdx_4 s< 0)
        if (rax_3 s< 0)
            rcx_4 = *(arg1 + 0x1c)
        else
            rcx_4 = sx.d(rax_3) s>> 5
    
    int32_t rdx_6
    
    if (rax_3 s< 0)
        rdx_6 = *(arg1 + 0x1c)
    else
        rdx_6 = sx.d(rax_3) s>> 5
    
    result = sub_142a4a330(&arg1[2], &data_14366bff8, 0, 0xffffffff, rcx_4, rdx_6 - rcx_4)
    int32_t rbx_1 = result.d
    
    if (result.d s>= 0)
        int32_t rdx_8 = result.d
        int16_t rcx_6 = arg1[3].w
        int32_t r8_3
        
        if (rcx_6 s< 0)
            r8_3 = *(arg1 + 0x1c)
        else
            r8_3 = sx.d(rcx_6) s>> 5
        
        if (rbx_1 s> r8_3)
            if (rcx_6 s< 0)
                rdx_8 = *(arg1 + 0x1c)
            else
                rdx_8 = sx.d(rcx_6) s>> 5
        
        int32_t rax_5
        
        if (rcx_6 s< 0)
            rax_5 = *(arg1 + 0x1c)
        else
            rax_5 = sx.d(rcx_6) s>> 5
        
        result = sub_142a4a330(&arg1[2], &data_14366c000, 0, 0xffffffff, rdx_8, rax_5 - rdx_8)
        int32_t rbp_1 = result.d
        
        if (result.d s>= 0)
            int32_t r8_4 = rbx_1
            int16_t rcx_8 = arg1[3].w
            int32_t rdx_11
            
            if (rcx_8 s< 0)
                rdx_11 = *(arg1 + 0x1c)
            else
                rdx_11 = sx.d(rcx_8) s>> 5
            
            if (rbx_1 s> rdx_11)
                if (rcx_8 s< 0)
                    r8_4 = *(arg1 + 0x1c)
                else
                    r8_4 = sx.d(rcx_8) s>> 5
            
            int32_t r9_3
            
            if (rcx_8 s< 0)
                r9_3 = *(arg1 + 0x1c)
            else
                r9_3 = sx.d(rcx_8) s>> 5
            
            result = sub_142a491f0(&arg1[2], 0x2c, r8_4, r9_3 - r8_4)
            int32_t r13_1 = result.d
            
            if (result.d s>= 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                sub_142a4ad20(&arg1[2], &var_88, rbx_1 + 2, r13_1 - rbx_1 - 2)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_12
                rdx_12.b = 1
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
                char rax_8 =
                    sub_142ab0e60(&var_88, sub_142a47a60(&var_c8, rdx_12.b, cardinal", 0xffffffff))
                sub_142a47ff0(&var_c8)
                
                if (rax_8 != 0)
                    goto label_142b33d3c
                
                char rax_10 =
                    sub_142ab0e60(&var_88, sub_142a47a60(&var_c8, 1, ordinal", 0xffffffff))
                sub_142a47ff0(&var_c8)
                
                if (rax_10 == 0)
                    *arg5 = 1
                else
                    r15_1 = 1
                label_142b33d3c:
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_11 =
                        sub_142a4ad20(&arg1[2], &var_c8, r13_1 + 1, rbp_1 - r13_1 - 1)
                    arg1[0xd] = sub_142aae330(arg1[0xc], r15_1, rax_11, arg5)
                    sub_142a47ff0(&var_c8)
                
                result = sub_142a47ff0(&var_88)
            else
                *arg5 = 9

__security_check_cookie(result_1 ^ &var_108)
return result
