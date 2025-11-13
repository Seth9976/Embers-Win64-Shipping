// 函数: sub_141c74810
// 地址: 0x141c74810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int128_t zmm0 = *arg3
void* rsi = *(arg1 + 0xa90)
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
sub_1405cd980(&var_e8, &arg3[1])
int128_t var_88 = zmm0
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405cd980(&var_78, &var_e8)
void*** rax_2 = sub_140a82f30(0x78, 8)
*rax_2 = &data_14320af80
rax_2[1] = rsi
rax_2[2].d = arg2
sub_141c4e840(&rax_2[3], &var_88)
*rax_2 = &data_14320afa0
void* (* var_138)(int64_t* arg1)
void* (* rax_3)(int64_t* arg1) = var_138

if (rax_2 != -8)
    rax_3 = j_sub_141c53200

void*** var_128 = rax_2
var_138 = rax_3
sub_141c56770(rsi, &var_138)
sub_1405ae200(&var_78)
void* result = sub_1405ae200(&var_e8)
__security_check_cookie(rax_1 ^ &var_158)
return result
