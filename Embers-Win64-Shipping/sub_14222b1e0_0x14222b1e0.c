// 函数: sub_14222b1e0
// 地址: 0x14222b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
sub_14226dda0(&var_48, arg2, **arg1)
int128_t* rax_3 = arg1[1]
int32_t* rax_4 = *arg1
float var_38[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_3, *(rax_3 + 8)), _mm_unpacklo_ps(*(rax_3 + 4), 0)[0].q)
void** result = sub_142279530(arg2, &var_48, *rax_4)
__security_check_cookie(rax_1 ^ &var_68)
return result
