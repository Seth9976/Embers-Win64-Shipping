// 函数: sub_142ab59d0
// 地址: 0x142ab59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int16_t var_6c
void* var_78 = &var_6c:1
int32_t var_70 = 0x28
var_6c = 0
int32_t var_40 = 0
void var_98
uint128_t zmm1 = *sub_142a85330(&var_98, "NumberElements/")
sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg4)
zmm1 = *sub_142a85330(&var_98, arg2)
sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg4)
zmm1 = *sub_142a85330(&var_98, "/patterns/")
sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg4)
zmm1 = *sub_142a85330(&var_98, arg3)
sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg4)
void* const result

if (*arg4 s<= 0)
    result = sub_142a63c50(arg1, var_78, nullptr, arg5)
else
    result = &data_143652e2c

if (var_6c.b != 0)
    sub_142a7dcd0(var_78)

__security_check_cookie(rax_1 ^ &var_b8)
return result
