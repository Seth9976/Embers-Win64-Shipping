// 函数: sub_142b80f70
// 地址: 0x142b80f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::NFSubstitution::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::NFSubstitution::icu_64::ModulusSubstitution::VTable** result = arg1
sub_142b810d0(arg1, arg2, arg5, arg6, arg7)
*result = &icu_64::ModulusSubstitution::`vftable'{for `icu_64::NFSubstitution'}
int64_t rax = sub_142b342b0(arg3)
result[4] = rax
result[5] = 0

if (rax == 0)
    *arg7 = 9

int16_t rax_1 = *(arg6 + 8)
int32_t r8_2

if (rax_1 s< 0)
    r8_2 = *(arg6 + 0xc)
else
    r8_2 = sx.d(rax_1) s>> 5

if (sub_142a48fb0(arg6, 0, r8_2, &data_14367dae8, 0, 3) == 0)
    result[5] = arg4

return result
