// 函数: sub_142ab5f40
// 地址: 0x142ab5f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int16_t var_5c
void* var_68 = &var_5c:1
int32_t var_60 = 0x28
var_5c = 0
int32_t var_30 = 0
uint128_t zmm1 = *arg2
int64_t* result = sub_142a8cbd0(&var_68, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg3)

if (*arg3 s<= 0)
    result = sub_142ab58c0(arg1, var_68, *(arg2 + 8), arg3)

if (var_5c.b != 0)
    result = sub_142a7dcd0(var_68)

__security_check_cookie(rax_1 ^ &var_98)
return result
