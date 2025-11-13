// 函数: sub_142b413c0
// 地址: 0x142b413c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = arg1
int64_t var_10 = -2
int32_t var_18 = 0

if (*arg3 s<= 0)
    char rax_2
    
    if (data_144016b70 != 2)
        rax_2 = sub_142a85f00(&data_144016b70)
    
    if (data_144016b70 == 2 || rax_2 == 0)
        int32_t rax_4 = data_144016b74
        
        if (rax_4 s> 0)
            *arg3 = rax_4
    else
        sub_142b41ef0(arg3)
        data_144016b74 = *arg3
        sub_142a85e80(&data_144016b70)

*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
int32_t var_18_1 = 1
sub_142b41a60(arg2, arg1, arg3)
return arg1
