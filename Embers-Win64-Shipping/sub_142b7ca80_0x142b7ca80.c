// 函数: sub_142b7ca80
// 地址: 0x142b7ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::CollationDataBuilder::VTable** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &icu_64::CollationDataBuilder::`vftable'{for `icu_64::UObject'}
arg1[1] = sub_142b68c10(arg2)
__builtin_memset(&arg1[2], 0, 0x18)
sub_142ae7bc0(&arg1[5], arg2)
sub_142aeb0c0(&arg1[9], arg2)
sub_142ae6d20(&arg1[0xd], arg2)
sub_142a9db60(&arg1[0x12])
arg1[0x2b] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x2c].w = 2
sub_142a9db60(&arg1[0x33])
arg1[0x4c].w = 0
arg1[0x4d] = 0
arg1[0x4e] = 0
int32_t rdx_3 = arg1[6].d
char rax_1

if (rdx_3 + 1 s< 0 || *(arg1 + 0x34) s< rdx_3 + 1)
    rax_1 = sub_142ae7df0(&arg1[5], rdx_3 + 1, arg2)

if ((rdx_3 + 1 s>= 0 && *(arg1 + 0x34) s>= rdx_3 + 1) || rax_1 != 0)
    *(arg1[8] + (sx.q(arg1[6].d) << 2)) = 0
    arg1[6].d = &arg1[6].d->__offset(0x0).q + 1

sub_142a87050(&arg1[0xd], destroy_fls)
return arg1
