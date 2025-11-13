// 函数: sub_142b12530
// 地址: 0x142b12530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (*arg4 s> 0)
    result = 0
else
    int32_t rax_3
    
    if (*(arg1 + 0x98) != 0xffffffff)
        rax_3 = (*(*arg2 + 0x48))(arg2)
    
    if (*(arg1 + 0x98) != 0xffffffff && *(arg1 + 0x98) != rax_3)
        result = 0
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_60_1 = 2
        (*(*arg2 + 0x20))(arg2, &var_68)
        bool cond:0_1
        
        if ((*(arg1 + 0x60) & 1) == 0)
            int16_t rax_6 = *(arg1 + 0x60)
            int32_t r8_1
            
            if (rax_6 s< 0)
                r8_1 = *(arg1 + 0x64)
            else
                r8_1 = sx.d(rax_6) s>> 5
            
            int32_t rax_9
            int32_t var_5c
            
            if (var_60_1 s< 0)
                rax_9 = var_5c
            else
                rax_9 = sx.d(var_60_1) s>> 5
            
            if ((var_60_1.b & 1) == 0 && r8_1 == rax_9)
                cond:0_1 = sub_142a490e0(arg1 + 0x58, &var_68, r8_1) == 0
                goto label_142b125fe
            
            sub_142a47ff0(&var_68)
            result = 0
        else
            cond:0_1 = (var_60_1.b & 1) == 0
        label_142b125fe:
            
            if (cond:0_1)
                sub_142a47ff0(&var_68)
                result = 0
            else
                int64_t result_1 = (*(*arg3 + 0x68))(arg3, *(arg1 + 0x50))
                sub_142a47ff0(&var_68)
                result = result_1

__security_check_cookie(rax_1 ^ &var_98)
return result
