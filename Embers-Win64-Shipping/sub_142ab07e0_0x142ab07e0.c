// 函数: sub_142ab07e0
// 地址: 0x142ab07e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* rdi = arg2
int64_t result

if (*arg2 s<= 0)
    if (*(arg1 + 0x288) == 0)
        arg2.b = 1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142a47a60(&var_98, arg2.b, u"NaN: ", 0xffffffff)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
            sub_142aaf870(*(arg1 + 0x278), &var_58, 0xf)
        int16_t rcx_2 = rax_2[1].w
        int32_t r9_2
        
        if (rcx_2 s< 0)
            r9_2 = *(rax_2 + 0xc)
        else
            r9_2 = sx.d(rcx_2) s>> 5
        
        sub_142a48d00(&var_98, rax_2, 0, r9_2)
        sub_142a47ff0(&var_58)
        int64_t* rax_3 = j_sub_142a7dd00(0x70)
        int64_t* var_a8_1 = rax_3
        int64_t* rbx_1
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_142b32420(rax_3, arg1, &var_98, rdi)
        
        if (rbx_1 == 0)
            if (*rdi s<= rbx_1.d)
                *rdi = 7
            
            goto label_142ab08dd
        
        if (*rdi s> 0)
        label_142ab08dd:
            
            if (rbx_1 != 0)
                sub_142b324e0(rbx_1)
                sub_142a47920(rbx_1)
        else
            *(arg1 + 0x288) = rbx_1
        
        sub_142a47ff0(&var_98)
    
    result = *(arg1 + 0x288)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
