// 函数: sub_142a97880
// 地址: 0x142a97880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result

if (*arg3 s<= 0)
    sub_142b100e0(arg1[0x3d], 0, 0)
    sub_142b10100(arg1[0x3e])
    sub_142aea410(&arg1[0x29], arg2, 0, 1, arg4, arg3)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_60_1 = 2
    sub_142a72570(&arg1[0x43], &var_68)
    sub_142a47ff0(&var_68)
    int64_t* rcx_5 = arg1[0x42]
    
    if (rcx_5 != &arg1[0x43] && rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
    
    arg1[0x42] = &arg1[0x43]
    result = (*(*arg1 + 0x48))(arg1)

__security_check_cookie(result_1 ^ &var_a8)
return result
