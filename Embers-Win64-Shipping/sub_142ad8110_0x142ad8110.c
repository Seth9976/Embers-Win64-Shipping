// 函数: sub_142ad8110
// 地址: 0x142ad8110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_108 = 0
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a456d0(&var_f8, arg1 + 0x220)
sub_142a46d60(&var_f8, "calendar", (*(*arg2 + 0xb0))(arg2), &var_108)
struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rax_4
int64_t zmm0
rax_4, zmm0 = sub_142b591d0(&var_f8, &var_108)

if (var_108 s<= 0)
    sub_142a6d130(arg1, arg2)
    struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rdi_1 = *(arg1 + 0x300)
    
    if (rdi_1 != 0)
        sub_142b57bd0(rdi_1)
        zmm0 = sub_142a47920(rdi_1)
    
    *(arg1 + 0x300) = rax_4
    sub_142ad9670(arg1, zmm0)

sub_142a45a20(&var_f8)
__security_check_cookie(rax_1 ^ &var_128)
return &icu_64::UObject::`vftable'
