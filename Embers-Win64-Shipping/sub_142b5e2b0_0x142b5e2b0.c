// 函数: sub_142b5e2b0
// 地址: 0x142b5e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* var_b0 = arg1
uint128_t zmm6 = zx.o(arg5)
*arg1 = arg2
*(arg1 + 8) = arg3
sub_142aa7770(&arg1[4])
*(arg1 + 0x80) = zmm6.q
arg1[0x22] = 0xffffffff
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x28].w = 2
arg1[0x36].b = 0
zmm6.q f- 0.0

if (is_unordered.q(zmm6.q, 0.0) || zmm6.q f!= 0.0)
    int128_t zmm0_1
    zmm0_1.q = sub_142aa7d40(arg4, arg6).q f- zmm6.q
    struct icu_64::UObject::icu_64::Formattable::VTable* var_a8
    sub_142aa7700(&var_a8, zmm0_1)
    sub_142aa7870(&arg1[4], &var_a8)
    sub_142aa7840(&var_a8)
else
    sub_142aa7870(&arg1[4], arg4)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
