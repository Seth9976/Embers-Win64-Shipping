// 函数: sub_142a5c410
// 地址: 0x142a5c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int128_t zmm6 = arg2

if (*arg5 s<= 0)
    if (*(arg1 + 0x170) != 0)
        char rax_1
        
        if (*(arg4 + 8) == 0xffffffff)
            rax_1, zmm6 = sub_142a5bfa0(arg1, arg2, arg3)
        
        if (*(arg4 + 8) != 0xffffffff || rax_1 == 0)
            struct icu_64::FormattedValue::icu_64::number::FormattedNumber::VTable* var_50
            sub_142ab7d90(*(*(arg1 + 0x170) + 0x10), &var_50, zmm6, arg5)
            int16_t rax_3 = *(arg3 + 8)
            int32_t rdi_2
            
            if (rax_3 s< 0)
                rdi_2 = *(arg3 + 0xc)
            else
                rdi_2 = sx.d(rax_3) s>> 5
            
            if (*arg5 s<= 0)
                *(arg4 + 0xc) = 0
                
                if (sub_142ab8700(&var_50, arg4, arg5) != 0 && rdi_2 != 0)
                    void var_38
                    sub_142abb160(&var_38, arg4)
                    sub_142abb540(&var_38, rdi_2)
                    sub_142abb180(&var_38)
            
            struct icu_64::Appendable::icu_64::UnicodeStringAppendable::VTable* var_60 =
                &icu_64::UnicodeStringAppendable::`vftable'{for `icu_64::Appendable'}
            void* var_58_1 = arg3
            sub_142ab86b0(&var_50, &var_60, arg5)
            sub_142a48040(&var_60)
            sub_142ab8640(&var_50)
    else
        *arg5 = 7
        sub_142a4ab40(arg3)

return arg3
