// 函数: sub_142b813b0
// 地址: 0x142b813b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::UObject::icu_64::NFSubstitution::VTable** var_88 = arg1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
int128_t zmm6_1 = sub_142b810d0(arg1, arg2, arg4, sub_142b82b30(&var_78, arg5), arg6)
sub_142a47ff0(&var_78)
*arg1 = &icu_64::NumeratorSubstitution::`vftable'{for `icu_64::NFSubstitution'}
arg1[4] = zmm6_1.q
arg1[5] = sub_142b36c50(zmm6_1)
int16_t rax_4 = *(arg5 + 8)
int32_t rdx_3

if (rax_4 s< 0)
    rdx_3 = *(arg5 + 0xc)
else
    rdx_3 = sx.d(rax_4) s>> 5

int32_t* var_a8
var_a8.d = 0
arg1[6].b = sub_142a48fb0(arg5, rdx_3 - 2, 2, &data_14367daf8, var_a8.d, 2) == 0
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
