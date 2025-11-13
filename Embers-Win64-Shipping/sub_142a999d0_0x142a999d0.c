// 函数: sub_142a999d0
// 地址: 0x142a999d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result

if (*arg4 s> 0)
    result = 0
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    void* rax_3 = (*(*arg2 + 0x20))(arg2, &var_58, arg2)
    bool cond:0_1
    
    if ((*(arg1 + 0x18) & 1) == 0)
        int16_t rcx_1 = *(arg1 + 0x18)
        int32_t r8_2
        
        if (rcx_1 s< 0)
            r8_2 = *(arg1 + 0x1c)
        else
            r8_2 = sx.d(rcx_1) s>> 5
        
        int16_t rcx_2 = *(rax_3 + 8)
        int32_t rcx_4
        
        if (rcx_2 s< 0)
            rcx_4 = *(rax_3 + 0xc)
        else
            rcx_4 = sx.d(rcx_2) s>> 5
        
        if ((*(rax_3 + 8) & 1) == 0 && r8_2 == rcx_4)
            cond:0_1 = sub_142a490e0(arg1 + 0x10, rax_3, r8_2) == 0
            goto label_142a99a7d
        
        sub_142a47ff0(&var_58)
        result = 0
    else
        cond:0_1 = (*(rax_3 + 8) & 1) == 0
    label_142a99a7d:
        
        if (cond:0_1)
            sub_142a47ff0(&var_58)
            result = 0
        else
            int64_t result_1 = (*(*arg3 + 0x68))(arg3, *(arg1 + 8))
            sub_142a47ff0(&var_58)
            result = result_1

__security_check_cookie(rax_1 ^ &var_88)
return result
