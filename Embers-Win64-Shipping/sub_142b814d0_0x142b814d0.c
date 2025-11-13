// 函数: sub_142b814d0
// 地址: 0x142b814d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::NFSubstitution::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::NFSubstitution::icu_64::SameValueSubstitution::VTable** result = arg1
sub_142b810d0(arg1, arg2, arg3, arg4, arg5)
*result = &icu_64::SameValueSubstitution::`vftable'{for `icu_64::NFSubstitution'}
int16_t rax = *(arg4 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg4 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

if (sub_142a48fb0(arg4, 0, r8_1, &data_14367dae0, 0, 2) == 0)
    *arg5 = 9

return result
