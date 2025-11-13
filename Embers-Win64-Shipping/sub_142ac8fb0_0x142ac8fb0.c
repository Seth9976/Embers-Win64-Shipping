// 函数: sub_142ac8fb0
// 地址: 0x142ac8fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (sub_142ac68a0(arg2, arg3, arg4) == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
    int16_t var_78[0x20]
    sub_142a47d50(&var_b8, &var_78, 0, 0x20)
    
    if (sub_142ac6800(arg2, arg3, &var_b8) != 0)
        int64_t* rcx_3 = *(arg1 + 0x230)
        (*(*rcx_3 + 0x38))(rcx_3, &var_b8, arg1 + 0x228, arg4, var_c8)
    
    sub_142a47ff0(&var_b8)

__security_check_cookie(rax_1 ^ &var_e8)
return arg4
