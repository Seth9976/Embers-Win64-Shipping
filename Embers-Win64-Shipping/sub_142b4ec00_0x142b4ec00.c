// 函数: sub_142b4ec00
// 地址: 0x142b4ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8

if ((*(arg1 + 8) & 0xffe0) == 0)
    sub_142a4ab40(arg2)
else
    int32_t rdi_1 = 0
    
    if (sub_142a48fb0(arg1, 0, 4, u"Etc/SystemV/Riyadh8", 0, 4) == 0)
        sub_142a4ab40(arg2)
    else if (sub_142a48fb0(arg1, 0, 8, &(*u"Etc/SystemV/Riyadh8")[4], 0, 8) == 0)
        sub_142a4ab40(arg2)
    else
        int16_t rax_4 = *(arg1 + 8)
        int32_t rcx_2
        
        if (rax_4 s< 0)
            rcx_2 = *(arg1 + 0xc)
        else
            rcx_2 = sx.d(rax_4) s>> 5
        
        if (rcx_2 s< 0)
            if (rax_4 s< 0)
                rdi_1 = *(arg1 + 0xc)
            else
                rdi_1 = sx.d(rax_4) s>> 5
        
        int32_t rcx_4
        
        if (rax_4 s< 0)
            rcx_4 = *(arg1 + 0xc)
        else
            rcx_4 = sx.d(rax_4) s>> 5
        
        if (sub_142a4a330(arg1, &(*u"Etc/SystemV/Riyadh8")[0xc], 0, 7, rdi_1, rcx_4 - rdi_1) s> 0)
            sub_142a4ab40(arg2)
        else
            int16_t rax_6 = *(arg1 + 8)
            int32_t r9_2
            
            if (rax_6 s< 0)
                r9_2 = *(arg1 + 0xc)
            else
                r9_2 = sx.d(rax_6) s>> 5
            
            int32_t rax_7 = sub_142a49270(arg1, 0x2f, 0, r9_2)
            
            if (rax_7 s<= 0)
                sub_142a4ab40(arg2)
            else
                int16_t rcx_8 = *(arg1 + 8)
                int32_t rcx_10
                
                if (rcx_8 s< 0)
                    rcx_10 = *(arg1 + 0xc)
                else
                    rcx_10 = sx.d(rcx_8) s>> 5
                
                if (rax_7 + 1 s>= rcx_10)
                    sub_142a4ab40(arg2)
                else
                    sub_142a4a8a0(arg2, arg1, rax_7 + 1)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
                        sub_142a47fc0(&var_58, 0x20)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                    sub_142a58a40(arg2, sub_142a47fc0(&var_98, 0x5f), rax_8)
                    sub_142a47ff0(&var_98)
                    sub_142a47ff0(&var_58)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
