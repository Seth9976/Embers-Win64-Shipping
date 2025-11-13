// 函数: sub_142aae600
// 地址: 0x142aae600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108

if (*arg5 s<= 0)
    if (arg2 != -0x8000000000000000)
        int16_t rax_7 = *(arg4 + 8)
        int32_t rsi_3
        
        if (rax_7 s< 0)
            rsi_3 = *(arg4 + 0xc)
        else
            rsi_3 = sx.d(rax_7) s>> 5
        
        int32_t r9_2
        
        if (rax_7 s< 0)
            r9_2 = *(arg4 + 0xc)
        else
            r9_2 = sx.d(rax_7) s>> 5
        
        sub_142b36320(arg3, arg2, arg4, r9_2, 0, arg5)
        sub_142aae100(arg1, rsi_3, arg4, arg5)
    else
        int64_t* rax_2 = sub_142a58760(&arg1[0x32], 1, arg5)
        
        if (rax_2 != 0)
            struct icu_64::UObject::icu_64::Formattable::VTable* var_a8
            sub_142aa7770(&var_a8)
            struct icu_64::UObject::icu_64::FieldPosition::VTable* var_d8 =
                &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
            int32_t var_d0_1 = 0xffffffff
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rdi_1 =
                nullptr
            int64_t var_cc_1 = 0
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_3 =
                j_sub_142a7dd00(0x48)
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** 
                var_b8_1 = rax_3
            
            if (rax_3 != 0)
                rdi_1 = sub_142ab2be0(rax_3)
            
            if (rdi_1 != 0)
                sub_142ab4be0(rdi_1, -0x8000000000000000)
                sub_142aa7af0(&var_a8, rdi_1)
                (*(*rax_2 + 0x28))(rax_2, &var_a8, arg4, &var_d8, arg5)
            else
                *arg5 = 7
            
            (**rax_2)(rax_2, 1)
            sub_142aa8290(&var_d8)
            sub_142aa7840(&var_a8)

__security_check_cookie(rax_1 ^ &var_108)
return arg4
