// 函数: sub_142b46090
// 地址: 0x142b46090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::UObject::icu_64::MeasureUnit::VTable** var_60 = arg1
struct icu_64::MeasureUnit::icu_64::CurrencyUnit::VTable** var_40 = arg2
sub_142ab6700(arg1, arg2)
void var_50
uint128_t zmm1 = *sub_142a85330(&var_50, *(arg3 + 0x28))
int64_t* var_58 = &arg1[4]
arg1[4] = arg1 + 0x2d
arg1[5].d = 0x28
*(arg1 + 0x2c) = 0
arg1[0xb].d = 0
*(arg1 + 0x2d) = 0
sub_142a8cbd0(&arg1[4], zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg4)
arg1[0xc] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0xd].w = 2
arg1[0x14] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x15].w = 2
sub_142a4ab40(&arg1[0xc])
sub_142a4ab40(&arg1[0x14])
sub_142ab6900(arg2)
__security_check_cookie(rax_1 ^ &var_88)
return arg1
