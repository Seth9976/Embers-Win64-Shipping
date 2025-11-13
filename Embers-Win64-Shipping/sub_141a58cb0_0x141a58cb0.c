// 函数: sub_141a58cb0
// 地址: 0x141a58cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
int64_t i_1 = 1
var_28 = arg1
int32_t var_18 = 1
uint128_t var_20
int128_t* result = &var_20
int32_t* rcx = &var_28
int64_t i

do
    uint128_t zmm0 = zx.o(*rcx)
    result += 8
    rcx = &rcx[1]
    *(result - 8) = (_mm_cvtepi32_pd(zmm0.q)).q
    i = i_1
    i_1 -= 1
while (i != 1)
*arg2 = var_20
__security_check_cookie(rax_1 ^ &var_28)
return result
