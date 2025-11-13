// 函数: sub_142b681d0
// 地址: 0x142b681d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_20 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int32_t var_18 = 0
int32_t var_14 = 0xffffffff
int32_t* arg_28
int32_t* rdi = arg_28
sub_142b68060(arg1, arg2, &var_20, arg3, arg4, rdi)

if (*rdi s<= 0)
    int32_t rcx = var_18
    arg_28.d = rcx
    
    if ((arg3.b & 1) != 0)
        sub_142b13c70(arg2, &arg_28, 1)
        rcx = arg_28.d
    
    int16_t rax_1 = *(arg2 + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(arg2 + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    if (rcx != rax_3)
        *rdi = 1

sub_142aa8450(&var_20)
return arg1
