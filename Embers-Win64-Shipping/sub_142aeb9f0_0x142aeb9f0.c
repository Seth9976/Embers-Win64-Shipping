// 函数: sub_142aeb9f0
// 地址: 0x142aeb9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax = j_sub_142a7dd00(0x40)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = rax
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_1

if (rax == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_142a479b0(rax, arg2)

*(*(arg1 + 0x10) + 0x10) = rcx_1
int64_t var_b8 = 0x345ad82c
int32_t var_b0 = 0
int32_t var_ac = 0x90
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x80)
int32_t* result
int512_t zmm1
result, zmm1 = sub_142aea9e0(&var_b8, *(*(arg1 + 0x10) + 0x10), arg4)

if (*arg4 s> 0)
    return result

sub_142aebb00(arg1, &var_b8, arg3, arg4, zmm1)
return sub_142aea470(&var_b8)
