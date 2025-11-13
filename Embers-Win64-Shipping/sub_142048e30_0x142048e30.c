// 函数: sub_142048e30
// 地址: 0x142048e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
arg1[2] = 0
*arg1 = &data_1432aae28
__builtin_memset(&arg1[3], 0, 0x30)
arg1[9].d = arg2.d
*(arg1 + 0x4c) = arg3
int32_t var_78 = 1
int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int128_t var_88 = zx.o(0)
char var_60 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int128_t var_74 = data_143dbb1e0
int32_t var_64 = rax_3
void var_98
(*(*rcx_1 + 0x498))(rcx_1, &var_98, &data_143f02b98, zx.q((arg2 << 2).d), 0x209, &var_88)
sub_1405d1600(&arg1[2], &var_98)
sub_1405d1550(&var_98)
int64_t* rcx_4 = data_143f0f180
int128_t* var_a0
var_a0.b = 0x1c
(*(*rcx_4 + 0x4b8))(rcx_4, &var_98, &data_143f02b98, arg1[2], 4, var_a0)
sub_1405d1600(&arg1[3], &var_98)
sub_1405ec8a0(&var_98)
int64_t* rcx_7 = data_143f0f180
int32_t var_a8_1
var_a8_1.b = 0x1c
(*(*rcx_7 + 0x590))(rcx_7, &var_98, &data_143f02b98, arg1[2], var_a8_1)
sub_1405d1600(&arg1[4], &var_98)
sub_1405d1550(&var_98)
int32_t rdx_6 = *arg4

if (((rdx_6 u>> 7).b & 1) != 0)
    int64_t* rcx_10 = data_143f0f180
    var_a0.b = 0x1d
    (*(*rcx_10 + 0x4b8))(rcx_10, &var_98, &data_143f02b98, arg1[2], 4, var_a0)
    sub_1405d1600(&arg1[5], &var_98)
    sub_1405ec8a0(&var_98)
    int64_t* rcx_13 = data_143f0f180
    int32_t var_a8_2
    var_a8_2.b = 0x1d
    (*(*rcx_13 + 0x590))(rcx_13, &var_98, &data_143f02b98, arg1[2], var_a8_2)
    sub_1405d1600(&arg1[6], &var_98)
    sub_1405d1550(&var_98)
    rdx_6 = *arg4

if (((rdx_6 u>> 6).b & 1) != 0)
    int64_t* rcx_16 = data_143f0f180
    var_a0.b = 0xf
    (*(*rcx_16 + 0x4b8))(rcx_16, &var_98, &data_143f02b98, arg1[2], 4, var_a0)
    sub_1405d1600(&arg1[7], &var_98)
    sub_1405ec8a0(&var_98)
    int64_t* rcx_19 = data_143f0f180
    int32_t var_a8_3
    var_a8_3.b = 0xf
    (*(*rcx_19 + 0x590))(rcx_19, &var_98, &data_143f02b98, arg1[2], var_a8_3)
    sub_1405d1600(&arg1[8], &var_98)
    sub_1405d1550(&var_98)

__security_check_cookie(rax_1 ^ &var_c8)
return arg1
