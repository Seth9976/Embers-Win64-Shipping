// 函数: sub_142aaeac0
// 地址: 0x142aaeac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158

if (*arg5 s<= 0)
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_108
    sub_142ab2b60(&var_108, arg2)
    
    if (sub_142ab36d0(&var_108, 0) == 0)
        sub_142ab4700(&var_108, 0, 4, arg5)
        
        if (sub_142ab36d0(&var_108, 0) == 0)
            int64_t* rax_5 = sub_142a58760(&arg1[0x32], 1, arg5)
            int64_t* var_118_1 = rax_5
            
            if (rax_5 == 0 && *arg5 s<= rax_5.d)
                *arg5 = 7
            
            if (rax_5 == 0)
                goto label_142aaec5e
            
            struct icu_64::UObject::icu_64::Formattable::VTable* var_b8
            sub_142aa7770(&var_b8)
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_6 =
                j_sub_142a7dd00(0x48)
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** 
                var_128_1 = rax_6
            
            if (rax_6 != 0)
                rax_6 = sub_142ab2b60(rax_6, arg2)
            
            if (rax_6 == 0 && *arg5 s<= rax_6.d)
                *arg5 = 7
            
            if (rax_6 != 0)
                int64_t var_128_2 = 0
                sub_142aa7af0(&var_b8, rax_6)
                (*(*rax_5 + 0x20))(rax_5, &var_b8, arg3, arg4, arg5)
                sub_142aa7840(&var_b8)
                (**rax_5)(rax_5, 1)
            else
                sub_142aa7840(&var_b8)
            label_142aaec5e:
                
                if (rax_5 != 0)
                    (**rax_5)(rax_5, 1)
        else
            int64_t rbx_2 = *arg1
            int128_t zmm0_1
            int512_t zmm1_1
            zmm0_1, zmm1_1 = sub_142ab5010(arg2)
            zmm1_1.o = zmm0_1
            (*(rbx_2 + 0x80))(arg1, zmm1_1, arg3, arg4, arg5)
    else
        (*(*arg1 + 0x50))(arg1, sub_142ab5250(arg2, 0), arg3, arg4, arg5)
    
    sub_142ab2c10(&var_108)

__security_check_cookie(rax_1 ^ &var_158)
return arg3
