// 函数: sub_142ae2980
// 地址: 0x142ae2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = arg2
int64_t var_10 = -2
int32_t var_18 = 0
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
int32_t var_18_1 = 1
sub_142a48100(arg2, sub_142ae0d50(arg1 + 0x48, arg2))

if (*(arg1 + 0x88) != 0)
    int16_t rax_1 = arg2[1].w
    int32_t r9_2
    
    if (rax_1 s< 0)
        r9_2 = *(arg2 + 0xc)
    else
        r9_2 = sx.d(rax_1) s>> 5
    
    int32_t rax_2 = sub_142a491f0(arg2, 0x61, 0, r9_2)
    
    if (rax_2 s>= 0)
        sub_142a49390(arg2, rax_2, 1, 0, 0, 0)

return arg2
