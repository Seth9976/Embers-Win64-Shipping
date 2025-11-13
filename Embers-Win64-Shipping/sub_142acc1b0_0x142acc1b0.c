// 函数: sub_142acc1b0
// 地址: 0x142acc1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_142a4ab40(arg2)
void* result

if (*arg3 s> 0)
    result = arg2
else
    int32_t rdi_1 = 0
    int32_t rcx_1 = 0
    int16_t rax_2 = *(arg1 + 8)
    int32_t rdx_1
    
    if (rax_2 s< 0)
        rdx_1 = *(arg1 + 0xc)
    else
        rdx_1 = sx.d(rax_2) s>> 5
    
    if (rdx_1 s< 0)
        if (rax_2 s< 0)
            rcx_1 = *(arg1 + 0xc)
        else
            rcx_1 = sx.d(rax_2) s>> 5
    
    int32_t rdx_3
    
    if (rax_2 s< 0)
        rdx_3 = *(arg1 + 0xc)
    else
        rdx_3 = sx.d(rax_2) s>> 5
    
    int32_t rax_3 = sub_142a4a330(arg1, &data_143656118, 0, 2, rcx_1, rdx_3 - rcx_1)
    
    if (rax_3 s< 0)
        *arg3 = 1
        result = arg2
    else
        int32_t var_98 = 0x480048
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
            sub_142a4ad20(arg1, &var_88, 0, rax_3)
        int32_t r8 = 0
        int16_t rcx_5 = rax_4[1].w
        int32_t rdx_7
        
        if (rcx_5 s< 0)
            rdx_7 = *(rax_4 + 0xc)
        else
            rdx_7 = sx.d(rcx_5) s>> 5
        
        if (rdx_7 s< 0)
            if (rcx_5 s< 0)
                r8 = *(rax_4 + 0xc)
            else
                r8 = sx.d(rcx_5) s>> 5
        
        int32_t rax_6
        
        if (rcx_5 s< 0)
            rax_6 = *(rax_4 + 0xc)
        else
            rax_6 = sx.d(rcx_5) s>> 5
        
        int32_t rax_8 = sub_142a4a410(rax_4, &var_98, 0, 2, r8, rax_6 - r8)
        sub_142a47ff0(&var_88)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_9 = &var_88
        
        if (rax_8 s< 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                sub_142a4ad20(arg1, rdx_9, 0, rax_3)
            int16_t rcx_11 = rax_10[1].w
            int32_t rdx_12
            
            if (rcx_11 s< 0)
                rdx_12 = *(rax_10 + 0xc)
            else
                rdx_12 = sx.d(rcx_11) s>> 5
            
            if (rdx_12 s< 0)
                if (rcx_11 s< 0)
                    rdi_1 = *(rax_10 + 0xc)
                else
                    rdi_1 = sx.d(rcx_11) s>> 5
            
            int32_t r9_5
            
            if (rcx_11 s< 0)
                r9_5 = *(rax_10 + 0xc)
            else
                r9_5 = sx.d(rcx_11) s>> 5
            
            int32_t rax_11 = sub_142a49270(rax_10, 0x48, rdi_1, r9_5 - rdi_1)
            sub_142a47ff0(&var_88)
            
            if (rax_11 s< 0)
                *arg3 = 1
                result = arg2
            else
                void* result_2 = sub_142a48aa0(arg2, sub_142a4ad20(arg1, &var_88, 0, rax_11 + 1), 0)
                sub_142a47ff0(&var_88)
                result = result_2
        else
            void* result_1 = sub_142a48aa0(arg2, sub_142a4ad20(arg1, rdx_9, 0, rax_8 + 2), 0)
            sub_142a47ff0(&var_88)
            result = result_1

__security_check_cookie(rax_1 ^ &var_c8)
return result
