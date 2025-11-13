// 函数: sub_142b66fd0
// 地址: 0x142b66fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_20 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int32_t var_18 = 0
int32_t var_14 = 0xffffffff
sub_142b67080(arg1, arg2, &var_20, nullptr, arg3)

if (*arg3 s<= 0)
    int32_t arg_18 = var_18
    sub_142b13c70(arg2, &arg_18, 1)
    int16_t rax_2 = *(arg2 + 8)
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(arg2 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if (arg_18 != rax_4)
        *arg3 = 1

sub_142aa8450(&var_20)
return arg1
